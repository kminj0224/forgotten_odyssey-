/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010da20  Symbol: visit */

/* New_UI_MONEY::visit() */

void __thiscall New_UI_MONEY::visit(New_UI_MONEY *this)

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
  
  uVar4 = *(undefined4 *)(this + 0x11c);
  uVar6 = *(undefined4 *)(this + 0x118);
  iVar1 = __aeabi_fcmplt(uVar4,uVar6);
  if (iVar1 != 0) {
    uVar7 = __extendsfdf2(uVar4);
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010dbe8,DAT_0010dbec);
    uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar8 = __extendsfdf2(uVar6);
    iVar1 = __aeabi_dcmplt((int)uVar7,uVar2,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if (iVar1 != 0) {
      uVar4 = __truncdfsf2((int)uVar7,uVar2);
      *(undefined4 *)(this + 0x11c) = uVar4;
      goto LAB_0010dab0;
    }
  }
  iVar1 = __aeabi_fcmpgt(uVar4,uVar6);
  if (iVar1 != 0) {
    uVar7 = __extendsfdf2(uVar4);
    uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010dbe8,DAT_0010dbec);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar8 = __extendsfdf2(uVar6);
    iVar1 = __aeabi_dcmpgt((int)uVar7,uVar4,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if (iVar1 != 0) {
      uVar4 = __truncdfsf2((int)uVar7,uVar4);
      *(undefined4 *)(this + 0x11c) = uVar4;
    }
  }
LAB_0010dab0:
  glEnable(DAT_0010dbf8);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar4 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar1 = __aeabi_fcmpeq(uVar4,0x40000000);
  puVar5 = *(undefined4 **)(DAT_0010dbfc + 0x10dacc);
  if (iVar1 == 0) {
    uVar6 = __divsf3(*puVar5,DAT_0010dc00);
    uVar2 = __divsf3(puVar5[1],DAT_0010dc04);
    __mulsf3(uVar6,*(undefined4 *)(this + 0x110));
    uVar3 = __fixsfsi();
    __mulsf3(uVar2,*(undefined4 *)(this + 0x114));
    uVar4 = __fixsfsi();
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x11c));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010dbf0,DAT_0010dbf4);
    uVar8 = __extendsfdf2(uVar6);
    __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    uVar6 = __fixdfsi();
    __mulsf3(uVar2,DAT_0010dc08);
    uVar2 = __fixsfsi();
  }
  else {
    uVar6 = __divsf3(*puVar5,DAT_0010dc00);
    uVar2 = __divsf3(puVar5[1],DAT_0010dc04);
    uVar4 = __mulsf3(uVar6,*(undefined4 *)(this + 0x110));
    __addsf3(uVar4,uVar4);
    uVar3 = __fixsfsi();
    uVar4 = __mulsf3(uVar2,*(undefined4 *)(this + 0x114));
    __addsf3(uVar4,uVar4);
    uVar4 = __fixsfsi();
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x11c));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010dbf0,DAT_0010dbf4);
    uVar8 = __extendsfdf2(uVar6);
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                     (int)((ulonglong)uVar8 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
    __adddf3((int)uVar7,uVar6,(int)uVar7,uVar6);
    uVar6 = __fixdfsi();
    uVar2 = __mulsf3(uVar2,DAT_0010dc08);
    __addsf3(uVar2,uVar2);
    uVar2 = __fixsfsi();
  }
  glScissor(uVar3,uVar4,uVar6,uVar2);
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(DAT_0010dbf8);
  return;
}


