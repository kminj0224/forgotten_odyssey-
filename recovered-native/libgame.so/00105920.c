/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00105920  Symbol: visit */

/* Level_Bar::visit() */

undefined8 __thiscall Level_Bar::visit(Level_Bar *this)

{
  CCDirector *this_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  glEnable(DAT_00105a1c);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar1 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar2 = __aeabi_fcmpeq(uVar1,0x40000000);
  puVar5 = *(undefined4 **)(DAT_00105a20 + 0x105940);
  if (iVar2 == 0) {
    uVar1 = __divsf3(*puVar5,DAT_00105a24);
    uVar3 = __divsf3(puVar5[1],DAT_00105a28);
    __mulsf3(uVar1,*(undefined4 *)(this + 0x114));
    local_20 = __fixsfsi();
    __mulsf3(uVar3,*(undefined4 *)(this + 0x118));
    local_1c = __fixsfsi();
    uVar4 = __mulsf3(*(undefined4 *)(this + 0x110),DAT_00105a2c);
    __mulsf3(uVar4,uVar1);
    uVar1 = __fixsfsi();
    __mulsf3(uVar3,DAT_00105a30);
  }
  else {
    uVar1 = __divsf3(*puVar5,DAT_00105a24);
    uVar3 = __divsf3(puVar5[1],DAT_00105a28);
    uVar4 = __mulsf3(uVar1,*(undefined4 *)(this + 0x114));
    __addsf3(uVar4,uVar4);
    local_20 = __fixsfsi();
    uVar4 = __mulsf3(uVar3,*(undefined4 *)(this + 0x118));
    __addsf3(uVar4,uVar4);
    local_1c = __fixsfsi();
    uVar4 = __mulsf3(*(undefined4 *)(this + 0x110),DAT_00105a2c);
    uVar1 = __mulsf3(uVar4,uVar1);
    __addsf3(uVar1,uVar1);
    uVar1 = __fixsfsi();
    uVar3 = __mulsf3(uVar3,DAT_00105a30);
    __addsf3(uVar3,uVar3);
  }
  uVar3 = __fixsfsi();
  glScissor(local_20,local_1c,uVar1,uVar3);
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(DAT_00105a1c);
  return CONCAT44(local_1c,local_20);
}


