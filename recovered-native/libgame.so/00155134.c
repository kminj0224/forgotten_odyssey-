/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155134  Symbol: ~CCParticleSystemQuad */

/* cocos2d::CCParticleSystemQuad::~CCParticleSystemQuad() */

CCParticleSystemQuad * __thiscall
cocos2d::CCParticleSystemQuad::~CCParticleSystemQuad(CCParticleSystemQuad *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0015518c + 0x155140);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x24c;
  if (*(void **)(this + 0x1fc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1fc));
    *(undefined4 *)(this + 0x1fc) = 0;
  }
  if (*(void **)(this + 0x200) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x200));
    *(undefined4 *)(this + 0x200) = 0;
  }
  glDeleteBuffers(1,this + 0x204);
  CCParticleSystem::~CCParticleSystem((CCParticleSystem *)this);
  return this;
}


