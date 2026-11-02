/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bb036  Symbol: ani_attack_1_2_ani */

/* ani_attack_1_2_ani(cocos2d::CCLayer*) */

void ani_attack_1_2_ani(CCLayer *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if ((*(int *)(*(int *)(iVar1 + 4) + 100) != 4) &&
     (piVar2 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1), *(int *)(*piVar2 + 0x10) != 0)
     ) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 4;
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
    ani_ani_test_Stop((CCSprite *)param_1);
    piVar2 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
    ani_ani_test_Hero((CCSprite *)param_1,*(_KG_Anit **)(*piVar2 + 0x10));
  }
  return;
}


