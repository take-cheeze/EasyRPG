using EasyRPG.Editor.RPG;

namespace EasyRPG.Editor.Serializer.RM2K.LDB
{
	public partial class LdbReader
	{
		#region BehaviorMethods
		private Terms ReadTerms()
		{
			var terms = new Terms();

			while (!stream.EndOfFile())
			{
				var chunkId = (ChunkTerms)stream.ReadCompressedInt();
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
					case ChunkTerms.Encounter:
						terms.Encounter = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.SpecialCombat:
						terms.SpecialCombat = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.EscapeSuccess:
						terms.EscapeSuccess = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.EscapeFailure:
						terms.EscapeFailure = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Victory:
						terms.Victory = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Defeat:
						terms.Defeat = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ExpReceived:
						terms.ExpReceived = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.GoldRecievedA:
						terms.GoldRecievedA = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.GoldRecievedB:
						terms.GoldRecievedB = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ItemRecieved:
						terms.ItemRecieved = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Attacking:
						terms.Attacking = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ActorCritical:
						terms.ActorCritical = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.EnemyCritical:
						terms.EnemyCritical = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Defending:
						terms.Defending = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Observing:
						terms.Observing = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Focus:
						terms.Focus = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Autodestruction:
						terms.Autodestruction = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.EnemyEscape:
						terms.EnemyEscape = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.EnemyTransform:
						terms.EnemyTransform = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.EnemyDamaged:
						terms.EnemyDamaged = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.EnemyUndamaged:
						terms.EnemyUndamaged = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ActorDamaged:
						terms.ActorDamaged = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ActorUndamaged:
						terms.ActorUndamaged = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.SkillFailureA:
						terms.SkillFailureA = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.SkillFailureB:
						terms.SkillFailureB = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.SkillFailureC:
						terms.SkillFailureC = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Dodge:
						terms.Dodge = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.UseItem:
						terms.UseItem = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.HpRecovery:
						terms.HpRecovery = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ParameterIncrease:
						terms.ParameterIncrease = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ParameterDecrease:
						terms.ParameterDecrease = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ActorHpAbsorbed:
						terms.ActorHpAbsorbed = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.EnemyHpAbsorbed:
						terms.EnemyHpAbsorbed = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ResistanceIncrease:
						terms.ResistanceIncrease = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ResistanceDecrease:
						terms.ResistanceDecrease = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.LevelUp:
						terms.LevelUp = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.SkillLearned:
						terms.SkillLearned = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.BattleStart:
						terms.BattleStart = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Miss:
						terms.Miss = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopGreeting1:
						terms.ShopGreeting1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopRegreeting1:
						terms.ShopRegreeting1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopBuy1:
						terms.ShopBuy1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSell1:
						terms.ShopSell1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopLeave1:
						terms.ShopLeave1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopBuySelect1:
						terms.ShopBuySelect1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopBuyNumber1:
						terms.ShopBuyNumber1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopPurchased1:
						terms.ShopPurchased1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSellSelect1:
						terms.ShopSellSelect1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSellNumber1:
						terms.ShopSellNumber1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSold1:
						terms.ShopSold1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopGreeting2:
						terms.ShopGreeting2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopRegreeting2:
						terms.ShopRegreeting2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopBuy2:
						terms.ShopBuy2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSell2:
						terms.ShopSell2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopLeave2:
						terms.ShopLeave2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopBuySelect2:
						terms.ShopBuySelect2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopBuyNumber2:
						terms.ShopBuyNumber2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopPurchased2:
						terms.ShopPurchased2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSellSelect2:
						terms.ShopSellSelect2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSellNumber2:
						terms.ShopSellNumber2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSold2:
						terms.ShopSold2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopGreeting3:
						terms.ShopGreeting3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopRegreeting3:
						terms.ShopRegreeting3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopBuy3:
						terms.ShopBuy3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSell3:
						terms.ShopSell3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopLeave3:
						terms.ShopLeave3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopBuySelect3:
						terms.ShopBuySelect3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopBuyNumber3:
						terms.ShopBuyNumber3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopPurchased3:
						terms.ShopPurchased3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSellSelect3:
						terms.ShopSellSelect3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSellNumber3:
						terms.ShopSellNumber3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ShopSold3:
						terms.ShopSold3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnAGreeting1:
						terms.InnAGreeting1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnAGreeting2:
						terms.InnAGreeting2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnAGreeting3:
						terms.InnAGreeting3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnAAccept:
						terms.InnAAccept = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnACancel:
						terms.InnACancel = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnBGreeting1:
						terms.InnBGreeting1 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnBGreeting2:
						terms.InnBGreeting2 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnBGreeting3:
						terms.InnBGreeting3 = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnBAccept:
						terms.InnBAccept = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.InnBCancel:
						terms.InnBCancel = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.PossessedItems:
						terms.PossessedItems = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.EquippedItems:
						terms.EquippedItems = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Gold:
						terms.Gold = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.BattleFight:
						terms.BattleFight = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.BattleAuto:
						terms.BattleAuto = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.BattleEscape:
						terms.BattleEscape = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.CommandAttack:
						terms.CommandAttack = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.CommandDefend:
						terms.CommandDefend = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.CommandItem:
						terms.CommandItem = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.CommandSkill:
						terms.CommandSkill = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.MenuEquipment:
						terms.MenuEquipment = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.MenuSave:
						terms.MenuSave = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.MenuQuit:
						terms.MenuQuit = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.NewGame:
						terms.NewGame = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.LoadGame:
						terms.LoadGame = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ExitGame:
						terms.ExitGame = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Status:
						terms.Status = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Row:
						terms.Row = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Order:
						terms.Order = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.WaitOn:
						terms.WaitOn = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.WaitOff:
						terms.WaitOff = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Level:
						terms.Level = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.HealthPoints:
						terms.HealthPoints = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.SpiritPoints:
						terms.SpiritPoints = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.NormalStatus:
						terms.NormalStatus = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ExpShort:
						terms.ExpShort = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.LvlShort:
						terms.LvlShort = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.HpShort:
						terms.HpShort = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.SpShort:
						terms.SpShort = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.SpCost:
						terms.SpCost = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Attack:
						terms.Attack = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Defense:
						terms.Defense = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Spirit:
						terms.Spirit = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Agility:
						terms.Agility = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Weapon:
						terms.Weapon = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Shield:
						terms.Shield = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Armor:
						terms.Armor = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Helmet:
						terms.Helmet = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Accessory:
						terms.Accessory = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.SaveGameMessage:
						terms.SaveGameMessage = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.LoadGameMessage:
						terms.LoadGameMessage = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.ExitGameMessage:
						terms.ExitGameMessage = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.File:
						terms.File = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.Yes:
						terms.Yes = stream.ReadString(chunkLenght);
						break;
					case ChunkTerms.No:
						terms.No = stream.ReadString(chunkLenght);
						break;
					default:
						stream.Skip(chunkLenght);
						break;
				}
			}
			return terms;
		}
		#endregion
	}
}
