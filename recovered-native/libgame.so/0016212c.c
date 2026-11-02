/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016212c  Symbol: addImage */

/* cocos2d::CCTextureCache::addImage(char const*) */

CCTexture2D * __thiscall cocos2d::CCTextureCache::addImage(CCTextureCache *this,char *param_1)

{
  undefined4 uVar1;
  CCTexture2D *this_00;
  int iVar2;
  EImageFormat EVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  undefined auStack_4c [4];
  undefined auStack_48 [4];
  char *local_44;
  char *local_40;
  int local_3c;
  int local_38;
  void *local_34;
  ulong local_30;
  CCImage aCStack_2c [24];
  
  FUN_001eed40(&local_44,param_1,auStack_4c);
  CCFileUtils::ccRemoveHDSuffixFromFile((basic_string *)&local_44);
  uVar1 = CCFileUtils::fullPathFromRelativePath(local_44);
  FUN_001ed9dc(&local_44,uVar1);
  this_00 = (CCTexture2D *)
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
            ::objectForKey(*(basic_string **)(this + 0x14));
  FUN_001ee80c(&local_40,&local_44);
  if (this_00 != (CCTexture2D *)0x0) goto LAB_0016228c;
  FUN_001eed40(&local_3c,param_1,auStack_48);
  for (uVar5 = 0; uVar5 < *(uint *)(local_3c + -0xc); uVar5 = uVar5 + 1) {
    FUN_001edfbc(&local_3c);
    puVar4 = (undefined *)(local_3c + uVar5);
    FUN_001edfbc(&local_3c);
    *puVar4 = (char)*(undefined2 *)
                     (**(int **)(DAT_001622d8 + 0x16219c) + (*(byte *)(local_3c + uVar5) + 1) * 2);
  }
  iVar2 = FUN_001ece40(&local_3c,DAT_001622dc + 0x1621ba,0);
  if (iVar2 == -1) {
    iVar2 = FUN_001ece40(&local_3c,DAT_001622e0 + 0x1621d6,0);
    iVar6 = *(int *)(DAT_001622e4 + 0x1621de);
    if ((iVar2 == -1) && (iVar2 = FUN_001ece40(&local_3c,DAT_001622e8 + 0x1621ec,0), iVar2 == -1)) {
      CCImage::CCImage(aCStack_2c);
      local_38 = iVar6 + 8;
      local_34 = (void *)0x0;
      local_30 = 0;
      local_34 = (void *)CCFileUtils::getFileData
                                   (local_40,(char *)(DAT_001622f0 + 0x1622ae),&local_30);
      iVar2 = CCImage::initWithImageData(aCStack_2c,local_34,local_30,1,0,0,8);
      if (iVar2 != 0) {
        this_00 = (CCTexture2D *)operator_new(0x38);
        CCTexture2D::CCTexture2D(this_00);
        CCTexture2D::initWithImage(this_00,aCStack_2c);
        if (this_00 != (CCTexture2D *)0x0) {
          EVar3 = 1;
LAB_00162266:
          VolatileTexture::addImageTexture(this_00,local_40,EVar3);
          CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
          ::setObject(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
                        **)(this + 0x14),this_00,(basic_string *)&local_44);
          CCObject::autorelease((CCObject *)this_00);
        }
      }
    }
    else {
      CCImage::CCImage(aCStack_2c);
      local_38 = iVar6 + 8;
      local_34 = (void *)0x0;
      local_30 = 0;
      local_34 = (void *)CCFileUtils::getFileData
                                   (local_40,(char *)(DAT_001622ec + 0x162202),&local_30);
      iVar2 = CCImage::initWithImageData(aCStack_2c,local_34,local_30,0,0,0,8);
      if (iVar2 != 0) {
        this_00 = (CCTexture2D *)operator_new(0x38);
        CCTexture2D::CCTexture2D(this_00);
        CCTexture2D::initWithImage(this_00,aCStack_2c);
        if (this_00 != (CCTexture2D *)0x0) {
          EVar3 = 0;
          goto LAB_00162266;
        }
      }
    }
    CCFileData::~CCFileData((CCFileData *)&local_38);
    CCImage::~CCImage(aCStack_2c);
  }
  else {
    this_00 = (CCTexture2D *)addPVRImage(this,local_40);
  }
  FUN_001ed6b8(&local_3c);
LAB_0016228c:
  FUN_001ed6b8(&local_40);
  FUN_001ed6b8(&local_44);
  return this_00;
}


