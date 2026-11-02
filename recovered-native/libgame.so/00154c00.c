/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00154c00  Symbol: ~CCParticleSystemPoint */

/* cocos2d::CCParticleSystemPoint::~CCParticleSystemPoint() */

CCParticleSystemPoint * __thiscall
cocos2d::CCParticleSystemPoint::~CCParticleSystemPoint(CCParticleSystemPoint *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00154c44 + 0x154c0c);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  if (*(void **)(this + 0x1fc) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x1fc));
    *(undefined4 *)(this + 0x1fc) = 0;
  }
  glDeleteBuffers(1,this + 0x200);
  CCParticleSystem::~CCParticleSystem((CCParticleSystem *)this);
  return this;
}


