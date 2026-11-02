/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b7d4  Symbol: initWithTexture */

/* cocos2d::CCSpriteBatchNode::initWithTexture(cocos2d::CCTexture2D*, unsigned int) */

undefined8 __thiscall
cocos2d::CCSpriteBatchNode::initWithTexture
          (CCSpriteBatchNode *this,CCTexture2D *param_1,uint param_2)

{
  CCTextureAtlas *this_00;
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x108) = DAT_0015b824;
  *(undefined4 *)(this + 0x104) = 1;
  this_00 = (CCTextureAtlas *)operator_new(0x34);
  CCTextureAtlas::CCTextureAtlas(this_00);
  *(CCTextureAtlas **)(this + 0x100) = this_00;
  CCTextureAtlas::initWithTexture(this_00,param_1,param_2);
  updateBlendFunc(this);
  uVar1 = CCArray::array();
  *(undefined4 *)(this + 0x40) = uVar1;
  uVar1 = CCArray::array();
  *(undefined4 *)(this + 0x10c) = uVar1;
  CCObject::retain(*(CCObject **)(this + 0x40));
  CCObject::retain(*(CCObject **)(this + 0x10c));
  return CONCAT44(param_1,1);
}


