/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001551a4  Symbol: particleWithFile */

/* cocos2d::CCParticleSystemQuad::particleWithFile(char const*) */

int * cocos2d::CCParticleSystemQuad::particleWithFile(char *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x208);
  CCParticleSystem::CCParticleSystem((CCParticleSystem *)this);
  iVar1 = *(int *)(DAT_00155200 + 0x1551c0);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x24c;
  this[0x7f] = 0;
  this[0x80] = 0;
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


