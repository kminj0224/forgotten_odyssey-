/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161b38  Symbol: reloadAllTextures */

/* cocos2d::VolatileTexture::reloadAllTextures() */

VolatileTexture * __thiscall cocos2d::VolatileTexture::reloadAllTextures(VolatileTexture *this)

{
  int iVar1;
  CCTexture2DPixelFormat CVar2;
  ulong uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  CCTexture2D *pCVar8;
  undefined *puVar9;
  CCTexture2D **ppCVar10;
  uint uVar11;
  int iVar12;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined auStack_40 [4];
  int local_3c;
  int local_38;
  void *local_34;
  ulong local_30;
  CCImage aCStack_2c [24];
  
  puVar6 = *(undefined **)(DAT_00161c9c + 0x161b44);
  iVar12 = DAT_00161ca0 + 0x161b4a;
  *puVar6 = 1;
  puVar7 = *(undefined4 **)(DAT_00161ca4 + 0x161b52);
  puVar5 = (undefined4 *)*puVar7;
  while (puVar5 != puVar7) {
    ppCVar10 = (CCTexture2D **)puVar5[2];
    puVar5 = (undefined4 *)*puVar5;
    pCVar8 = ppCVar10[1];
    if (pCVar8 == (CCTexture2D *)0x2) {
      uVar3 = __fixsfsi(ppCVar10[3]);
      uVar11 = ccNextPOT(uVar3);
      uVar3 = __fixsfsi(ppCVar10[4]);
      uVar4 = ccNextPOT(uVar3);
      this = (VolatileTexture *)
             CCTexture2D::initWithData
                       (*ppCVar10,ppCVar10[2],(CCTexture2DPixelFormat)ppCVar10[5],uVar11,uVar4,
                        (CCSize *)(ppCVar10 + 3));
      in_s0 = extraout_s0_00;
    }
    else if (pCVar8 == (CCTexture2D *)0x3) {
      this = (VolatileTexture *)
             CCTexture2D::initWithString
                       ((char *)*ppCVar10,(CCSize *)ppCVar10[0xc],(CCTextAlignment)(ppCVar10 + 8),
                        (char *)ppCVar10[10],in_s0);
      in_s0 = extraout_s0_01;
    }
    else if (pCVar8 == (CCTexture2D *)0x1) {
      CCImage::CCImage(aCStack_2c);
      FUN_001eed40(&local_3c,ppCVar10[6],auStack_40);
      for (uVar11 = 0; uVar11 < *(uint *)(local_3c + -0xc); uVar11 = uVar11 + 1) {
        FUN_001edfbc(&local_3c);
        puVar9 = (undefined *)(local_3c + uVar11);
        FUN_001edfbc(&local_3c);
        *puVar9 = (char)*(undefined2 *)
                         (**(int **)(DAT_00161ca8 + 0x161ba4) +
                         (*(byte *)(local_3c + uVar11) + 1) * 2);
      }
      iVar1 = FUN_001ece40(&local_3c,iVar12,0);
      if (iVar1 == -1) {
        local_38 = *(int *)(DAT_00161cac + 0x161bec) + 8;
        local_34 = (void *)0x0;
        local_30 = 0;
        local_34 = (void *)CCFileUtils::getFileData
                                     ((char *)ppCVar10[6],(char *)(DAT_00161cb0 + 0x161bf0),
                                      &local_30);
        iVar1 = CCImage::initWithImageData
                          (aCStack_2c,local_34,local_30,(EImageFormat)ppCVar10[7],0,0,8);
        if (iVar1 != 0) {
          CVar2 = CCTexture2D::defaultAlphaPixelFormat();
          CCTexture2D::setDefaultAlphaPixelFormat((CCTexture2DPixelFormat)ppCVar10[5]);
          CCTexture2D::initWithImage(*ppCVar10,aCStack_2c);
          CCTexture2D::setDefaultAlphaPixelFormat(CVar2);
        }
        CCFileData::~CCFileData((CCFileData *)&local_38);
      }
      else {
        CVar2 = CCTexture2D::defaultAlphaPixelFormat();
        CCTexture2D::setDefaultAlphaPixelFormat((CCTexture2DPixelFormat)ppCVar10[5]);
        CCTexture2D::initWithPVRFile(*ppCVar10,(char *)ppCVar10[6]);
        CCTexture2D::setDefaultAlphaPixelFormat(CVar2);
      }
      FUN_001ed6b8(&local_3c);
      this = (VolatileTexture *)CCImage::~CCImage(aCStack_2c);
      in_s0 = extraout_s0;
    }
  }
  *puVar6 = 0;
  return this;
}


