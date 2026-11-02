/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010de70  Symbol: visit */

/* New_UI_HERO_EXP::visit() */

void __thiscall New_UI_HERO_EXP::visit(New_UI_HERO_EXP *this)

{
  CCDirector *this_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float extraout_s2;
  float extraout_s3;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  glEnable(DAT_0010dfd8);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar1 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar2 = __aeabi_fcmpeq(uVar1,0x40000000);
  puVar6 = *(undefined4 **)(DAT_0010dfdc + 0x10de92);
  if (iVar2 == 0) {
    uVar1 = __divsf3(*puVar6,DAT_0010dfe0);
    uVar3 = __divsf3(puVar6[1],DAT_0010dfe4);
    __mulsf3(uVar1,*(undefined4 *)(this + 0x110));
    __mulsf3(uVar3,*(undefined4 *)(this + 0x114));
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x118));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010dfd0,DAT_0010dfd4);
    uVar8 = __extendsfdf2(uVar1);
    __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    __truncdfsf2();
    uVar7 = __mulsf3(uVar3,DAT_0010dfe8);
    cocos2d::CCRect::CCRect
              ((CCRect *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20),extraout_s2,
               extraout_s3);
    uVar5 = __fixsfsi(local_28);
    uVar1 = __fixsfsi(local_24);
    uVar3 = __fixsfsi(local_20);
    uVar4 = __fixsfsi(local_1c);
  }
  else {
    uVar3 = __divsf3(*puVar6,DAT_0010dfe0);
    uVar4 = __divsf3(puVar6[1],DAT_0010dfe4);
    uVar1 = __mulsf3(uVar3,*(undefined4 *)(this + 0x110));
    __addsf3(uVar1,uVar1);
    uVar5 = __fixsfsi();
    uVar1 = __mulsf3(uVar4,*(undefined4 *)(this + 0x114));
    __addsf3(uVar1,uVar1);
    uVar1 = __fixsfsi();
    uVar7 = __extendsfdf2(*(undefined4 *)(this + 0x118));
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),DAT_0010dfd0,DAT_0010dfd4);
    uVar8 = __extendsfdf2(uVar3);
    uVar7 = __muldf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                     (int)((ulonglong)uVar8 >> 0x20));
    uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
    __adddf3((int)uVar7,uVar3,(int)uVar7,uVar3);
    uVar3 = __fixdfsi();
    uVar4 = __mulsf3(uVar4,DAT_0010dfe8);
    __addsf3(uVar4,uVar4);
    uVar4 = __fixsfsi();
  }
  glScissor(uVar5,uVar1,uVar3,uVar4);
  cocos2d::CCNode::visit((CCNode *)this);
  glDisable(DAT_0010dfd8);
  return;
}


