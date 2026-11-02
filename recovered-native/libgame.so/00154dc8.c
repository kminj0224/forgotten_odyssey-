/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154dc8  Symbol: particleWithFile */

/* cocos2d::CCParticleSystemPoint::particleWithFile(char const*) */

int * cocos2d::CCParticleSystemPoint::particleWithFile(char *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x204);
  CCParticleSystem::CCParticleSystem((CCParticleSystem *)this);
  iVar1 = *(int *)(DAT_00154e1c + 0x154de4);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x24c;
  this[0x7f] = 0;
  iVar1 = CCParticleSystem::initWithFile((CCParticleSystem *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


