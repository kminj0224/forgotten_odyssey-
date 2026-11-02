/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154a64  Symbol: initWithFile */

/* cocos2d::CCParticleSystem::initWithFile(char const*) */

undefined4 __thiscall cocos2d::CCParticleSystem::initWithFile(CCParticleSystem *this,char *param_1)

{
  undefined4 uVar1;
  CCObject *this_00;
  
  uVar1 = CCFileUtils::fullPathFromRelativePath(param_1);
  FUN_001ed9dc(this + 0x100,uVar1);
  this_00 = (CCObject *)
            CCFileUtils::dictionaryWithContentsOfFileThreadSafe(*(char **)(this + 0x100));
  uVar1 = initWithDictionary(this,(CCMutableDictionary *)this_00);
  CCObject::release(this_00);
  return uVar1;
}


