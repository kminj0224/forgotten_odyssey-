/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00150398  Symbol: updateRadial */

/* cocos2d::CCProgressTimer::updateRadial() */

void __thiscall cocos2d::CCProgressTimer::updateRadial(CCProgressTimer *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  void *pvVar8;
  int iVar9;
  undefined4 *puVar10;
  int *piVar11;
  float extraout_s0;
  float extraout_s0_00;
  float fVar13;
  float extraout_s1;
  float extraout_s1_00;
  float fVar15;
  undefined8 uVar14;
  undefined4 uStack_4;
  float **ppfVar12;
  
  iVar2 = DAT_00150600;
  iVar9 = *(int *)(this + 0x104);
  piVar11 = (int *)(&stack0xffffffec + DAT_00150600);
  ppfVar12 = (float **)(&stack0xffffffec + DAT_00150600);
  pvVar6 = (void *)(iVar9 + 0x160);
  memcpy(&stack0x000000c4 + DAT_00150600,pvVar6,0x60);
  uVar7 = *(undefined4 *)(&stack0x0000011c + iVar2);
  memcpy(&stack0x00000124 + iVar2,pvVar6,0x60);
  iVar3 = __aeabi_fcmplt(uVar7,*(undefined4 *)(&stack0x0000014c + iVar2));
  if (iVar3 == 0) {
    memcpy(&stack0x000001e4 + iVar2,pvVar6,0x60);
    uVar7 = *(undefined4 *)(&stack0x0000023c + iVar2);
  }
  else {
    memcpy(&stack0x00000184 + iVar2,pvVar6,0x60);
    uVar7 = *(undefined4 *)(&stack0x000001ac + iVar2);
  }
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = uVar7;
  pvVar6 = (void *)(iVar9 + 0x160);
  memcpy(&stack0x00000244 + iVar2,pvVar6,0x60);
  uVar7 = *(undefined4 *)(&stack0x0000029c + iVar2);
  memcpy(&stack0x000002a4 + iVar2,pvVar6,0x60);
  iVar3 = __aeabi_fcmpgt(uVar7,*(undefined4 *)(&stack0x000002cc + iVar2));
  if (iVar3 == 0) {
    memcpy(&stack0x00000364 + iVar2,pvVar6,0x60);
    uVar7 = *(undefined4 *)(&stack0x000003bc + iVar2);
  }
  else {
    memcpy(&stack0x00000304 + iVar2,pvVar6,0x60);
    uVar7 = *(undefined4 *)(&stack0x0000032c + iVar2);
  }
  *(undefined4 *)(&stack0x00000000 + iVar2) = uVar7;
  pvVar6 = (void *)(iVar9 + 0x160);
  memcpy(&stack0x000003c4 + iVar2,pvVar6,0x60);
  *(undefined4 *)((int)&uStack_4 + iVar2) = *(undefined4 *)(&stack0x000003d8 + iVar2);
  memcpy(&stack0x00000424 + iVar2,pvVar6,0x60);
  iVar3 = __aeabi_fcmplt(*(undefined4 *)((int)&uStack_4 + iVar2),
                         *(undefined4 *)(&stack0x00000450 + iVar2));
  if (iVar3 == 0) {
    memcpy(&stack0x000004e4 + iVar2,pvVar6,0x60);
    uVar7 = *(undefined4 *)(&stack0x000004f8 + iVar2);
  }
  else {
    memcpy(&stack0x00000484 + iVar2,pvVar6,0x60);
    uVar7 = *(undefined4 *)(&stack0x000004b0 + iVar2);
  }
  *(undefined4 *)((int)&uStack_4 + iVar2) = uVar7;
  pvVar6 = (void *)(iVar9 + 0x160);
  memcpy(&stack0x00000544 + iVar2,pvVar6,0x60);
  uVar7 = *(undefined4 *)(&stack0x00000558 + iVar2);
  memcpy(&stack0x000005a4 + iVar2,pvVar6,0x60);
  iVar3 = __aeabi_fcmpgt(uVar7,*(undefined4 *)(&stack0x000005d0 + iVar2));
  if (iVar3 == 0) {
    memcpy(&stack0x00000664 + iVar2,pvVar6,0x60);
    fVar13 = extraout_s0_00;
    fVar15 = extraout_s1_00;
  }
  else {
    memcpy(&stack0x00000604 + iVar2,pvVar6,0x60);
    fVar13 = extraout_s0;
    fVar15 = extraout_s1;
  }
  uVar14 = CCPoint::CCPoint((CCPoint *)(&stack0x00000014 + iVar2),fVar13,fVar15);
  CCPoint::CCPoint((CCPoint *)(&stack0x0000001c + iVar2),(float)uVar14,
                   (float)((ulonglong)uVar14 >> 0x20));
  FUN_0014f962(&stack0x0000002c + iVar2,&stack0x00000014 + iVar2,&stack0x0000001c + iVar2);
  ccpCompMult((CCPoint *)(&stack0x00000034 + iVar2),(CCPoint *)(this + 0x50));
  FUN_0014f98a(&stack0x00000024 + iVar2,&stack0x0000001c + iVar2,&stack0x00000034 + iVar2);
  uVar4 = __divsf3(*(undefined4 *)(this + 0x100),DAT_00150604);
  uVar7 = uVar4;
  if (*(int *)(this + 0xfc) != 1) {
    uVar7 = __subsf3(0x3f800000,uVar4);
  }
  uVar14 = __mulsf3(uVar7,DAT_00150608);
  fVar13 = (float)CCPoint::CCPoint((CCPoint *)(&stack0x0000003c + iVar2),(float)uVar14,
                                   (float)((ulonglong)uVar14 >> 0x20));
  ccpRotateByAngle((cocos2d *)(&stack0x00000044 + iVar2),(CCPoint *)(&stack0x0000003c + iVar2),
                   (CCPoint *)(&stack0x00000024 + iVar2),fVar13);
  uVar7 = *(undefined4 *)(DAT_0015060c + 0x150556);
  *(undefined4 *)(&stack0x0000004c + iVar2) = *(undefined4 *)(DAT_0015060c + 0x150552);
  *(undefined4 *)(&stack0x00000050 + iVar2) = uVar7;
  iVar3 = __aeabi_fcmpeq(uVar4,0);
  cVar1 = (char)iVar2;
  if (iVar3 == 0) {
    iVar3 = __aeabi_fcmpeq(uVar4,0x3f800000);
    if (iVar3 == 0) {
      iVar3 = 0;
      *(undefined4 *)(&stack0xfffffff8 + iVar2) = 0;
      uVar7 = DAT_00150610;
      do {
        boundaryTexCoord((char)&stack0x00000054 + cVar1);
        FUN_0014f962(&stack0x0000005c + iVar2,&stack0x00000014 + iVar2,&stack0x0000001c + iVar2);
        ccpCompMult((CCPoint *)(&stack0x00000064 + iVar2),(CCPoint *)(&stack0x00000054 + iVar2));
        FUN_0014f98a(&stack0x0000009c + iVar2,&stack0x0000001c + iVar2,&stack0x00000064 + iVar2);
        boundaryTexCoord((char)&stack0x0000006c + cVar1);
        FUN_0014f962(&stack0x00000074 + iVar2,&stack0x00000014 + iVar2,&stack0x0000001c + iVar2);
        ccpCompMult((CCPoint *)(&stack0x0000007c + iVar2),(CCPoint *)(&stack0x0000006c + iVar2));
        fVar13 = (float)FUN_0014f98a(&stack0x000000bc + iVar2,&stack0x0000001c + iVar2,
                                     &stack0x0000007c + iVar2);
        if (iVar3 == 0) {
          ccpLerp((cocos2d *)(&stack0x00000004 + iVar2),(CCPoint *)(&stack0x0000009c + iVar2),
                  (CCPoint *)(&stack0x000000bc + iVar2),fVar13);
          *(undefined4 *)(&stack0x000000bc + iVar2) = *(undefined4 *)(&stack0x00000004 + iVar2);
          *(undefined4 *)(&stack0x000000c0 + iVar2) = *(undefined4 *)(&stack0x00000008 + iVar2);
        }
        else if (iVar3 == 4) {
          ccpLerp((cocos2d *)(&stack0x00000004 + iVar2),(CCPoint *)(&stack0x0000009c + iVar2),
                  (CCPoint *)(&stack0x000000bc + iVar2),fVar13);
          *(undefined4 *)(&stack0x0000009c + iVar2) = *(undefined4 *)(&stack0x00000004 + iVar2);
          *(undefined4 *)(&stack0x000000a0 + iVar2) = *(undefined4 *)(&stack0x00000008 + iVar2);
        }
        *(undefined4 *)(&stack0x0000000c + iVar2) = 0;
        *(undefined4 *)(&stack0x00000010 + iVar2) = 0;
        *piVar11 = (int)(&stack0x0000000c + iVar2);
        *(undefined **)(&stack0xfffffff0 + iVar2) = &stack0x00000010 + iVar2;
        iVar9 = ccpLineIntersect((CCPoint *)(&stack0x0000009c + iVar2),
                                 (CCPoint *)(&stack0x000000bc + iVar2),
                                 (CCPoint *)(&stack0x00000024 + iVar2),
                                 (CCPoint *)(&stack0x00000044 + iVar2),*ppfVar12,
                                 *(float **)(&stack0xfffffff0 + iVar2));
        if (iVar9 != 0) {
          if ((iVar3 == 4) || (iVar3 == 0)) {
            uVar4 = *(undefined4 *)(&stack0x0000000c + iVar2);
            iVar9 = __aeabi_fcmpge(uVar4,0);
            if ((iVar9 == 0) || (iVar9 = __aeabi_fcmple(uVar4,0x3f800000), iVar9 == 0))
            goto LAB_0015068e;
          }
          uVar4 = *(undefined4 *)(&stack0x00000010 + iVar2);
          iVar9 = __aeabi_fcmpge(uVar4,0);
          if ((iVar9 != 0) && (iVar9 = __aeabi_fcmplt(uVar4,uVar7), iVar9 != 0)) {
            *(int *)(&stack0xfffffff8 + iVar2) = iVar3;
            uVar7 = uVar4;
          }
        }
LAB_0015068e:
        iVar3 = iVar3 + 1;
      } while (iVar3 != 5);
      FUN_0014f962(&stack0x00000084 + iVar2,&stack0x00000044 + iVar2,&stack0x00000024 + iVar2);
      __mulsf3(uVar7,*(undefined4 *)(&stack0x00000084 + iVar2));
      uVar14 = __mulsf3(uVar7,*(undefined4 *)(&stack0x00000088 + iVar2));
      CCPoint::CCPoint((CCPoint *)(&stack0x0000008c + iVar2),(float)uVar14,
                       (float)((ulonglong)uVar14 >> 0x20));
      FUN_0014f98a(&stack0x00000004 + iVar2,&stack0x00000024 + iVar2,&stack0x0000008c + iVar2);
      *(undefined4 *)(&stack0x0000004c + iVar2) = *(undefined4 *)(&stack0x00000004 + iVar2);
      *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(&stack0x00000008 + iVar2);
      goto LAB_001506ce;
    }
    *(undefined4 *)(&stack0x0000004c + iVar2) = *(undefined4 *)(&stack0x0000003c + iVar2);
    *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(&stack0x00000040 + iVar2);
    uVar7 = 4;
  }
  else {
    *(undefined4 *)(&stack0x0000004c + iVar2) = *(undefined4 *)(&stack0x0000003c + iVar2);
    *(undefined4 *)(&stack0x00000050 + iVar2) = *(undefined4 *)(&stack0x00000040 + iVar2);
    uVar7 = 0;
  }
  *(undefined4 *)(&stack0xfffffff8 + iVar2) = uVar7;
LAB_001506ce:
  iVar3 = *(int *)(&stack0xfffffff8 + iVar2) + 3;
  pvVar6 = (void *)0x1;
  if ((*(int *)(this + 0x108) != iVar3) &&
     (pvVar8 = *(void **)(this + 0x10c), pvVar6 = pvVar8, pvVar8 != (void *)0x0)) {
    pvVar6 = (void *)0x0;
    operator_delete__(pvVar8);
    *(undefined4 *)(this + 0x10c) = 0;
    *(undefined4 *)(this + 0x108) = 0;
  }
  if (*(int *)(this + 0x10c) == 0) {
    *(int *)(this + 0x108) = iVar3;
    pvVar8 = operator_new__(iVar3 * 0x14);
    *(void **)(this + 0x10c) = pvVar8;
    updateColor(this);
  }
  if (pvVar6 == (void *)0x0) {
    *(undefined4 *)(&stack0x000000bc + iVar2) = *(undefined4 *)(&stack0x00000024 + iVar2);
    iVar3 = *(int *)(this + 0x10c);
    *(undefined4 *)(&stack0x000000c0 + iVar2) = *(undefined4 *)(&stack0x00000028 + iVar2);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(&stack0x000000bc + iVar2);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(&stack0x000000c0 + iVar2);
    puVar10 = *(undefined4 **)(this + 0x10c);
    uVar14 = vertexFromTexCoord((CCPoint *)(&stack0x00000004 + iVar2));
    *puVar10 = *(undefined4 *)(&stack0x00000004 + iVar2);
    uVar7 = *(undefined4 *)(&stack0x00000024 + iVar2);
    puVar10[1] = *(undefined4 *)(&stack0x00000008 + iVar2);
    *(undefined4 *)(&stack0x000000bc + iVar2) = uVar7;
    iVar3 = *(int *)(this + 0x10c);
    *(undefined4 *)(&stack0x000000c0 + iVar2) = *(undefined4 *)(&stack0x00000020 + iVar2);
    *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(&stack0x000000bc + iVar2);
    *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(&stack0x000000c0 + iVar2);
    iVar3 = *(int *)(this + 0x10c);
    CCPoint::CCPoint((CCPoint *)(&stack0x00000094 + iVar2),(float)uVar14,
                     (float)((ulonglong)uVar14 >> 0x20));
    vertexFromTexCoord((CCPoint *)(&stack0x00000004 + iVar2));
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(&stack0x00000004 + iVar2);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(&stack0x00000008 + iVar2);
    iVar9 = 0x28;
    for (iVar3 = 0; iVar3 < *(int *)(&stack0xfffffff8 + iVar2); iVar3 = iVar3 + 1) {
      boundaryTexCoord((char)&stack0x000000a4 + cVar1);
      FUN_0014f962(&stack0x000000ac + iVar2,&stack0x00000014 + iVar2,&stack0x0000001c + iVar2);
      ccpCompMult((CCPoint *)(&stack0x000000b4 + iVar2),(CCPoint *)(&stack0x000000a4 + iVar2));
      FUN_0014f98a(&stack0x0000009c + iVar2,&stack0x0000001c + iVar2,&stack0x000000b4 + iVar2);
      iVar5 = *(int *)(this + 0x10c);
      *(undefined4 *)(&stack0x000000bc + iVar2) = *(undefined4 *)(&stack0x0000009c + iVar2);
      *(undefined4 *)(&stack0x000000c0 + iVar2) = *(undefined4 *)(&stack0x000000a0 + iVar2);
      *(undefined4 *)(iVar5 + iVar9 + 0xc) = *(undefined4 *)(&stack0x000000bc + iVar2);
      *(undefined4 *)(iVar5 + iVar9 + 0x10) = *(undefined4 *)(&stack0x000000c0 + iVar2);
      iVar5 = *(int *)(this + 0x10c);
      vertexFromTexCoord((CCPoint *)(&stack0x00000004 + iVar2));
      *(undefined4 *)(iVar5 + iVar9) = *(undefined4 *)(&stack0x00000004 + iVar2);
      iVar5 = iVar5 + iVar9;
      iVar9 = iVar9 + 0x14;
      *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(&stack0x00000008 + iVar2);
    }
    iVar3 = CCSprite::isFlipX(*(CCSprite **)(this + 0x104));
    if ((iVar3 != 0) || (iVar3 = CCSprite::isFlipY(*(CCSprite **)(this + 0x104)), iVar3 != 0)) {
      iVar3 = 0;
      for (iVar9 = 0; iVar9 < *(int *)(this + 0x108) + -1; iVar9 = iVar9 + 1) {
        iVar5 = CCSprite::isFlipX(*(CCSprite **)(this + 0x104));
        if (iVar5 != 0) {
          *(int *)(&stack0xfffffff8 + iVar2) = *(int *)(this + 0x10c) + iVar3;
          uVar7 = __addsf3(*(undefined4 *)(&stack0x0000001c + iVar2),
                           *(undefined4 *)(&stack0x00000014 + iVar2));
          uVar7 = __subsf3(uVar7,*(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar2) + 0xc));
          *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar2) + 0xc) = uVar7;
        }
        iVar5 = CCSprite::isFlipY(*(CCSprite **)(this + 0x104));
        if (iVar5 != 0) {
          *(int *)(&stack0xfffffff8 + iVar2) = *(int *)(this + 0x10c) + iVar3;
          uVar7 = __addsf3(*(undefined4 *)(&stack0x00000020 + iVar2),
                           *(undefined4 *)(&stack0x00000018 + iVar2));
          uVar7 = __subsf3(uVar7,*(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar2) + 0x10));
          *(undefined4 *)(*(int *)(&stack0xfffffff8 + iVar2) + 0x10) = uVar7;
        }
        iVar3 = iVar3 + 0x14;
      }
    }
  }
  iVar3 = *(int *)(this + 0x10c) + (*(int *)(this + 0x108) + -1) * 0x14;
  *(undefined4 *)(&stack0x000000bc + iVar2) = *(undefined4 *)(&stack0x0000004c + iVar2);
  *(undefined4 *)(&stack0x000000c0 + iVar2) = *(undefined4 *)(&stack0x00000050 + iVar2);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(&stack0x000000bc + iVar2);
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(&stack0x000000c0 + iVar2);
  iVar9 = (*(int *)(this + 0x108) + -1) * 0x14;
  iVar3 = *(int *)(this + 0x10c);
  vertexFromTexCoord((CCPoint *)(&stack0x00000004 + iVar2));
  *(undefined4 *)(iVar9 + iVar3) = *(undefined4 *)(&stack0x00000004 + iVar2);
  *(undefined4 *)(iVar3 + iVar9 + 4) = *(undefined4 *)(&stack0x00000008 + iVar2);
  iVar3 = CCSprite::isFlipX(*(CCSprite **)(this + 0x104));
  if ((iVar3 != 0) || (iVar3 = CCSprite::isFlipY(*(CCSprite **)(this + 0x104)), iVar3 != 0)) {
    iVar3 = CCSprite::isFlipX(*(CCSprite **)(this + 0x104));
    if (iVar3 != 0) {
      iVar3 = *(int *)(this + 0x10c) + (*(int *)(this + 0x108) + -1) * 0x14;
      uVar7 = __addsf3(*(undefined4 *)(&stack0x0000001c + iVar2),
                       *(undefined4 *)(&stack0x00000014 + iVar2));
      uVar7 = __subsf3(uVar7,*(undefined4 *)(iVar3 + 0xc));
      *(undefined4 *)(iVar3 + 0xc) = uVar7;
    }
    iVar3 = CCSprite::isFlipY(*(CCSprite **)(this + 0x104));
    if (iVar3 != 0) {
      iVar3 = *(int *)(this + 0x10c) + (*(int *)(this + 0x108) + -1) * 0x14;
      uVar7 = __addsf3(*(undefined4 *)(&stack0x00000020 + iVar2),
                       *(undefined4 *)(&stack0x00000018 + iVar2));
      uVar7 = __subsf3(uVar7,*(undefined4 *)(iVar3 + 0x10));
      *(undefined4 *)(iVar3 + 0x10) = uVar7;
    }
  }
  return;
}


