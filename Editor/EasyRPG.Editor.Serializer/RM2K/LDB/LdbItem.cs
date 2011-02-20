using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Item ReadItem()
		{
			var item = new Item
							{
								Id = stream.ReadCompressedInt()
							};

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkItem)stream.ReadCompressedInt();
				if (chunkId == (int)ChunkData.End)
				{
					break;
				}

				var chunkLenght = stream.ReadCompressedInt();
				if (chunkLenght == 0)
				{
					continue;
				}

				switch (chunkId)
				{
					case ChunkItem.Name:
						item.Name = stream.ReadString(chunkLenght);
						break;
					case ChunkItem.Description:
						item.Description = stream.ReadString(chunkLenght);
						break;
					case ChunkItem.Type:
						item.Type = (Item.ItemType)stream.ReadCompressedInt();
						if (item.Type == Item.ItemType.Switch)
						{
							item.OcassionField = true;
						}
						break;
					case ChunkItem.Price:
						item.Price = stream.ReadCompressedInt();
						break;
					case ChunkItem.Uses:
						item.Uses = stream.ReadCompressedInt();
						break;
					case ChunkItem.AtkPoints1:
						item.AtkPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.DefPoints1:
						item.DefPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.SpiPoints1:
						item.SpiPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.AgiPoints1:
						item.AgiPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.TwoHanded:
						item.TwoHanded = stream.ReadCompressedBool();
						break;
					case ChunkItem.SpCost:
						item.SpCost = stream.ReadCompressedInt();
						break;
					case ChunkItem.Hit:
						item.Hit = stream.ReadCompressedInt();
						break;
					case ChunkItem.CriticalHit:
						item.CriticalHit = stream.ReadCompressedInt();
						break;
					case ChunkItem.AnimationId:
						item.AnimationId = stream.ReadCompressedInt();
						break;
					case ChunkItem.Preemptive:
						item.Preemptive = stream.ReadCompressedBool();
						break;
					case ChunkItem.DualAttack:
						item.DualAttack = stream.ReadCompressedBool();
						break;
					case ChunkItem.AttackAll:
						item.AttackAll = stream.ReadCompressedBool();
						break;
					case ChunkItem.IgnoreEvasion:
						item.IgnoreEvasion = stream.ReadCompressedBool();
						break;
					case ChunkItem.PreventCritical:
						item.PreventCritical = stream.ReadCompressedBool();
						break;
					case ChunkItem.RaiseEvasion:
						item.RaiseEvasion = stream.ReadCompressedBool();
						break;
					case ChunkItem.HalfSpCost:
						item.HalfSpCost = stream.ReadCompressedBool();
						break;
					case ChunkItem.NoTerrainDamage:
						item.NoTerrainDamage = stream.ReadCompressedBool();
						break;
					case ChunkItem.Cursed:
						item.Cursed = stream.ReadCompressedBool();
						break;
					case ChunkItem.EntireParty:
						item.EntireParty = stream.ReadCompressedBool();
						break;
					case ChunkItem.RecoverHp:
						item.RecoverHp = stream.ReadCompressedInt();
						break;
					case ChunkItem.RecoverHpRate:
						item.RecoverHpRate = stream.ReadCompressedInt();
						break;
					case ChunkItem.RecoverSp:
						item.RecoverSp = stream.ReadCompressedInt();
						break;
					case ChunkItem.RecoverSpRate:
						item.RecoverSpRate = stream.ReadCompressedInt();
						break;
					case ChunkItem.OcassionField1:
						item.OcassionField = stream.ReadCompressedBool();
						break;
					case ChunkItem.KoOnly:
						item.KoOnly = stream.ReadCompressedBool();
						break;
					case ChunkItem.MaxHpPoints:
						item.MaxHpPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.MaxSpPoints:
						item.MaxSpPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.AtkPoints2:
						item.AtkPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.DefPoints2:
						item.DefPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.SpiPoints2:
						item.SpiPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.AgiPoints2:
						item.AgiPoints = stream.ReadCompressedInt();
						break;
					case ChunkItem.UsingMessage:
						item.UsingMessage = stream.ReadCompressedInt();
						break;
					case ChunkItem.SkillId:
						item.SkillId = stream.ReadCompressedInt();
						break;
					case ChunkItem.SwitchId:
						item.SwitchId = stream.ReadCompressedInt();
						break;
					case ChunkItem.OcassionField2:
						item.OcassionField = stream.ReadCompressedBool();
						break;
					case ChunkItem.OcassionBattle:
						item.OcassionBattle = stream.ReadCompressedBool();
						break;
					case ChunkItem.ActorSetSize:
						stream.ReadCompressedInt();
						break;
					case ChunkItem.ActorSet:
						item.ActorSet = stream.ReadBoolArray(chunkLenght);
						break;
					case ChunkItem.StateSetSize:
						stream.ReadCompressedInt();
						break;
					case ChunkItem.StateSet:
						item.StateSet = stream.ReadBoolArray(chunkLenght);
						break;
					case ChunkItem.AttributeSetSize:
						stream.ReadCompressedInt();
						break;
					case ChunkItem.AttributeSet:
						item.AttributeSet = stream.ReadBoolArray(chunkLenght);
						break;
					case ChunkItem.StateChance:
						item.StateChance = stream.ReadCompressedInt();
						break;
					case ChunkItem.StateEffect:
						item.StateEffect = stream.ReadCompressedBool();
						break;
					case ChunkItem.WeaponAnimation:
						item.WeaponAnimation = stream.ReadCompressedInt();
						break;
					case ChunkItem.UseSkill:
						item.UseSkill = stream.ReadCompressedBool();
						break;
					case ChunkItem.ClassSetSize:
						stream.ReadCompressedInt();
						break;
					case ChunkItem.ClassSet:
						item.ClassSet = stream.ReadBoolArray(chunkLenght);
						break;
					case ChunkItem.AnimationData:
						for (var i = stream.ReadCompressedInt(); i > 0; i--)
						{
							item.AnimationData.Add(ReadItemAnimation());
						}
						break;
					case ChunkItem.RangedTarget:
						item.RangedTarget = stream.ReadCompressedInt();
						break;
					case ChunkItem.RangedTrajectory:
						item.RangedTrajectory = stream.ReadCompressedInt();
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return item;
		}
		#endregion
	}
}
