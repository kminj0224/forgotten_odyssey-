/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010dc10  Symbol: visit */

/* New_UI_BOSS_HP::visit() */

void __thiscall New_UI_BOSS_HP::visit(New_UI_BOSS_HP *this)

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
LAB_0010dc5e:
    iVar1 = __aeabi_fcmpgt(uVar4,uVar6);
    if (iVar1 != 0) {
      uVar7 = __extendsfdf2(uVar4);
      uVar7 = __subdf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010de40,DAT_0010de44);
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
    uVar7 = __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010de40,DAT_0010de44);
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar8 = __extendsfdf2(uVar6);
    iVar1 = __aeabi_dcmplt((int)uVar7,uVar3,(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    if (iVar1 == 0) goto LAB_0010dc5e;
    uVar4 = __truncdfsf2((int)uVar7,uVar3);
    *(undefined4 *)(this + 0x11c) = uVar4;
  }
  glEnable(DAT_0010de58);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar4 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar1 = __aeabi_fcmpeq(uVar4,0x40000000);
  if (iVar1 == 0) {
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x118));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010de48,DAT_0010de4c);
    iVar1 = __aeabi_dcmpge((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010de50,DAT_0010de54);
    if (iVar1 == 0) goto LAB_0010de2e;
    puVar5 = *(undefined4 **)(DAT_0010de6c + 0x10dda0);
    __divsf3(*puVar5,DAT_0010de60);
    uVar7 = __extendsfdf2();
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar2 = __divsf3(puVar5[1],DAT_0010de64);
    uVar8 = __extendsfdf2(*(undefined4 *)(this + 0x110));
    uVar9 = __extendsfdf2(*(undefined4 *)(this + 0x11c));
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0010de48,DAT_0010de4c);
    uVar9 = __subdf3(DAT_0010de48,DAT_0010de4c,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                     (int)((ulonglong)uVar9 >> 0x20));
    __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,uVar3);
    uVar4 = __fixdfsi();
    __mulsf3(uVar2,*(undefined4 *)(this + 0x114));
    uVar6 = __fixsfsi();
    __muldf3((int)uVar7,uVar3,DAT_0010de48,DAT_0010de4c);
    uVar3 = __fixdfsi();
    __mulsf3(uVar2,DAT_0010de68);
  }
  else {
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x118));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010de48,DAT_0010de4c);
    iVar1 = __aeabi_dcmpge((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010de50,DAT_0010de54);
    if (iVar1 == 0) goto LAB_0010de2e;
    puVar5 = *(undefined4 **)(DAT_0010de5c + 0x10dce2);
    __divsf3(*puVar5,DAT_0010de60);
    uVar7 = __extendsfdf2();
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar2 = __divsf3(puVar5[1],DAT_0010de64);
    uVar8 = __extendsfdf2(*(undefined4 *)(this + 0x110));
    uVar9 = __extendsfdf2(*(undefined4 *)(this + 0x11c));
    uVar9 = __muldf3((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),DAT_0010de48,DAT_0010de4c);
    uVar9 = __subdf3(DAT_0010de48,DAT_0010de4c,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                     (int)((ulonglong)uVar9 >> 0x20));
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,uVar3);
    uVar4 = (undefined4)((ulonglong)uVar8 >> 0x20);
    __adddf3((int)uVar8,uVar4,(int)uVar8,uVar4);
    uVar4 = __fixdfsi();
    uVar6 = __mulsf3(uVar2,*(undefined4 *)(this + 0x114));
    __addsf3(uVar6,uVar6);
    uVar6 = __fixsfsi();
    uVar7 = __muldf3((int)uVar7,uVar3,DAT_0010de48,DAT_0010de4c);
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    __adddf3((int)uVar7,uVar3,(int)uVar7,uVar3);
    uVar3 = __fixdfsi();
    uVar2 = __mulsf3(uVar2,DAT_0010de68);
    __addsf3(uVar2,uVar2);
  }
  uVar2 = __fixsfsi();
  glScissor(uVar4,uVar6,uVar3,uVar2);
LAB_0010de2e:
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(DAT_0010de58);
  return;
}


