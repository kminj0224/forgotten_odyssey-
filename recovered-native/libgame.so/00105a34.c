/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00105a34  Symbol: visit */

/* Monster_HP::visit() */

void __thiscall Monster_HP::visit(Monster_HP *this)

{
  CCDirector *this_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 local_24;
  undefined4 local_20;
  
  glEnable(DAT_00105b54);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar1 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar2 = __aeabi_fcmpeq(uVar1,0x40000000);
  if (iVar2 == 0) {
    uVar1 = __mulsf3(*(undefined4 *)(this + 0x110),DAT_00105b58);
    iVar2 = __aeabi_fcmpge(uVar1,0);
    if (iVar2 == 0) goto LAB_00105b42;
    puVar6 = *(undefined4 **)(DAT_00105b6c + 0x105aee);
    uVar3 = __divsf3(*puVar6,DAT_00105b60);
    uVar4 = __divsf3(puVar6[1],DAT_00105b64);
    __mulsf3(uVar3,*(undefined4 *)(this + 0x114));
    local_24 = __fixsfsi();
    __mulsf3(uVar4,*(undefined4 *)(this + 0x118));
    local_20 = __fixsfsi();
    __mulsf3(uVar1,uVar3);
    uVar1 = __fixsfsi();
    __mulsf3(uVar4,DAT_00105b68);
  }
  else {
    uVar1 = __mulsf3(*(undefined4 *)(this + 0x110),DAT_00105b58);
    iVar2 = __aeabi_fcmpge(uVar1,0);
    if (iVar2 == 0) goto LAB_00105b42;
    puVar6 = *(undefined4 **)(DAT_00105b5c + 0x105a74);
    uVar3 = __divsf3(*puVar6,DAT_00105b60);
    uVar4 = __divsf3(puVar6[1],DAT_00105b64);
    uVar5 = __mulsf3(uVar3,*(undefined4 *)(this + 0x114));
    __addsf3(uVar5,uVar5);
    local_24 = __fixsfsi();
    uVar5 = __mulsf3(uVar4,*(undefined4 *)(this + 0x118));
    __addsf3(uVar5,uVar5);
    local_20 = __fixsfsi();
    uVar1 = __mulsf3(uVar1,uVar3);
    __addsf3(uVar1,uVar1);
    uVar1 = __fixsfsi();
    uVar3 = __mulsf3(uVar4,DAT_00105b68);
    __addsf3(uVar3,uVar3);
  }
  uVar3 = __fixsfsi();
  glScissor(local_24,local_20,uVar1,uVar3);
LAB_00105b42:
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(DAT_00105b54);
  return;
}


