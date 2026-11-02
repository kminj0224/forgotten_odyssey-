/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010d7c0  Symbol: visit */

/* New_UI_MANA::visit() */

void __thiscall New_UI_MANA::visit(New_UI_MANA *this)

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
  undefined8 uVar9;
  
  uVar4 = *(undefined4 *)(this + 0x11c);
  uVar6 = *(undefined4 *)(this + 0x118);
  iVar1 = __aeabi_fcmplt(uVar4,uVar6);
  if (iVar1 == 0) {
LAB_0010d80e:
    iVar1 = __aeabi_fcmpgt(uVar4,uVar6);
    if (iVar1 != 0) {
      uVar7 = __extendsfdf2(uVar4);
      uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010d9f0,DAT_0010d9f4);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uVar8 = __extendsfdf2(uVar6);
      iVar1 = __aeabi_dcmpgt((int)uVar7,uVar4,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
      if (iVar1 != 0) {
        uVar4 = __truncdfsf2((int)uVar7,uVar4);
        *(undefined4 *)(this + 0x11c) = uVar4;
      }
    }
  }
  else {
    uVar7 = __extendsfdf2(uVar4);
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010d9f0,DAT_0010d9f4);
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar8 = __extendsfdf2(uVar6);
    iVar1 = __aeabi_dcmplt((int)uVar7,uVar3,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if (iVar1 == 0) goto LAB_0010d80e;
    uVar4 = __truncdfsf2((int)uVar7,uVar3);
    *(undefined4 *)(this + 0x11c) = uVar4;
  }
  glEnable(DAT_0010da08);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar4 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar1 = __aeabi_fcmpeq(uVar4,0x40000000);
  if (iVar1 == 0) {
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x118));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010d9f8,DAT_0010d9fc);
    iVar1 = __aeabi_dcmpge((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010da00,DAT_0010da04);
    if (iVar1 == 0) goto LAB_0010d9de;
    puVar5 = *(undefined4 **)(DAT_0010da1c + 0x10d950);
    __divsf3(*puVar5,DAT_0010da10);
    uVar7 = __extendsfdf2();
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar2 = __divsf3(puVar5[1],DAT_0010da14);
    uVar8 = __extendsfdf2(*(undefined4 *)(this + 0x110));
    uVar9 = __extendsfdf2(*(undefined4 *)(this + 0x11c));
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0010d9f8,DAT_0010d9fc);
    uVar9 = __subdf3(DAT_0010d9f8,DAT_0010d9fc,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                     (int)((ulonglong)uVar9 >> 0x20));
    __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,uVar3);
    uVar4 = __fixdfsi();
    __mulsf3(uVar2,*(undefined4 *)(this + 0x114));
    uVar6 = __fixsfsi();
    __muldf3((int)uVar7,uVar3,DAT_0010d9f8,DAT_0010d9fc);
    uVar3 = __fixdfsi();
    __mulsf3(uVar2,DAT_0010da18);
  }
  else {
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x118));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010d9f8,DAT_0010d9fc);
    iVar1 = __aeabi_dcmpge((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010da00,DAT_0010da04);
    if (iVar1 == 0) goto LAB_0010d9de;
    puVar5 = *(undefined4 **)(DAT_0010da0c + 0x10d892);
    __divsf3(*puVar5,DAT_0010da10);
    uVar7 = __extendsfdf2();
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar2 = __divsf3(puVar5[1],DAT_0010da14);
    uVar8 = __extendsfdf2(*(undefined4 *)(this + 0x110));
    uVar9 = __extendsfdf2(*(undefined4 *)(this + 0x11c));
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0010d9f8,DAT_0010d9fc);
    uVar9 = __subdf3(DAT_0010d9f8,DAT_0010d9fc,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                     (int)((ulonglong)uVar9 >> 0x20));
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,uVar3);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    __adddf3((int)uVar8,uVar4,(int)uVar8,uVar4);
    uVar4 = __fixdfsi();
    uVar6 = __mulsf3(uVar2,*(undefined4 *)(this + 0x114));
    __addsf3(uVar6,uVar6);
    uVar6 = __fixsfsi();
    uVar7 = __muldf3((int)uVar7,uVar3,DAT_0010d9f8,DAT_0010d9fc);
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    __adddf3((int)uVar7,uVar3,(int)uVar7,uVar3);
    uVar3 = __fixdfsi();
    uVar2 = __mulsf3(uVar2,DAT_0010da18);
    __addsf3(uVar2,uVar2);
  }
  uVar2 = __fixsfsi();
  glScissor(uVar4,uVar6,uVar3,uVar2);
LAB_0010d9de:
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(DAT_0010da08);
  return;
}


