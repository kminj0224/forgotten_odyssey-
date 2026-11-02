/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163430  Symbol: initWithContentsOfFile */

/* cocos2d::CCTexturePVR::initWithContentsOfFile(char const*) */

undefined4 __thiscall
cocos2d::CCTexturePVR::initWithContentsOfFile(CCTexturePVR *this,char *param_1)

{
  int iVar1;
  uchar **ppuVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined auStack_28 [4];
  uchar *local_24;
  ulong local_20;
  int local_1c [2];
  
  local_24 = (uchar *)0x0;
  local_20 = 0;
  FUN_001eed40(local_1c,param_1,auStack_28);
  for (uVar5 = 0; uVar5 < *(uint *)(local_1c[0] + -0xc); uVar5 = uVar5 + 1) {
    FUN_001edfbc(local_1c);
    puVar3 = (undefined *)(local_1c[0] + uVar5);
    FUN_001edfbc(local_1c);
    *puVar3 = (char)*(undefined2 *)
                     (**(int **)(DAT_00163528 + 0x16346a) + (*(byte *)(local_1c[0] + uVar5) + 1) * 2
                     );
  }
  ppuVar2 = (uchar **)0x0;
  iVar1 = FUN_001ece40(local_1c,DAT_0016352c + 0x163488);
  if (iVar1 == -1) {
    iVar1 = FUN_001ece40(local_1c,DAT_00163530 + 0x1634a2,0);
    if (iVar1 == -1) {
      local_24 = (uchar *)CCFileUtils::getFileData
                                    (param_1,(char *)(DAT_00163534 + 0x1634be),&local_20);
    }
    else {
      local_20 = ZipUtils::ccInflateGZipFile(param_1,&local_24);
    }
  }
  else {
    local_20 = ZipUtils::ccInflateCCZFile((ZipUtils *)param_1,(char *)&local_24,ppuVar2);
  }
  uVar4 = 0;
  if ((int)local_20 < 0) {
    CCObject::release((CCObject *)this);
  }
  else {
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x18) = 0;
    this[0x24] = (CCTexturePVR)0x0;
    this[0x25] = (CCTexturePVR)0x0;
    iVar1 = unpackPVRData((uchar *)this,(uint)local_24);
    if ((iVar1 == 0) || (iVar1 = createGLTexture(this), iVar1 == 0)) {
      if (local_24 != (uchar *)0x0) {
        operator_delete__(local_24);
      }
      CCObject::release((CCObject *)this);
      uVar4 = 0;
    }
    else {
      if (local_24 != (uchar *)0x0) {
        operator_delete__(local_24);
      }
      uVar4 = 1;
    }
  }
  FUN_001ed6b8(local_1c);
  return uVar4;
}


