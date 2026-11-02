/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00105cb0  Symbol: visit */

/* Mana::visit() */

void __thiscall Mana::visit(Mana *this)

{
  int iVar1;
  CCDirector *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_28;
  
  uVar4 = *(undefined4 *)(this + 0x114);
  uVar6 = *(undefined4 *)(this + 0x110);
  iVar1 = __aeabi_fcmplt(uVar4,uVar6);
  if (iVar1 != 0) {
    uVar7 = __extendsfdf2(uVar4);
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_00105e80,DAT_00105e84);
    uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar8 = __extendsfdf2(uVar6);
    iVar1 = __aeabi_dcmplt((int)uVar7,uVar2,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if (iVar1 != 0) {
      uVar4 = __truncdfsf2((int)uVar7,uVar2);
      *(undefined4 *)(this + 0x114) = uVar4;
      goto LAB_00105d40;
    }
  }
  iVar1 = __aeabi_fcmpgt(uVar4,uVar6);
  if (iVar1 != 0) {
    uVar7 = __extendsfdf2(uVar4);
    uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_00105e80,DAT_00105e84);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar8 = __extendsfdf2(uVar6);
    iVar1 = __aeabi_dcmpgt((int)uVar7,uVar4,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if (iVar1 != 0) {
      uVar4 = __truncdfsf2((int)uVar7,uVar4);
      *(undefined4 *)(this + 0x114) = uVar4;
    }
  }
LAB_00105d40:
  glEnable(DAT_00105e88);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar4 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar1 = __aeabi_fcmpeq(uVar4,0x40000000);
  puVar5 = *(undefined4 **)(DAT_00105e8c + 0x105d5c);
  uVar4 = *puVar5;
  if (iVar1 == 0) {
    uVar6 = __divsf3(uVar4,DAT_00105e90);
    uVar2 = __divsf3(puVar5[1],DAT_00105e94);
    uVar3 = __mulsf3(*(undefined4 *)(this + 0x114),DAT_00105e98);
    uVar3 = __subsf3(DAT_00105e98,uVar3);
    uVar4 = __mulsf3(uVar3,uVar4);
    uVar4 = __divsf3(uVar4,DAT_00105e90);
    uVar3 = __mulsf3(uVar6,*(undefined4 *)(this + 0x118));
    __addsf3(uVar4,uVar3);
    local_28 = __fixsfsi();
    __mulsf3(uVar2,*(undefined4 *)(this + 0x11c));
    uVar4 = __fixsfsi();
    __mulsf3(uVar6,DAT_00105e98);
    uVar6 = __fixsfsi();
    __mulsf3(uVar2,DAT_00105e9c);
  }
  else {
    uVar6 = __divsf3(uVar4,DAT_00105e90);
    uVar2 = __divsf3(puVar5[1],DAT_00105e94);
    uVar3 = __mulsf3(*(undefined4 *)(this + 0x114),DAT_00105e98);
    uVar3 = __subsf3(DAT_00105e98,uVar3);
    uVar4 = __mulsf3(uVar3,uVar4);
    uVar4 = __divsf3(uVar4,DAT_00105e90);
    uVar3 = __mulsf3(uVar6,*(undefined4 *)(this + 0x118));
    uVar4 = __addsf3(uVar4,uVar3);
    __addsf3(uVar4,uVar4);
    local_28 = __fixsfsi();
    uVar4 = __mulsf3(uVar2,*(undefined4 *)(this + 0x11c));
    __addsf3(uVar4,uVar4);
    uVar4 = __fixsfsi();
    uVar6 = __mulsf3(uVar6,DAT_00105e98);
    __addsf3(uVar6,uVar6);
    uVar6 = __fixsfsi();
    uVar2 = __mulsf3(uVar2,DAT_00105e9c);
    __addsf3(uVar2,uVar2);
  }
  uVar2 = __fixsfsi();
  glScissor(local_28,uVar4,uVar6,uVar2);
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(DAT_00105e88);
  return;
}


