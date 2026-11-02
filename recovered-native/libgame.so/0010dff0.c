/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010dff0  Symbol: visit */

/* New_UI_HERO_HP::visit() */

void __thiscall New_UI_HERO_HP::visit(New_UI_HERO_HP *this)

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
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010e1b8,DAT_0010e1bc);
    uVar2 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar8 = __extendsfdf2(uVar6);
    iVar1 = __aeabi_dcmplt((int)uVar7,uVar2,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if (iVar1 != 0) {
      uVar4 = __truncdfsf2((int)uVar7,uVar2);
      *(undefined4 *)(this + 0x11c) = uVar4;
      goto LAB_0010e080;
    }
  }
  iVar1 = __aeabi_fcmpgt(uVar4,uVar6);
  if (iVar1 != 0) {
    uVar7 = __extendsfdf2(uVar4);
    uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010e1b8,DAT_0010e1bc);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar8 = __extendsfdf2(uVar6);
    iVar1 = __aeabi_dcmpgt((int)uVar7,uVar4,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if (iVar1 != 0) {
      uVar4 = __truncdfsf2((int)uVar7,uVar4);
      *(undefined4 *)(this + 0x11c) = uVar4;
    }
  }
LAB_0010e080:
  glEnable(DAT_0010e1c8);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar4 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar1 = __aeabi_fcmpeq(uVar4,0x40000000);
  puVar5 = *(undefined4 **)(DAT_0010e1cc + 0x10e09c);
  if (iVar1 == 0) {
    uVar6 = __divsf3(*puVar5,DAT_0010e1d0);
    uVar2 = __divsf3(puVar5[1],DAT_0010e1d4);
    __mulsf3(uVar6,*(undefined4 *)(this + 0x110));
    uVar3 = __fixsfsi();
    __mulsf3(uVar2,*(undefined4 *)(this + 0x114));
    uVar4 = __fixsfsi();
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x11c));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010e1c0,DAT_0010e1c4);
    uVar8 = __extendsfdf2(uVar6);
    __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    uVar6 = __fixdfsi();
    __mulsf3(uVar2,DAT_0010e1d8);
    uVar2 = __fixsfsi();
  }
  else {
    uVar6 = __divsf3(*puVar5,DAT_0010e1d0);
    uVar2 = __divsf3(puVar5[1],DAT_0010e1d4);
    uVar4 = __mulsf3(uVar6,*(undefined4 *)(this + 0x110));
    __addsf3(uVar4,uVar4);
    uVar3 = __fixsfsi();
    uVar4 = __mulsf3(uVar2,*(undefined4 *)(this + 0x114));
    __addsf3(uVar4,uVar4);
    uVar4 = __fixsfsi();
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x11c));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010e1c0,DAT_0010e1c4);
    uVar8 = __extendsfdf2(uVar6);
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                     (int)((ulonglong)uVar8 >> 0x20));
    uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
    __adddf3((int)uVar7,uVar6,(int)uVar7,uVar6);
    uVar6 = __fixdfsi();
    uVar2 = __mulsf3(uVar2,DAT_0010e1d8);
    __addsf3(uVar2,uVar2);
    uVar2 = __fixsfsi();
  }
  glScissor(uVar3,uVar4,uVar6,uVar2);
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(DAT_0010e1c8);
  return;
}


