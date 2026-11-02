/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cbcc  Symbol: addSpriteFramesWithFile */

/* cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(char const*) */

void __thiscall
cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(CCSpriteFrameCache *this,char *param_1)

{
  char *pcVar1;
  basic_string *this_00;
  CCMutableDictionary *pCVar2;
  undefined4 uVar3;
  CCTextureCache *this_01;
  CCTexture2D *pCVar4;
  undefined auStack_30 [4];
  undefined auStack_2c [4];
  undefined auStack_28 [4];
  char *local_24;
  undefined auStack_20 [4];
  undefined auStack_1c [8];
  
  pcVar1 = (char *)CCFileUtils::fullPathFromRelativePath(param_1);
  this_00 = (basic_string *)CCFileUtils::dictionaryWithContentsOfFileThreadSafe(pcVar1);
  FUN_001eed40(&local_24,DAT_0015ccb0 + 0x15cbe8,auStack_30);
  FUN_001eed40(auStack_20,DAT_0015ccb4 + 0x15cbf6,auStack_2c);
  pCVar2 = (CCMutableDictionary *)
           CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>
           ::objectForKey(this_00);
  FUN_001ed6b8(auStack_20);
  if (pCVar2 != (CCMutableDictionary *)0x0) {
    uVar3 = valueForKey(this,(char *)(DAT_0015ccb8 + 0x15cc16),pCVar2);
    FUN_001eed40(auStack_1c,uVar3,auStack_28);
    FUN_001ee874(&local_24,auStack_1c);
    FUN_001ed6b8(auStack_1c);
  }
  if (*(int *)(local_24 + -0xc) == 0) {
    FUN_001ed9dc(&local_24,pcVar1);
    uVar3 = FUN_001ed090(&local_24,DAT_0015ccbc + 0x15cc5e,0xffffffff);
    uVar3 = FUN_001edcf8(&local_24,uVar3,0xffffffff);
    FUN_001ee874(&local_24,uVar3);
    uVar3 = FUN_001ee590(&local_24,DAT_0015ccc0 + 0x15cc7e);
    FUN_001ee874(&local_24,uVar3);
  }
  else {
    uVar3 = CCFileUtils::fullPathFromRelativeFile(local_24,pcVar1);
    FUN_001ed9dc(&local_24,uVar3);
  }
  this_01 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  pCVar4 = (CCTexture2D *)CCTextureCache::addImage(this_01,local_24);
  if (pCVar4 != (CCTexture2D *)0x0) {
    addSpriteFramesWithDictionary(this,(CCMutableDictionary *)this_00,pCVar4);
  }
  CCObject::release((CCObject *)this_00);
  FUN_001ed6b8(&local_24);
  return;
}


