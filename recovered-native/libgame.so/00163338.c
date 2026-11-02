/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163338  Symbol: createGLTexture */

/* cocos2d::CCTexturePVR::createGLTexture() */

undefined __thiscall cocos2d::CCTexturePVR::createGLTexture(CCTexturePVR *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  CCTexturePVR *pCVar8;
  bool bVar9;
  uint local_30;
  
  uVar6 = *(uint *)(this + 0x18);
  uVar7 = *(uint *)(this + 0x1c);
  if (*(int *)(this + 0x2c) != 0) {
    if (*(int *)(this + 0x14) != 0) {
      glDeleteTextures(1,this + 0x14);
    }
    glGenTextures(1,this + 0x14);
    glBindTexture(DAT_00163428,*(undefined4 *)(this + 0x14));
  }
  iVar1 = DAT_0016342c;
  local_30 = 0;
  pCVar8 = this;
  while( true ) {
    if (*(uint *)(this + 0x2c) <= local_30) {
      return 1;
    }
    iVar5 = iVar1 + 0x163382 + *(int *)(this + 0x28) * 0x1c;
    uVar2 = *(undefined4 *)(iVar5 + 8);
    uVar4 = *(undefined4 *)(iVar5 + 0xc);
    uVar3 = *(undefined4 *)(iVar5 + 0x10);
    bVar9 = *(int *)(iVar5 + 0x18) == 1;
    if (bVar9) {
      iVar5 = CCConfiguration::sharedConfiguration();
      if (*(char *)(iVar5 + 0x1c) == '\0') {
        return 0;
      }
    }
    if (bVar9) {
      glCompressedTexImage2D
                (DAT_00163428,local_30,uVar2,uVar6,uVar7,0,*(undefined4 *)(pCVar8 + 0x34),
                 *(undefined4 *)(pCVar8 + 0x30));
    }
    else {
      glTexImage2D(DAT_00163428,local_30,uVar2,uVar6,uVar7,0,uVar4,uVar3,
                   *(undefined4 *)(pCVar8 + 0x30));
    }
    if ((local_30 != 0) && (uVar6 == uVar7)) {
      ccNextPOT(uVar6);
    }
    iVar5 = glGetError();
    if (iVar5 != 0) break;
    uVar6 = uVar6 >> 1;
    if (uVar6 == 0) {
      uVar6 = 1;
    }
    uVar7 = uVar7 >> 1;
    if (uVar7 == 0) {
      uVar7 = 1;
    }
    pCVar8 = pCVar8 + 8;
    local_30 = local_30 + 1;
  }
  return 0;
}


