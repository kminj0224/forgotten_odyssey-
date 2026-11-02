/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142640  Symbol: nodeToParentTransform */

/* cocos2d::CCNode::nodeToParentTransform() */

undefined4 * cocos2d::CCNode::nodeToParentTransform(void)

{
  undefined4 *in_r0;
  int iVar1;
  int in_r1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  CCPoint *pCVar6;
  float extraout_s0;
  float extraout_s0_00;
  float fVar7;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float fVar8;
  float extraout_s1_04;
  float extraout_s2;
  float extraout_s3;
  float extraout_s4;
  float extraout_s5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  CCPoint *pCStack_38;
  CCPoint *pCStack_34;
  cocos2d acStack_30 [28];
  
  if (*(char *)(in_r1 + 0xf4) != '\0') {
    puVar5 = (undefined4 *)(in_r1 + 0x84);
    puVar3 = *(undefined4 **)(DAT_001427e8 + 0x14265e);
    uVar2 = puVar3[1];
    uVar4 = puVar3[2];
    *puVar5 = *puVar3;
    *(undefined4 *)(in_r1 + 0x88) = uVar2;
    *(undefined4 *)(in_r1 + 0x8c) = uVar4;
    uVar2 = puVar3[4];
    uVar4 = puVar3[5];
    *(undefined4 *)(in_r1 + 0x90) = puVar3[3];
    *(undefined4 *)(in_r1 + 0x94) = uVar2;
    *(undefined4 *)(in_r1 + 0x98) = uVar4;
    pCVar6 = (CCPoint *)(in_r1 + 0x9c);
    if ((*(char *)(in_r1 + 0x78) == '\0') &&
       (iVar1 = CCPoint::CCPointEqualToPoint
                          ((CCPoint *)(in_r1 + 0x58),(CCPoint *)(DAT_001427ec + 0x14267c),pCVar6),
       iVar1 == 0)) {
      CCAffineTransformTranslate
                ((cocos2d *)&local_48,(CCAffineTransform *)puVar5,extraout_s0,extraout_s1);
      *puVar5 = local_48;
      *(undefined4 *)(in_r1 + 0x88) = uStack_44;
      *(undefined4 *)(in_r1 + 0x8c) = uStack_40;
      *(undefined4 *)(in_r1 + 0x90) = local_3c;
      *(CCPoint **)(in_r1 + 0x94) = pCStack_38;
      *(CCPoint **)(in_r1 + 0x98) = pCStack_34;
      pCVar6 = pCStack_34;
    }
    iVar1 = CCPoint::CCPointEqualToPoint
                      ((CCPoint *)(in_r1 + 0x30),(CCPoint *)(DAT_001427f0 + 0x1426a4),pCVar6);
    if (iVar1 == 0) {
      CCAffineTransformTranslate
                ((cocos2d *)&local_48,(CCAffineTransform *)(undefined4 *)(in_r1 + 0x84),
                 extraout_s0_00,extraout_s1_00);
      *(undefined4 *)(in_r1 + 0x84) = local_48;
      *(undefined4 *)(in_r1 + 0x88) = uStack_44;
      *(undefined4 *)(in_r1 + 0x8c) = uStack_40;
      *(undefined4 *)(in_r1 + 0x90) = local_3c;
      *(CCPoint **)(in_r1 + 0x94) = pCStack_38;
      *(CCPoint **)(in_r1 + 0x98) = pCStack_34;
      pCVar6 = pCStack_34;
    }
    uVar2 = *(undefined4 *)(in_r1 + 0x1c);
    iVar1 = __aeabi_fcmpeq(uVar2,0);
    if (iVar1 == 0) {
      fVar7 = (float)__mulsf3(uVar2,DAT_001427f4);
      CCAffineTransformRotate
                ((cocos2d *)&local_48,(CCAffineTransform *)(undefined4 *)(in_r1 + 0x84),fVar7);
      *(undefined4 *)(in_r1 + 0x84) = local_48;
      *(undefined4 *)(in_r1 + 0x88) = uStack_44;
      *(undefined4 *)(in_r1 + 0x8c) = uStack_40;
      *(undefined4 *)(in_r1 + 0x90) = local_3c;
      *(CCPoint **)(in_r1 + 0x94) = pCStack_38;
      *(CCPoint **)(in_r1 + 0x98) = pCStack_34;
      pCVar6 = pCStack_38;
    }
    uVar2 = *(undefined4 *)(in_r1 + 0x38);
    iVar1 = __aeabi_fcmpeq(uVar2,0);
    if ((iVar1 == 0) || (iVar1 = __aeabi_fcmpeq(*(undefined4 *)(in_r1 + 0x3c),0), iVar1 == 0)) {
      fVar7 = (float)__mulsf3(*(undefined4 *)(in_r1 + 0x3c),DAT_001427f4);
      tanf(fVar7);
      fVar7 = (float)__mulsf3(uVar2,DAT_001427f4);
      fVar7 = tanf(fVar7);
      __CCAffineTransformMake
                (acStack_30,fVar7,extraout_s1_01,extraout_s2,extraout_s3,extraout_s4,extraout_s5);
      CCAffineTransformConcat
                ((cocos2d *)&local_48,(CCAffineTransform *)acStack_30,
                 (CCAffineTransform *)(undefined4 *)(in_r1 + 0x84));
      *(undefined4 *)(in_r1 + 0x84) = local_48;
      *(undefined4 *)(in_r1 + 0x88) = uStack_44;
      *(undefined4 *)(in_r1 + 0x8c) = uStack_40;
      *(undefined4 *)(in_r1 + 0x90) = local_3c;
      *(CCPoint **)(in_r1 + 0x94) = pCStack_38;
      *(CCPoint **)(in_r1 + 0x98) = pCStack_34;
      pCVar6 = pCStack_34;
    }
    iVar1 = __aeabi_fcmpeq(*(undefined4 *)(in_r1 + 0x20),0x3f800000);
    fVar7 = extraout_s0_01;
    fVar8 = extraout_s1_02;
    if ((iVar1 == 0) ||
       (iVar1 = __aeabi_fcmpeq(*(undefined4 *)(in_r1 + 0x24),0x3f800000), fVar7 = extraout_s0_02,
       fVar8 = extraout_s1_03, iVar1 == 0)) {
      CCAffineTransformScale
                ((cocos2d *)&local_48,(CCAffineTransform *)(undefined4 *)(in_r1 + 0x84),fVar7,fVar8)
      ;
      *(undefined4 *)(in_r1 + 0x84) = local_48;
      *(undefined4 *)(in_r1 + 0x88) = uStack_44;
      *(undefined4 *)(in_r1 + 0x8c) = uStack_40;
      *(undefined4 *)(in_r1 + 0x90) = local_3c;
      *(CCPoint **)(in_r1 + 0x94) = pCStack_38;
      *(CCPoint **)(in_r1 + 0x98) = pCStack_34;
      pCVar6 = pCStack_34;
    }
    iVar1 = CCPoint::CCPointEqualToPoint
                      ((CCPoint *)(in_r1 + 0x58),(CCPoint *)(DAT_001427f8 + 0x1427a2),pCVar6);
    if (iVar1 == 0) {
      CCAffineTransformTranslate
                ((cocos2d *)&local_48,(CCAffineTransform *)(undefined4 *)(in_r1 + 0x84),
                 extraout_s0_03,extraout_s1_04);
      *(undefined4 *)(in_r1 + 0x84) = local_48;
      *(undefined4 *)(in_r1 + 0x88) = uStack_44;
      *(undefined4 *)(in_r1 + 0x8c) = uStack_40;
      *(undefined4 *)(in_r1 + 0x90) = local_3c;
      *(CCPoint **)(in_r1 + 0x94) = pCStack_38;
      *(CCPoint **)(in_r1 + 0x98) = pCStack_34;
    }
    *(undefined *)(in_r1 + 0xf4) = 0;
  }
  uVar2 = *(undefined4 *)(in_r1 + 0x88);
  uVar4 = *(undefined4 *)(in_r1 + 0x8c);
  *in_r0 = *(undefined4 *)(in_r1 + 0x84);
  in_r0[1] = uVar2;
  in_r0[2] = uVar4;
  uVar2 = *(undefined4 *)(in_r1 + 0x94);
  uVar4 = *(undefined4 *)(in_r1 + 0x98);
  in_r0[3] = *(undefined4 *)(in_r1 + 0x90);
  in_r0[4] = uVar2;
  in_r0[5] = uVar4;
  return in_r0;
}


