/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119f5c  Symbol: KG_State_Call */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00119faa) */
/* WARNING: Removing unreachable block (ram,0x00119faa) */
/* KG_State_Call(int, cocos2d::CCLayer*, cocos2d::CCLayer*, int) */

void KG_State_Call(int param_1,CCLayer *param_2,CCLayer *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)param_3 + 0xa8))(param_3);
  if ((1 < *(int *)(*(int *)(iVar1 + 4) + 100) - 3U) &&
     ((((param_1 == 5 || (param_1 == 3)) || (param_1 == 0xe)) ||
      (((param_1 == 0xb || (param_1 == 9)) ||
       ((param_1 == 0xf || (iVar1 = Random(0,100), iVar1 < param_4)))))))) {
    switch(param_1) {
    case 1:
      KG_State_Position_Move_CALL(param_2,param_3);
      break;
    case 2:
      KG_State_SlipDown_CALL(param_2,param_3);
      break;
    case 3:
      KG_State_KnockBack_CALL(param_2,param_3);
      break;
    case 4:
      KG_State_Syncope_CALL(param_2,param_3);
      break;
    case 5:
      KG_State_Freezing_CALL(param_2,param_3);
      break;
    case 6:
      KG_State_Hemorrhage_CALL(param_2,param_3);
      break;
    case 9:
      KG_State_Poison_CALL(param_2,param_3);
      break;
    case 10:
      KG_State_Invulnerability_CALL(param_2,param_3);
      break;
    case 0xc:
      KG_State_STATE_CAPTIVATE_CALL(param_2,param_3);
      break;
    case 0xd:
      KG_State_Zombi_CALL(param_2,param_3);
      break;
    case 0x10:
      KG_State_Fear_CALL(param_2,param_3);
      break;
    case 0x11:
      KG_State_Die_Instantly_CALL(param_2,param_3);
    }
  }
  return;
}


