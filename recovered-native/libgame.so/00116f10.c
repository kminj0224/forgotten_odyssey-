/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00116f10  Symbol: updateState */

/* CParticle::updateState(float) */

void __thiscall CParticle::updateState(CParticle *this,float param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r1;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = __addsf3(*(undefined4 *)(this + 0x34));
  uVar3 = *(undefined4 *)this;
  *(undefined4 *)(this + 0x34) = uVar1;
  iVar2 = 0;
  do {
    uVar1 = __mulsf3(in_r1,*(undefined4 *)(this + iVar2 + 0x20));
    uVar1 = __divsf3(uVar1,uVar3);
    uVar1 = __addsf3(*(undefined4 *)(this + iVar2 + 0x14),uVar1);
    iVar4 = iVar2 + 4;
    *(undefined4 *)(this + iVar2 + 0x14) = uVar1;
    iVar2 = iVar4;
  } while (iVar4 != 0xc);
  iVar2 = 0;
  do {
    uVar1 = __mulsf3(in_r1,*(undefined4 *)(this + iVar2 + 0x14));
    uVar1 = __addsf3(*(undefined4 *)(this + iVar2 + 8),uVar1);
    iVar4 = iVar2 + 4;
    *(undefined4 *)(this + iVar2 + 8) = uVar1;
    iVar2 = iVar4;
  } while (iVar4 != 0xc);
  uVar1 = *(undefined4 *)(this + 0xc);
  uVar5 = *(undefined4 *)(this + 0x30);
  iVar2 = __aeabi_fcmplt(uVar1,uVar5);
  if (iVar2 != 0) {
    uVar7 = __extendsfdf2(uVar1);
    uVar6 = *(undefined4 *)(this + 4);
    uVar8 = __extendsfdf2(uVar6);
    uVar8 = __adddf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),DAT_00117048,DAT_0011704c);
    __subsf3(uVar5,uVar1);
    uVar9 = __extendsfdf2();
    uVar8 = __muldf3((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar9,
                     (int)((ulonglong)uVar9 >> 0x20));
    __adddf3((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
    uVar1 = __truncdfsf2();
    uVar5 = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0xc) = uVar1;
    iVar2 = __aeabi_fcmplt(uVar5,0);
    if (iVar2 != 0) {
      uVar1 = __addsf3(uVar6,0x3f800000);
      uVar1 = __mulsf3(uVar1,uVar5);
      uVar1 = __subsf3(uVar5,uVar1);
      *(undefined4 *)(this + 0x18) = uVar1;
    }
    uVar1 = *(undefined4 *)(this + 0x14);
    iVar2 = __aeabi_fcmpgt(uVar1,0);
    if (iVar2 == 0) {
      uVar1 = __addsf3(uVar1,uVar6);
    }
    else {
      uVar1 = __subsf3(uVar1,uVar6);
    }
    *(undefined4 *)(this + 0x14) = uVar1;
  }
  iVar2 = 0;
  do {
    uVar1 = __mulsf3(in_r1,*(undefined4 *)(this + iVar2 + 0x20));
    uVar1 = __divsf3(uVar1,uVar3);
    uVar1 = __addsf3(*(undefined4 *)(this + iVar2 + 0x14),uVar1);
    iVar4 = iVar2 + 4;
    *(undefined4 *)(this + iVar2 + 0x14) = uVar1;
    iVar2 = iVar4;
  } while (iVar4 != 0xc);
  iVar2 = 0;
  do {
    uVar1 = __mulsf3(in_r1,*(undefined4 *)(this + iVar2 + 0x14));
    uVar1 = __addsf3(*(undefined4 *)(this + iVar2 + 8),uVar1);
    iVar4 = iVar2 + 4;
    *(undefined4 *)(this + iVar2 + 8) = uVar1;
    iVar2 = iVar4;
  } while (iVar4 != 0xc);
  return;
}


