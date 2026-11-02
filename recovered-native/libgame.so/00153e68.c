/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00153e68  Symbol: resetSystem */

/* cocos2d::CCParticleSystem::resetSystem() */

void __thiscall cocos2d::CCParticleSystem::resetSystem(CCParticleSystem *this)

{
  this[0x14c] = (CCParticleSystem)0x1;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  while (*(uint *)(this + 0x148) < *(uint *)(this + 0x150)) {
    *(undefined4 *)(*(int *)(this + 0x140) + *(uint *)(this + 0x148) * 100 + 0x40) = 0;
    *(int *)(this + 0x148) = *(int *)(this + 0x148) + 1;
  }
  return;
}


