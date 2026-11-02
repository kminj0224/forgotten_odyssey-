/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154a98  Symbol: particleWithFile */

/* cocos2d::CCParticleSystem::particleWithFile(char const*) */

int * cocos2d::CCParticleSystem::particleWithFile(char *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x1fc);
  CCParticleSystem((CCParticleSystem *)this);
  if (this != (int *)0x0) {
    iVar1 = initWithFile((CCParticleSystem *)this,param_1);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
    }
  }
  return this;
}


