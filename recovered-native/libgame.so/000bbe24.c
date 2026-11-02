/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bbe24  Symbol: ani_Attack_SiegeTank_ani */

/* ani_Attack_SiegeTank_ani(cocos2d::CCLayer*) */

void ani_Attack_SiegeTank_ani(CCLayer *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa8))();
  if (*(int *)(*(int *)(iVar1 + 4) + 100) != 2) {
    iVar1 = (**(code **)(*(int *)param_1 + 0xa8))(param_1);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 100) = 2;
    ani_ani_test_Stop((CCSprite *)param_1);
    piVar2 = (int *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
    ani_ani_test_R((CCSprite *)param_1,*(_KG_Anit **)(*piVar2 + 4));
  }
  return;
}


