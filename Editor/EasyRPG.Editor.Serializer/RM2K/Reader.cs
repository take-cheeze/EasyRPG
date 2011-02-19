using System;
using System.IO;
using System.Text;
using EasyRPG.Editor.Common;

namespace EasyRPG.Editor.Serializer.RM2K
{
	public class Rm2KReader : BinaryReader
	{
		#region PrivateMembers
		private Encoding encoding; 
		#endregion

		#region PublicProperties
		public string EncodingName
		{
			get
			{
				return encoding.EncodingName;
			}
			set
			{
				encoding = Encoding.GetEncoding(value);
			}
		}

		public int CodePage
		{
			get
			{
				return encoding.CodePage;
			}
			set
			{
				encoding = Encoding.GetEncoding(value);
			}
		} 
		#endregion

		#region Constructor
		public Rm2KReader(Stream stream) :
			base(stream)
		{
		} 
		#endregion

		#region BehaviorMethods
		public bool EndOfFile()
		{
			return BaseStream.Length == BaseStream.Position;
		}

		public void Skip(int offset)
		{
			base.BaseStream.Seek(offset, SeekOrigin.Current);
		}

		public bool ReadCompressedBool()
		{
			return ReadCompressedInt() > 0;
		}

		public Int32 ReadCompressedInt()
		{
			var value = 0;
			byte temp = 0;

			do
			{
				value <<= 7;

				if (EndOfFile())
				{
					return temp;
				}

				temp = ReadByte();

				value |= temp & 0x7F;
			} while ((temp & 0x80) != 0);

			return value;
		}

		public ExtendedObservableCollection<bool> ReadBoolArray(int size)
		{
			var list = new ExtendedObservableCollection<bool>();
			for (var i = 0; i < size; i++)
			{
				list.Add(ReadBoolean());
			}
			return list;
		}

		public ExtendedObservableCollection<byte> ReadByteArray(int size)
		{
			var list = new ExtendedObservableCollection<byte>();
			for (var i = 0; i < size; i++)
			{
				list.Add(ReadByte());
			}
			return list;
		}

		public ExtendedObservableCollection<Int16> ReadInt16Array(int size)
		{
			var list = new ExtendedObservableCollection<Int16>();
			for (var i = 0; i < size / 2; i++)
			{
				list.Add(ReadInt16());
			}
			return list;
		}

		public ExtendedObservableCollection<Int32> ReadInt32Array(int size)
		{
			var list = new ExtendedObservableCollection<Int32>();
			for (var i = 0; i < size / 4; i++)
			{
				list.Add(ReadInt32());
			}
			return list;
		}

		public string ReadString(int size)
		{
			return Encoding.ASCII.GetString(ReadBytes(size));
			//return Encoding.Unicode.GetString(Encoding.Convert(encoding, Encoding.Unicode, ReadBytes(size)));
		} 
		#endregion
	}
}
