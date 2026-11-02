/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001048d0  Symbol: Money_UI_init */

/* Monster_HP::Money_UI_init(char const*, cocos2d::CCPoint, int, int) */

char * Monster_HP::Money_UI_init(char *param_1,CCPoint param_2,int param_3,int param_4)

{
  CCDirector *this;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  CCPoint aCStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_3c = (char *)(*(int *)(DAT_00104a24 + 0x1048e0) + 0xc);
  this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar1 = cocos2d::CCDirector::getContentScaleFactor(this);
  iVar2 = __aeabi_fcmpeq(uVar1,0x40000000);
  if (iVar2 == 0) {
    uVar6 = FUN_001ed9dc(&local_3c,param_2);
  }
  else {
    FUN_001ed9dc(&local_3c,param_2);
    uVar6 = FUN_001edeb0(&local_3c,*(int *)(local_3c + -0xc) + -4,DAT_00104a28 + 0x104916);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  (**(code **)(*(int *)param_1 + 300))(param_1,0x3f000000);
  piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(local_3c);
  pcVar5 = *(code **)(*piVar3 + 0x3c);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar1 = __addsf3(param_3,*puVar4);
  __mulsf3(uVar1,0x3f000000);
  iVar2 = (**(code **)(*piVar3 + 0x7c))(piVar3);
  uVar1 = __subsf3(param_4 + -0x80000000,*(undefined4 *)(iVar2 + 4));
  uVar6 = __mulsf3(uVar1,0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  (*pcVar5)(piVar3,aCStack_30);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar3,in_stack_00000000,in_stack_00000004);
  iVar2 = (**(code **)(*piVar3 + 0x7c))(piVar3);
  __mulsf3(param_3,0x3f000000);
  uVar1 = __addsf3(*(undefined4 *)(iVar2 + 4));
  uVar1 = __subsf3(param_4 + -0x80000000,uVar1);
  uVar6 = __mulsf3(uVar1,0x3f000000);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  *(undefined4 *)(param_1 + 0x114) = local_28;
  *(undefined4 *)(param_1 + 0x118) = local_24;
  __addsf3(*(undefined4 *)(param_1 + 0x114),local_38);
  uVar6 = __addsf3(*(undefined4 *)(param_1 + 0x118),local_34);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  *(undefined4 *)(param_1 + 0x114) = local_20;
  *(undefined4 *)(param_1 + 0x118) = local_1c;
  FUN_001ed6b8(&local_3c);
  return param_1;
}


