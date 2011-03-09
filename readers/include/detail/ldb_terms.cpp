/////////////////////////////////////////////////////////////////////////////
// This file is part of EasyRPG.
//
// EasyRPG is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// EasyRPG is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with EasyRPG Player. If not, see <http://www.gnu.org/licenses/>.
/////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "ldb_reader.h"
#include "ldb_chunks.h"
#include "reader_lcf.h"
#include "reader_struct.h"

////////////////////////////////////////////////////////////
/// Read Terms
////////////////////////////////////////////////////////////
EASYRPG_STRUCT_ID_READER(Terms, NoID)

EASYRPG_STRUCT_NAME(Terms)

#define EASYRPG_CHUNK_SUFFIX LDB_Reader
#define EASYRPG_CURRENT_STRUCT Terms

EASYRPG_STRUCT_FIELD_MAP_BEGIN(Terms)
	, EASYRPG_TYPED_FIELD_PAIR(std::string, encounter, ('enco')('unte')('r'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, special_combat, ('spec')('ial_')('comb')('at'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, escape_success, ('esca')('pe_s')('ucce')('ss'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, escape_failure, ('esca')('pe_f')('ailu')('re'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, victory, ('vict')('ory'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, defeat, ('defe')('at'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, exp_received, ('exp_')('rece')('ived'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, gold_recieved_a, ('gold')('_rec')('ieve')('d_a'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, gold_recieved_b, ('gold')('_rec')('ieve')('d_b'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, item_recieved, ('item')('_rec')('ieve')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, attacking, ('atta')('ckin')('g'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, actor_critical, ('acto')('r_cr')('itic')('al'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, enemy_critical, ('enem')('y_cr')('itic')('al'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, defending, ('defe')('ndin')('g'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, observing, ('obse')('rvin')('g'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, focus, ('focu')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, autodestruction, ('auto')('dest')('ruct')('ion'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, enemy_escape, ('enem')('y_es')('cape'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, enemy_transform, ('enem')('y_tr')('ansf')('orm'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, enemy_damaged, ('enem')('y_da')('mage')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, enemy_undamaged, ('enem')('y_un')('dama')('ged'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, actor_damaged, ('acto')('r_da')('mage')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, actor_undamaged, ('acto')('r_un')('dama')('ged'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, skill_failure_a, ('skil')('l_fa')('ilur')('e_a'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, skill_failure_b, ('skil')('l_fa')('ilur')('e_b'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, skill_failure_c, ('skil')('l_fa')('ilur')('e_c'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, dodge, ('dodg')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, use_item, ('use_')('item'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, hp_recovery, ('hp_r')('ecov')('ery'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, parameter_increase, ('para')('mete')('r_in')('crea')('se'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, parameter_decrease, ('para')('mete')('r_de')('crea')('se'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, actor_hp_absorbed, ('acto')('r_hp')('_abs')('orbe')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, enemy_hp_absorbed, ('enem')('y_hp')('_abs')('orbe')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, resistance_increase, ('resi')('stan')('ce_i')('ncre')('ase'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, resistance_decrease, ('resi')('stan')('ce_d')('ecre')('ase'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, level_up, ('leve')('l_up'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, skill_learned, ('skil')('l_le')('arne')('d'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, battle_start, ('batt')('le_s')('tart'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, miss, ('miss'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_greeting1, ('shop')('_gre')('etin')('g1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_regreeting1, ('shop')('_reg')('reet')('ing1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_buy1, ('shop')('_buy')('1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sell1, ('shop')('_sel')('l1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_leave1, ('shop')('_lea')('ve1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_buy_select1, ('shop')('_buy')('_sel')('ect1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_buy_number1, ('shop')('_buy')('_num')('ber1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_purchased1, ('shop')('_pur')('chas')('ed1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sell_select1, ('shop')('_sel')('l_se')('lect')('1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sell_number1, ('shop')('_sel')('l_nu')('mber')('1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sold1, ('shop')('_sol')('d1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_greeting2, ('shop')('_gre')('etin')('g2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_regreeting2, ('shop')('_reg')('reet')('ing2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_buy2, ('shop')('_buy')('2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sell2, ('shop')('_sel')('l2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_leave2, ('shop')('_lea')('ve2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_buy_select2, ('shop')('_buy')('_sel')('ect2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_buy_number2, ('shop')('_buy')('_num')('ber2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_purchased2, ('shop')('_pur')('chas')('ed2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sell_select2, ('shop')('_sel')('l_se')('lect')('2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sell_number2, ('shop')('_sel')('l_nu')('mber')('2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sold2, ('shop')('_sol')('d2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_greeting3, ('shop')('_gre')('etin')('g3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_regreeting3, ('shop')('_reg')('reet')('ing3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_buy3, ('shop')('_buy')('3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sell3, ('shop')('_sel')('l3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_leave3, ('shop')('_lea')('ve3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_buy_select3, ('shop')('_buy')('_sel')('ect3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_buy_number3, ('shop')('_buy')('_num')('ber3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_purchased3, ('shop')('_pur')('chas')('ed3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sell_select3, ('shop')('_sel')('l_se')('lect')('3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sell_number3, ('shop')('_sel')('l_nu')('mber')('3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shop_sold3, ('shop')('_sol')('d3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_a_greeting_1, ('inn_')('a_gr')('eeti')('ng_1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_a_greeting_2, ('inn_')('a_gr')('eeti')('ng_2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_a_greeting_3, ('inn_')('a_gr')('eeti')('ng_3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_a_accept, ('inn_')('a_ac')('cept'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_a_cancel, ('inn_')('a_ca')('ncel'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_b_greeting_1, ('inn_')('b_gr')('eeti')('ng_1'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_b_greeting_2, ('inn_')('b_gr')('eeti')('ng_2'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_b_greeting_3, ('inn_')('b_gr')('eeti')('ng_3'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_b_accept, ('inn_')('b_ac')('cept'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, inn_b_cancel, ('inn_')('b_ca')('ncel'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, possessed_items, ('poss')('esse')('d_it')('ems'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, equipped_items, ('equi')('pped')('_ite')('ms'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, gold, ('gold'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, battle_fight, ('batt')('le_f')('ight'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, battle_auto, ('batt')('le_a')('uto'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, battle_escape, ('batt')('le_e')('scap')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, command_attack, ('comm')('and_')('atta')('ck'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, command_defend, ('comm')('and_')('defe')('nd'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, command_item, ('comm')('and_')('item'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, command_skill, ('comm')('and_')('skil')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, menu_equipment, ('menu')('_equ')('ipme')('nt'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, menu_save, ('menu')('_sav')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, menu_quit, ('menu')('_qui')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, new_game, ('new_')('game'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, load_game, ('load')('_gam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, exit_game, ('exit')('_gam')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, status, ('stat')('us'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, row, ('row'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, order, ('orde')('r'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, wait_on, ('wait')('_on'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, wait_off, ('wait')('_off'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, level, ('leve')('l'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, health_points, ('heal')('th_p')('oint')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, spirit_points, ('spir')('it_p')('oint')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, normal_status, ('norm')('al_s')('tatu')('s'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, exp_short, ('exp_')('shor')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, lvl_short, ('lvl_')('shor')('t'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, hp_short, ('hp_s')('hort'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, sp_short, ('sp_s')('hort'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, sp_cost, ('sp_c')('ost'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, attack, ('atta')('ck'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, defense, ('defe')('nse'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, spirit, ('spir')('it'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, agility, ('agil')('ity'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, weapon, ('weap')('on'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, shield, ('shie')('ld'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, armor, ('armo')('r'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, helmet, ('helm')('et'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, accessory, ('acce')('ssor')('y'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, save_game_message, ('save')('_gam')('e_me')('ssag')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, load_game_message, ('load')('_gam')('e_me')('ssag')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, file, ('file'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, exit_game_message, ('exit')('_gam')('e_me')('ssag')('e'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, yes, ('yes'))
	, EASYRPG_TYPED_FIELD_PAIR(std::string, no, ('no'))
EASYRPG_STRUCT_FIELD_MAP_END()

#undef EASYRPG_CURRENT_STRUCT
#undef EASYRPG_CHUNK_SUFFIX
