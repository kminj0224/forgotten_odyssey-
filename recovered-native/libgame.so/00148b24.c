/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148b24  Symbol: setString */

/* cocos2d::CCLabelTTF::setString(char const*) */

void __thiscall cocos2d::CCLabelTTF::setString(CCLabelTTF *this,char *param_1)

{
  int iVar1;
  CCTexture2D *this_00;
  CCSize *pCVar2;
  void *pvVar3;
  float fVar4;
  CCSize CStack_2c;
  CCRect local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  pvVar3 = *(void **)(this + 0x1e0);
  if (pvVar3 != (void *)0x0) {
    FUN_001ed6b8(pvVar3);
    operator_delete(pvVar3);
    *(undefined4 *)(this + 0x1e0) = 0;
  }
  pvVar3 = operator_new(4);
  pCVar2 = &CStack_2c;
  FUN_001eed40(pvVar3,param_1);
  *(void **)(this + 0x1e0) = pvVar3;
  iVar1 = CCSize::CCSizeEqualToSize
                    ((CCSize *)(this + 0x1cc),(CCSize *)(DAT_00148bfc + 0x148b66),pCVar2);
  if (iVar1 == 0) {
    this_00 = (CCTexture2D *)operator_new(0x38);
    fVar4 = (float)CCTexture2D::CCTexture2D(this_00);
    CCTexture2D::initWithString
              ((char *)this_00,(CCSize *)param_1,(CCTextAlignment)(CCSize *)(this + 0x1cc),
               *(char **)(this + 0x1d4),fVar4);
  }
  else {
    this_00 = (CCTexture2D *)operator_new(0x38);
    fVar4 = (float)CCTexture2D::CCTexture2D(this_00);
    CCTexture2D::initWithString(this_00,param_1,**(char ***)(this + 0x1d8),fVar4);
  }
  (**(code **)(*(int *)this + 0x114))(this,this_00);
  CCObject::release((CCObject *)this_00);
  local_28 = *(CCRect *)(DAT_00148c00 + 0x148bdc);
  uStack_24 = *(undefined4 *)(DAT_00148c00 + 0x148be0);
  local_20 = *(undefined4 *)(DAT_00148c00 + 0x148be4);
  local_1c = *(undefined4 *)(DAT_00148c00 + 0x148be8);
  CCTexture2D::getContentSize();
  CCSprite::setTextureRect((CCSprite *)this,&local_28);
  return;
}


