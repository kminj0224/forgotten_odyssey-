/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a7f4  Symbol: updateTransform */

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::CCSprite::updateTransform() */

void __thiscall cocos2d::CCSprite::updateTransform(CCSprite *this)

{
  int iVar1;
  int iVar2;
  int *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float __x;
  float fVar16;
  undefined4 extraout_s0;
  undefined8 uVar17;
  undefined4 extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s4;
  float extraout_s4_00;
  float extraout_s4_01;
  float extraout_s5;
  float extraout_s5_00;
  float extraout_s5_01;
  int local_d4;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  undefined4 local_9c;
  undefined4 *puStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 *puStack_68;
  undefined4 local_64;
  undefined4 *puStack_60;
  undefined4 uStack_5c;
  cocos2d acStack_58 [24];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  CCPoint local_24 [8];
  char local_1c;
  
  if (this[0x118] == (CCSprite)0x0) {
    return;
  }
  if (this[0x4c] == (CCSprite)0x0) {
    *(undefined4 *)(this + 0x178) = 0;
    *(undefined4 *)(this + 0x17c) = 0;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 400) = 0;
    *(undefined4 *)(this + 0x194) = 0;
    *(undefined4 *)(this + 0x198) = 0;
    *(undefined4 *)(this + 0x160) = 0;
    *(undefined4 *)(this + 0x164) = 0;
    *(undefined4 *)(this + 0x168) = 0;
    *(undefined4 *)(this + 0x1a8) = 0;
    *(undefined4 *)(this + 0x1ac) = 0;
    *(undefined4 *)(this + 0x1b0) = 0;
    CCTextureAtlas::updateQuad
              (*(CCTextureAtlas **)(this + 0x108),(_ccV3F_C4B_T2F_Quad *)(this + 0x160),
               *(uint *)(this + 0x10c));
    this[0x119] = (CCSprite)0x0;
    this[0x118] = (CCSprite)0x0;
    return;
  }
  if ((*(int *)(this + 0x74) != 0) && (*(int *)(this + 0x74) != *(int *)(this + 0x110))) {
    puVar12 = *(undefined4 **)(DAT_0015ab8c + 0x15a9a6);
    local_88 = *puVar12;
    local_84 = puVar12[1];
    local_80 = (undefined4 *)puVar12[2];
    local_7c = puVar12[3];
    local_78 = (undefined4 *)puVar12[4];
    local_74 = puVar12[5];
    local_d4 = 0xf;
    for (this_00 = (int *)this; (this_00 != (int *)0x0 && (this_00 != *(int **)(this + 0x110)));
        this_00 = (int *)(**(code **)(*this_00 + 0x90))(this_00)) {
      CCPoint::CCPoint((CCPoint *)&local_40);
      CCPoint::CCPoint((CCPoint *)local_38);
      CCPoint::CCPoint((CCPoint *)&local_2c);
      CCPoint::CCPoint(local_24);
      uVar17 = getTransformValues((CCSprite *)this_00,(transformValues_ *)&local_40);
      if (local_1c == '\0') {
        *(undefined4 *)(this + 0x178) = 0;
        *(undefined4 *)(this + 0x17c) = 0;
        *(undefined4 *)(this + 0x180) = 0;
        *(undefined4 *)(this + 400) = 0;
        *(undefined4 *)(this + 0x194) = 0;
        *(undefined4 *)(this + 0x198) = 0;
        *(undefined4 *)(this + 0x160) = 0;
        *(undefined4 *)(this + 0x164) = 0;
        *(undefined4 *)(this + 0x168) = 0;
        *(undefined4 *)(this + 0x1a8) = 0;
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined4 *)(this + 0x1b0) = 0;
        CCTextureAtlas::updateQuad
                  (*(CCTextureAtlas **)(this + 0x108),(_ccV3F_C4B_T2F_Quad *)(this + 0x160),
                   *(uint *)(this + 0x10c));
        this[0x119] = (CCSprite)0x0;
        this[0x118] = (CCSprite)0x0;
        return;
      }
      local_70 = *puVar12;
      uStack_6c = puVar12[1];
      puStack_68 = (undefined4 *)puVar12[2];
      local_64 = puVar12[3];
      puStack_60 = (undefined4 *)puVar12[4];
      uStack_5c = puVar12[5];
      puVar11 = puVar12 + 6;
      if (local_d4 << 0x1f < 0) {
        uVar17 = CCAffineTransformTranslate
                           ((cocos2d *)&local_a8,(CCAffineTransform *)&local_70,(float)uVar17,
                            (float)((ulonglong)uVar17 >> 0x20));
        local_70 = local_a8;
        uStack_6c = uStack_a4;
        puStack_68 = puStack_a0;
        local_64 = local_9c;
        puStack_60 = puStack_98;
        uStack_5c = uStack_94;
        puVar11 = puStack_a0;
      }
      if (local_d4 << 0x1e < 0) {
        fVar16 = (float)__mulsf3(local_30,DAT_0015ab88,puVar11,acStack_58);
        uVar17 = CCAffineTransformRotate((cocos2d *)&local_a8,(CCAffineTransform *)&local_70,fVar16)
        ;
        local_70 = local_a8;
        uStack_6c = uStack_a4;
        puStack_68 = puStack_a0;
        local_64 = local_9c;
        puStack_60 = puStack_98;
        uStack_5c = uStack_94;
        puVar11 = puStack_98;
      }
      if (local_d4 << 0x1c < 0) {
        fVar16 = (float)__mulsf3(local_28,DAT_0015ab88,puVar11,acStack_58);
        tanf(fVar16);
        fVar16 = (float)__mulsf3(local_2c,DAT_0015ab88);
        fVar16 = tanf(fVar16);
        __CCAffineTransformMake
                  (acStack_58,fVar16,extraout_s1_01,extraout_s2_01,extraout_s3_01,extraout_s4_01,
                   extraout_s5_01);
        uVar17 = CCAffineTransformConcat
                           ((cocos2d *)&local_a8,(CCAffineTransform *)acStack_58,
                            (CCAffineTransform *)&local_70);
        local_70 = local_a8;
        uStack_6c = uStack_a4;
        puStack_68 = puStack_a0;
        local_64 = local_9c;
        puStack_60 = puStack_98;
        uStack_5c = uStack_94;
      }
      if (local_d4 << 0x1d < 0) {
        uVar17 = CCAffineTransformScale
                           ((cocos2d *)&local_a8,(CCAffineTransform *)&local_70,(float)uVar17,
                            (float)((ulonglong)uVar17 >> 0x20));
        local_70 = local_a8;
        uStack_6c = uStack_a4;
        puStack_68 = puStack_a0;
        local_64 = local_9c;
        puStack_60 = puStack_98;
        uStack_5c = uStack_94;
      }
      CCAffineTransformTranslate
                ((cocos2d *)&local_a8,(CCAffineTransform *)&local_70,(float)uVar17,
                 (float)((ulonglong)uVar17 >> 0x20));
      local_70 = local_a8;
      uStack_6c = uStack_a4;
      puStack_68 = puStack_a0;
      local_64 = local_9c;
      puStack_60 = puStack_98;
      uStack_5c = uStack_94;
      CCAffineTransformConcat
                ((cocos2d *)&local_a8,(CCAffineTransform *)&local_88,(CCAffineTransform *)&local_70)
      ;
      local_88 = local_a8;
      local_84 = uStack_a4;
      local_80 = puStack_a0;
      local_7c = local_9c;
      local_78 = puStack_98;
      local_74 = uStack_94;
      local_d4 = this_00[0x45];
    }
    goto LAB_0015ab90;
  }
  iVar1 = __mulsf3(*(undefined4 *)(this + 0x1c),DAT_0015ab88);
  iVar1 = iVar1 + -0x80000000;
  iVar2 = iVar1;
  fVar16 = cosf(__x);
  sinf(fVar16);
  uVar13 = *(undefined4 *)(this + 0x20);
  __mulsf3(iVar2,uVar13);
  __mulsf3(iVar1,uVar13);
  uVar13 = *(undefined4 *)(this + 0x24);
  __mulsf3(iVar1 + -0x80000000,uVar13);
  uVar17 = __mulsf3(iVar2,uVar13);
  __CCAffineTransformMake
            ((cocos2d *)&local_a8,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20),extraout_s2,
             extraout_s3,extraout_s4,extraout_s5);
  local_88 = local_a8;
  local_84 = uStack_a4;
  local_80 = puStack_a0;
  local_7c = local_9c;
  local_78 = puStack_98;
  local_74 = uStack_94;
  uVar13 = *(undefined4 *)(this + 0x38);
  iVar2 = __aeabi_fcmpeq(uVar13,0,&local_90,&local_70);
  if (iVar2 == 0) {
LAB_0015a930:
    fVar16 = (float)__mulsf3(*(undefined4 *)(this + 0x3c),DAT_0015ab88);
    tanf(fVar16);
    fVar16 = (float)__mulsf3(uVar13,DAT_0015ab88);
    fVar16 = tanf(fVar16);
    __CCAffineTransformMake
              ((cocos2d *)&local_40,fVar16,extraout_s1_00,extraout_s2_00,extraout_s3_00,
               extraout_s4_00,extraout_s5_00);
    uVar17 = CCAffineTransformConcat
                       ((cocos2d *)&local_a8,(CCAffineTransform *)&local_40,
                        (CCAffineTransform *)&local_88);
    local_88 = local_a8;
    local_84 = uStack_a4;
    local_80 = puStack_a0;
    local_7c = local_9c;
    local_78 = puStack_98;
    local_74 = uStack_94;
  }
  else {
    iVar2 = __aeabi_fcmpeq(*(undefined4 *)(this + 0x3c),0);
    uVar17 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar2 == 0) goto LAB_0015a930;
  }
  CCAffineTransformTranslate
            ((cocos2d *)&local_a8,(CCAffineTransform *)&local_88,(float)uVar17,
             (float)((ulonglong)uVar17 >> 0x20));
  local_88 = local_a8;
  local_84 = uStack_a4;
  local_80 = puStack_a0;
  local_7c = local_9c;
  local_78 = puStack_98;
  local_74 = uStack_94;
LAB_0015ab90:
  local_90 = *(undefined4 *)(this + 0x144);
  uVar14 = *(undefined4 *)(this + 0x150);
  local_8c = *(undefined4 *)(this + 0x148);
  uVar15 = *(undefined4 *)(this + 0x154);
  uVar3 = __addsf3(uVar14,local_90);
  uVar4 = __addsf3(uVar15,local_8c);
  uVar9 = local_7c;
  uVar8 = local_84;
  uVar13 = local_88;
  puVar11 = local_80 + -0x20000000;
  uVar5 = __mulsf3(uVar14,local_88);
  uVar6 = __mulsf3(uVar15,puVar11);
  uVar14 = __mulsf3(uVar14,uVar8);
  uVar15 = __mulsf3(uVar15,uVar9);
  uVar7 = __mulsf3(uVar3,uVar13);
  uVar8 = __mulsf3(uVar3,uVar8);
  uVar13 = local_74;
  puVar12 = local_78;
  uVar3 = __mulsf3(uVar4,puVar11);
  uVar9 = __mulsf3(uVar4,uVar9);
  uVar10 = *(undefined4 *)(this + 0x18);
  uVar4 = __subsf3(uVar5,uVar6);
  local_40 = __addsf3(uVar4,puVar12);
  uVar4 = __addsf3(uVar14,uVar15);
  local_3c = __addsf3(uVar4,uVar13);
  *(undefined4 *)(this + 0x178) = local_40;
  *(undefined4 *)(this + 0x17c) = local_3c;
  *(undefined4 *)(this + 0x180) = uVar10;
  local_38[0] = uVar10;
  uVar4 = __subsf3(uVar7,uVar6);
  local_40 = __addsf3(uVar4,puVar12);
  uVar4 = __addsf3(uVar8,uVar15);
  local_3c = __addsf3(uVar4,uVar13);
  *(undefined4 *)(this + 0x1a8) = local_40;
  *(undefined4 *)(this + 0x1ac) = local_3c;
  *(undefined4 *)(this + 0x1b0) = uVar10;
  local_38[0] = uVar10;
  uVar4 = __subsf3(uVar5,uVar3);
  local_40 = __addsf3(uVar4,puVar12);
  uVar4 = __addsf3(uVar14,uVar9);
  local_3c = __addsf3(uVar4,uVar13);
  *(undefined4 *)(this + 0x160) = local_40;
  *(undefined4 *)(this + 0x164) = local_3c;
  *(undefined4 *)(this + 0x168) = uVar10;
  local_38[0] = uVar10;
  uVar3 = __subsf3(uVar7,uVar3);
  local_40 = __addsf3(uVar3,puVar12);
  uVar8 = __addsf3(uVar8,uVar9);
  local_3c = __addsf3(uVar8,uVar13);
  *(undefined4 *)(this + 400) = local_40;
  *(undefined4 *)(this + 0x194) = local_3c;
  *(undefined4 *)(this + 0x198) = uVar10;
  local_38[0] = uVar10;
  CCTextureAtlas::updateQuad
            (*(CCTextureAtlas **)(this + 0x108),(_ccV3F_C4B_T2F_Quad *)(this + 0x160),
             *(uint *)(this + 0x10c));
  this[0x119] = (CCSprite)0x0;
  this[0x118] = (CCSprite)0x0;
  return;
}


