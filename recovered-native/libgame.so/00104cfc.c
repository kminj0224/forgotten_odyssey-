/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00104cfc  Symbol: Money_UI_init */

/* Money::Money_UI_init(char const*, cocos2d::CCPoint, int, int) */

Money * __thiscall
Money::Money_UI_init(Money *this,char *param_1,CCPoint param_2,int param_3,int param_4)

{
  CCDirector *this_00;
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined4 in_stack_00000004;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  CCPoint aCStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_3c = (char *)(*(int *)(DAT_00104e50 + 0x104d0c) + 0xc);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar1 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar2 = __aeabi_fcmpeq(uVar1,0x40000000);
  if (iVar2 == 0) {
    uVar6 = FUN_001ed9dc(&local_3c,param_1);
  }
  else {
    FUN_001ed9dc(&local_3c,param_1);
    uVar6 = FUN_001edeb0(&local_3c,*(int *)(local_3c + -0xc) + -4,DAT_00104e54 + 0x104d42);
  }
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  (**(code **)(*(int *)this + 300))(this,0);
  piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(local_3c);
  pcVar5 = *(code **)(*piVar3 + 0x3c);
  puVar4 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar1 = __addsf3(param_2,*puVar4);
  __mulsf3(uVar1,0x3f000000);
  iVar2 = (**(code **)(*piVar3 + 0x7c))(piVar3);
  uVar1 = __subsf3(param_3 + -0x80000000,*(undefined4 *)(iVar2 + 4));
  uVar6 = __mulsf3(uVar1,0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  (*pcVar5)(piVar3,aCStack_30);
  (**(code **)(*(int *)this + 0xcc))(this,piVar3,param_4,in_stack_00000004);
  iVar2 = (**(code **)(*piVar3 + 0x7c))(piVar3);
  __mulsf3(param_2,0x3f000000);
  uVar1 = __addsf3(*(undefined4 *)(iVar2 + 4));
  uVar1 = __subsf3(param_3 + -0x80000000,uVar1);
  uVar6 = __mulsf3(uVar1,0x3f000000);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  *(undefined4 *)(this + 0x118) = local_28;
  *(undefined4 *)(this + 0x11c) = local_24;
  __addsf3(*(undefined4 *)(this + 0x118),local_38);
  uVar6 = __addsf3(*(undefined4 *)(this + 0x11c),local_34);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  *(undefined4 *)(this + 0x118) = local_20;
  *(undefined4 *)(this + 0x11c) = local_1c;
  *(undefined4 *)(this + 0x114) = 0;
  FUN_001ed6b8(&local_3c);
  return this;
}


