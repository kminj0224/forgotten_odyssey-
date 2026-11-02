/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015533e  Symbol: setTextureWithRect */

/* cocos2d::CCParticleSystemQuad::setTextureWithRect(cocos2d::CCTexture2D*, cocos2d::CCRect const&)
    */

undefined8 __thiscall
cocos2d::CCParticleSystemQuad::setTextureWithRect
          (CCParticleSystemQuad *this,CCTexture2D *param_1,CCRect *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(this + 0x1e0) != 0) {
    iVar1 = (**(code **)(*(int *)param_1 + 0x20))(param_1);
    iVar2 = (**(code **)(**(int **)(this + 0x1e0) + 0x20))();
    if (iVar1 == iVar2) goto LAB_0015536e;
  }
  CCParticleSystem::setTexture((CCParticleSystem *)this,param_1);
LAB_0015536e:
  initTexCoordsWithRect(this,param_2);
  return CONCAT44(param_2,this);
}


