/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014fe24  Symbol: updateBar */

/* cocos2d::CCProgressTimer::updateBar() */

void __thiscall cocos2d::CCProgressTimer::updateBar(CCProgressTimer *this)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  float extraout_s0;
  float extraout_s0_00;
  float fVar11;
  float extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float fVar13;
  undefined8 uVar12;
  float extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  int iStack_4;
  
  iVar10 = DAT_001501a8;
  *(CCProgressTimer **)(&stack0xfffffff4 + DAT_001501a8) = this;
  uVar1 = __divsf3(*(undefined4 *)(this + 0x100),DAT_001501ac);
  iVar6 = *(int *)(this + 0x104);
  pvVar3 = (void *)(iVar6 + 0x160);
  *(undefined4 *)(&stack0xfffffff8 + iVar10) = uVar1;
  memcpy(&stack0x00000044 + iVar10,pvVar3,0x60);
  uVar1 = *(undefined4 *)(&stack0x0000009c + iVar10);
  memcpy(&stack0x000000a4 + iVar10,pvVar3,0x60);
  iVar2 = __aeabi_fcmplt(uVar1,*(undefined4 *)(&stack0x000000cc + iVar10));
  if (iVar2 == 0) {
    memcpy(&stack0x00000164 + iVar10,pvVar3,0x60);
    *(undefined4 *)(&stack0xfffffff0 + iVar10) = *(undefined4 *)(&stack0x000001bc + iVar10);
  }
  else {
    memcpy(&stack0x00000104 + iVar10,pvVar3,0x60);
    *(undefined4 *)(&stack0xfffffff0 + iVar10) = *(undefined4 *)(&stack0x0000012c + iVar10);
  }
  pvVar3 = (void *)(iVar6 + 0x160);
  memcpy(&stack0x000001c4 + iVar10,pvVar3,0x60);
  uVar1 = *(undefined4 *)(&stack0x0000021c + iVar10);
  memcpy(&stack0x00000224 + iVar10,pvVar3,0x60);
  iVar2 = __aeabi_fcmpgt(uVar1,*(undefined4 *)(&stack0x0000024c + iVar10));
  if (iVar2 == 0) {
    memcpy(&stack0x000002e4 + iVar10,pvVar3,0x60);
    *(undefined4 *)((int)&iStack_4 + iVar10) = *(undefined4 *)(&stack0x0000033c + iVar10);
  }
  else {
    memcpy(&stack0x00000284 + iVar10,pvVar3,0x60);
    *(undefined4 *)((int)&iStack_4 + iVar10) = *(undefined4 *)(&stack0x000002ac + iVar10);
  }
  pvVar3 = (void *)(iVar6 + 0x160);
  memcpy(&stack0x00000344 + iVar10,pvVar3,0x60);
  uVar1 = *(undefined4 *)(&stack0x00000358 + iVar10);
  memcpy(&stack0x000003a4 + iVar10,pvVar3,0x60);
  iVar2 = __aeabi_fcmplt(uVar1,*(undefined4 *)(&stack0x000003d0 + iVar10));
  if (iVar2 == 0) {
    memcpy(&stack0x00000464 + iVar10,pvVar3,0x60);
  }
  else {
    memcpy(&stack0x00000404 + iVar10,pvVar3,0x60);
  }
  pvVar3 = (void *)(iVar6 + 0x160);
  memcpy(&stack0x000004c4 + iVar10,pvVar3,0x60);
  uVar1 = *(undefined4 *)(&stack0x000004d8 + iVar10);
  memcpy(&stack0x00000524 + iVar10,pvVar3,0x60);
  iVar2 = __aeabi_fcmpgt(uVar1,*(undefined4 *)(&stack0x00000550 + iVar10));
  if (iVar2 == 0) {
    memcpy(&stack0x000005e4 + iVar10,pvVar3,0x60);
    fVar11 = extraout_s0_00;
    fVar13 = extraout_s1_00;
  }
  else {
    memcpy(&stack0x00000584 + iVar10,pvVar3,0x60);
    fVar11 = extraout_s0;
    fVar13 = extraout_s1;
  }
  uVar12 = CCPoint::CCPoint((CCPoint *)(&stack0x0000000c + iVar10),fVar11,fVar13);
  uVar12 = CCPoint::CCPoint((CCPoint *)(&stack0x00000014 + iVar10),(float)uVar12,
                            (float)((ulonglong)uVar12 >> 0x20));
  iVar2 = *(int *)(&stack0xfffffff4 + iVar10);
  if (*(int *)(iVar2 + 0x10c) == 0) {
    *(undefined4 *)(iVar2 + 0x108) = 4;
    pvVar3 = operator_new__(0x50);
    iVar7 = *(int *)(iVar2 + 0xfc);
    *(void **)(iVar2 + 0x10c) = pvVar3;
    iVar6 = 0;
    if (iVar7 == 2) {
      uVar1 = *(undefined4 *)(&stack0x00000010 + iVar10);
      *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x00000014 + iVar10);
      *(undefined4 *)(&stack0x00000040 + iVar10) = *(undefined4 *)(&stack0x00000018 + iVar10);
      uVar8 = *(undefined4 *)(&stack0x0000003c + iVar10);
      iVar7 = 1;
      *(undefined4 *)((int)pvVar3 + 0xc) = *(undefined4 *)(&stack0x0000003c + iVar10);
      uVar9 = *(undefined4 *)(&stack0x00000040 + iVar10);
      *(undefined4 *)(&stack0x00000040 + iVar10) = uVar1;
      *(undefined4 *)((int)pvVar3 + 0x10) = uVar9;
      iVar2 = *(int *)(iVar2 + 0x10c);
      *(undefined4 *)(iVar2 + 0x20) = uVar8;
      *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(&stack0x00000040 + iVar10);
    }
    else if (iVar7 == 3) {
      uVar1 = *(undefined4 *)(&stack0x00000018 + iVar10);
      *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x0000000c + iVar10);
      *(undefined4 *)(&stack0x00000040 + iVar10) = *(undefined4 *)(&stack0x00000010 + iVar10);
      uVar8 = *(undefined4 *)(&stack0x0000003c + iVar10);
      iVar6 = 2;
      *(undefined4 *)((int)pvVar3 + 0x34) = *(undefined4 *)(&stack0x0000003c + iVar10);
      uVar9 = *(undefined4 *)(&stack0x00000040 + iVar10);
      *(undefined4 *)(&stack0x00000040 + iVar10) = uVar1;
      *(undefined4 *)((int)pvVar3 + 0x38) = uVar9;
      iVar2 = *(int *)(iVar2 + 0x10c);
      *(undefined4 *)(iVar2 + 0x48) = uVar8;
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(&stack0x00000040 + iVar10);
      iVar7 = 3;
    }
    else if (iVar7 == 4) {
      *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x00000014 + iVar10);
      uVar1 = *(undefined4 *)(&stack0x0000003c + iVar10);
      *(undefined4 *)(&stack0x00000040 + iVar10) = *(undefined4 *)(&stack0x00000010 + iVar10);
      *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x0000000c + iVar10);
      *(undefined4 *)((int)pvVar3 + 0x20) = uVar1;
      uVar1 = *(undefined4 *)(&stack0x0000003c + iVar10);
      iVar7 = 3;
      *(undefined4 *)((int)pvVar3 + 0x24) = *(undefined4 *)(&stack0x00000040 + iVar10);
      iVar2 = *(int *)(iVar2 + 0x10c);
      iVar6 = 1;
      *(undefined4 *)(iVar2 + 0x48) = uVar1;
      *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(&stack0x00000040 + iVar10);
    }
    else if (iVar7 == 5) {
      *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x00000014 + iVar10);
      uVar1 = *(undefined4 *)(&stack0x0000003c + iVar10);
      *(undefined4 *)(&stack0x00000040 + iVar10) = *(undefined4 *)(&stack0x00000018 + iVar10);
      *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x0000000c + iVar10);
      *(undefined4 *)((int)pvVar3 + 0xc) = uVar1;
      uVar1 = *(undefined4 *)(&stack0x0000003c + iVar10);
      iVar7 = 2;
      *(undefined4 *)((int)pvVar3 + 0x10) = *(undefined4 *)(&stack0x00000040 + iVar10);
      iVar2 = *(int *)(iVar2 + 0x10c);
      *(undefined4 *)(iVar2 + 0x34) = uVar1;
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(&stack0x00000040 + iVar10);
    }
    else {
      iVar7 = 0;
    }
    iVar4 = *(int *)(&stack0xfffffff4 + iVar10);
    iVar2 = *(int *)(iVar4 + 0x10c);
    *(int *)(&stack0xfffffff0 + iVar10) = iVar6 * 0x14;
    puVar5 = (undefined4 *)(iVar2 + iVar6 * 0x14);
    CCPoint::CCPoint((CCPoint *)(&stack0x0000001c + iVar10),extraout_s0_01,extraout_s1_01);
    uVar12 = vertexFromTexCoord((CCPoint *)(&stack0x00000004 + iVar10));
    *puVar5 = *(undefined4 *)(&stack0x00000004 + iVar10);
    puVar5[1] = *(undefined4 *)(&stack0x00000008 + iVar10);
    iVar2 = *(int *)(iVar4 + 0x10c);
    *(int *)((int)&iStack_4 + iVar10) = iVar7 * 0x14;
    puVar5 = (undefined4 *)(iVar2 + iVar7 * 0x14);
    CCPoint::CCPoint((CCPoint *)(&stack0x00000024 + iVar10),(float)uVar12,
                     (float)((ulonglong)uVar12 >> 0x20));
    vertexFromTexCoord((CCPoint *)(&stack0x00000004 + iVar10));
    *puVar5 = *(undefined4 *)(&stack0x00000004 + iVar10);
    puVar5[1] = *(undefined4 *)(&stack0x00000008 + iVar10);
    iVar2 = CCSprite::isFlipY(*(CCSprite **)(iVar4 + 0x104));
    if ((iVar2 != 0) || (iVar2 = CCSprite::isFlipX(*(CCSprite **)(iVar4 + 0x104)), iVar2 != 0)) {
      iVar4 = *(int *)(&stack0xfffffff4 + iVar10);
      iVar2 = CCSprite::isFlipX(*(CCSprite **)(iVar4 + 0x104));
      if (iVar2 != 0) {
        uVar1 = __addsf3(*(undefined4 *)(&stack0x00000014 + iVar10),
                         *(undefined4 *)(&stack0x0000000c + iVar10));
        iVar2 = *(int *)(iVar4 + 0x10c);
        *(undefined4 *)(&stack0x00000000 + iVar10) = uVar1;
        iVar2 = iVar2 + *(int *)(&stack0xfffffff0 + iVar10);
        uVar1 = __subsf3(uVar1,*(undefined4 *)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0xc) = uVar1;
        iVar2 = *(int *)(iVar4 + 0x10c) + *(int *)((int)&iStack_4 + iVar10);
        uVar1 = __subsf3(*(undefined4 *)(&stack0x00000000 + iVar10),*(undefined4 *)(iVar2 + 0xc));
        *(undefined4 *)(iVar2 + 0xc) = uVar1;
      }
      iVar4 = *(int *)(&stack0xfffffff4 + iVar10);
      iVar2 = CCSprite::isFlipY(*(CCSprite **)(iVar4 + 0x104));
      if (iVar2 != 0) {
        uVar1 = __addsf3(*(undefined4 *)(&stack0x00000018 + iVar10),
                         *(undefined4 *)(&stack0x00000010 + iVar10));
        iVar2 = *(int *)(iVar4 + 0x10c);
        *(undefined4 *)(&stack0x00000000 + iVar10) = uVar1;
        iVar2 = iVar2 + *(int *)(&stack0xfffffff0 + iVar10);
        uVar1 = __subsf3(uVar1,*(undefined4 *)(iVar2 + 0x10));
        *(undefined4 *)(iVar2 + 0x10) = uVar1;
        iVar2 = *(int *)(iVar4 + 0x10c) + *(int *)((int)&iStack_4 + iVar10);
        uVar1 = __subsf3(*(undefined4 *)(&stack0x00000000 + iVar10),*(undefined4 *)(iVar2 + 0x10));
        *(undefined4 *)(iVar2 + 0x10) = uVar1;
      }
    }
    uVar12 = updateColor(*(CCProgressTimer **)(&stack0xfffffff4 + iVar10));
  }
  else {
    iVar7 = 0;
    iVar6 = 0;
  }
  iVar4 = *(int *)(&stack0xfffffff4 + iVar10);
  iVar2 = *(int *)(iVar4 + 0xfc);
  *(int *)(&stack0xfffffff0 + iVar10) = iVar2;
  if (iVar2 == 2) {
    uVar8 = *(undefined4 *)(&stack0x00000014 + iVar10);
    iVar2 = *(int *)(iVar4 + 0x10c);
    uVar1 = __subsf3(*(undefined4 *)(&stack0x0000000c + iVar10),uVar8);
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(&stack0xfffffff8 + iVar10));
    uVar1 = __addsf3(uVar8,uVar1);
    uVar12 = CONCAT44(extraout_s1_02,extraout_s0_02);
    *(undefined4 *)(&stack0x0000003c + iVar10) = uVar1;
    uVar1 = *(undefined4 *)(&stack0x00000018 + iVar10);
    *(undefined4 *)(&stack0x00000040 + iVar10) = *(undefined4 *)(&stack0x00000010 + iVar10);
    iVar7 = *(int *)(&stack0xfffffff0 + iVar10);
    iVar6 = 3;
    *(undefined4 *)(iVar2 + 0x48) = *(undefined4 *)(&stack0x0000003c + iVar10);
    uVar8 = *(undefined4 *)(&stack0x00000040 + iVar10);
    *(undefined4 *)(&stack0x00000040 + iVar10) = uVar1;
    uVar1 = *(undefined4 *)(&stack0x0000003c + iVar10);
    *(undefined4 *)(iVar2 + 0x4c) = uVar8;
    iVar2 = *(int *)(iVar4 + 0x10c);
    *(undefined4 *)(iVar2 + 0x34) = uVar1;
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(&stack0x00000040 + iVar10);
    goto LAB_00150240;
  }
  if (*(int *)(&stack0xfffffff0 + iVar10) == 3) {
    uVar9 = *(undefined4 *)(&stack0x00000014 + iVar10);
    iVar2 = *(int *)(iVar4 + 0x10c);
    uVar1 = __subsf3(*(undefined4 *)(&stack0x0000000c + iVar10),uVar9);
    uVar8 = __subsf3(0x3f800000,*(undefined4 *)(&stack0xfffffff8 + iVar10));
    uVar1 = __mulsf3(uVar1,uVar8);
    uVar1 = __addsf3(uVar9,uVar1);
    *(undefined4 *)(&stack0x0000003c + iVar10) = uVar1;
    uVar1 = *(undefined4 *)(&stack0x00000010 + iVar10);
    *(undefined4 *)(&stack0x00000040 + iVar10) = *(undefined4 *)(&stack0x00000018 + iVar10);
    iVar7 = 0;
    *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(&stack0x0000003c + iVar10);
    uVar8 = *(undefined4 *)(&stack0x00000040 + iVar10);
    *(undefined4 *)(&stack0x00000040 + iVar10) = uVar1;
    uVar1 = *(undefined4 *)(&stack0x0000003c + iVar10);
    *(undefined4 *)(iVar2 + 0x24) = uVar8;
    iVar2 = *(int *)(iVar4 + 0x10c);
    *(undefined4 *)(iVar2 + 0xc) = uVar1;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(&stack0x00000040 + iVar10);
    uVar1 = extraout_s0_03;
    uVar8 = extraout_s1_03;
  }
  else {
    if (*(int *)(&stack0xfffffff0 + iVar10) == 4) {
      uVar9 = *(undefined4 *)(&stack0x00000018 + iVar10);
      iVar2 = *(int *)(iVar4 + 0x10c);
      uVar1 = __subsf3(*(undefined4 *)(&stack0x00000010 + iVar10),uVar9);
      uVar8 = __subsf3(0x3f800000,*(undefined4 *)(&stack0xfffffff8 + iVar10));
      uVar1 = __mulsf3(uVar1,uVar8);
      uVar1 = __addsf3(uVar9,uVar1);
      uVar12 = CONCAT44(extraout_s1_04,extraout_s0_04);
      *(undefined4 *)(&stack0x00000040 + iVar10) = uVar1;
      *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x00000014 + iVar10);
      uVar8 = *(undefined4 *)(&stack0x0000003c + iVar10);
      *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x0000000c + iVar10);
      uVar1 = *(undefined4 *)(&stack0x0000003c + iVar10);
      *(undefined4 *)(iVar2 + 0xc) = uVar8;
      iVar7 = 2;
      iVar6 = 0;
      *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(&stack0x00000040 + iVar10);
      iVar2 = *(int *)(iVar4 + 0x10c);
      *(undefined4 *)(iVar2 + 0x34) = uVar1;
      *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(&stack0x00000040 + iVar10);
      goto LAB_00150240;
    }
    if (*(int *)(&stack0xfffffff0 + iVar10) != 5) goto LAB_00150240;
    uVar8 = *(undefined4 *)(&stack0x00000018 + iVar10);
    iVar2 = *(int *)(iVar4 + 0x10c);
    uVar1 = __subsf3(*(undefined4 *)(&stack0x00000010 + iVar10),uVar8);
    uVar1 = __mulsf3(uVar1,*(undefined4 *)(&stack0xfffffff8 + iVar10));
    uVar1 = __addsf3(uVar8,uVar1);
    *(undefined4 *)(&stack0x00000040 + iVar10) = uVar1;
    *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x00000014 + iVar10);
    uVar8 = *(undefined4 *)(&stack0x0000003c + iVar10);
    *(undefined4 *)(&stack0x0000003c + iVar10) = *(undefined4 *)(&stack0x0000000c + iVar10);
    uVar1 = *(undefined4 *)(&stack0x0000003c + iVar10);
    *(undefined4 *)(iVar2 + 0x20) = uVar8;
    iVar7 = 3;
    *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(&stack0x00000040 + iVar10);
    iVar2 = *(int *)(iVar4 + 0x10c);
    *(undefined4 *)(iVar2 + 0x48) = uVar1;
    *(undefined4 *)(iVar2 + 0x4c) = *(undefined4 *)(&stack0x00000040 + iVar10);
    uVar1 = extraout_s0_05;
    uVar8 = extraout_s1_05;
  }
  uVar12 = CONCAT44(uVar8,uVar1);
  iVar6 = 1;
LAB_00150240:
  iVar4 = *(int *)(&stack0xfffffff4 + iVar10);
  iVar2 = *(int *)(iVar4 + 0x10c);
  *(int *)(&stack0xfffffff0 + iVar10) = iVar6 * 0x14;
  puVar5 = (undefined4 *)(iVar2 + iVar6 * 0x14);
  CCPoint::CCPoint((CCPoint *)(&stack0x0000002c + iVar10),(float)uVar12,
                   (float)((ulonglong)uVar12 >> 0x20));
  uVar12 = vertexFromTexCoord((CCPoint *)(&stack0x00000004 + iVar10));
  *puVar5 = *(undefined4 *)(&stack0x00000004 + iVar10);
  puVar5[1] = *(undefined4 *)(&stack0x00000008 + iVar10);
  iVar2 = *(int *)(iVar4 + 0x10c);
  *(int *)(&stack0xfffffff8 + iVar10) = iVar7 * 0x14;
  puVar5 = (undefined4 *)(iVar2 + iVar7 * 0x14);
  CCPoint::CCPoint((CCPoint *)(&stack0x00000034 + iVar10),(float)uVar12,
                   (float)((ulonglong)uVar12 >> 0x20));
  vertexFromTexCoord((CCPoint *)(&stack0x00000004 + iVar10));
  *puVar5 = *(undefined4 *)(&stack0x00000004 + iVar10);
  puVar5[1] = *(undefined4 *)(&stack0x00000008 + iVar10);
  iVar2 = CCSprite::isFlipY(*(CCSprite **)(iVar4 + 0x104));
  if ((iVar2 != 0) || (iVar2 = CCSprite::isFlipX(*(CCSprite **)(iVar4 + 0x104)), iVar2 != 0)) {
    iVar6 = *(int *)(&stack0xfffffff4 + iVar10);
    iVar2 = CCSprite::isFlipX(*(CCSprite **)(iVar6 + 0x104));
    if (iVar2 != 0) {
      uVar1 = __addsf3(*(undefined4 *)(&stack0x00000014 + iVar10),
                       *(undefined4 *)(&stack0x0000000c + iVar10));
      iVar2 = *(int *)(iVar6 + 0x10c) + *(int *)(&stack0xfffffff0 + iVar10);
      uVar8 = __subsf3(uVar1,*(undefined4 *)(iVar2 + 0xc));
      *(undefined4 *)(iVar2 + 0xc) = uVar8;
      iVar2 = *(int *)(iVar6 + 0x10c) + *(int *)(&stack0xfffffff8 + iVar10);
      uVar1 = __subsf3(uVar1,*(undefined4 *)(iVar2 + 0xc));
      *(undefined4 *)(iVar2 + 0xc) = uVar1;
    }
    iVar6 = *(int *)(&stack0xfffffff4 + iVar10);
    iVar2 = CCSprite::isFlipY(*(CCSprite **)(iVar6 + 0x104));
    if (iVar2 != 0) {
      uVar1 = __addsf3(*(undefined4 *)(&stack0x00000018 + iVar10),
                       *(undefined4 *)(&stack0x00000010 + iVar10));
      iVar2 = *(int *)(iVar6 + 0x10c) + *(int *)(&stack0xfffffff0 + iVar10);
      uVar8 = __subsf3(uVar1,*(undefined4 *)(iVar2 + 0x10));
      *(undefined4 *)(iVar2 + 0x10) = uVar8;
      iVar10 = *(int *)(iVar6 + 0x10c) + *(int *)(&stack0xfffffff8 + iVar10);
      uVar1 = __subsf3(uVar1,*(undefined4 *)(iVar10 + 0x10));
      *(undefined4 *)(iVar10 + 0x10) = uVar1;
    }
  }
  return;
}


