/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015bbd4  Symbol: copyWithZone */

/* cocos2d::CCSpriteFrame::copyWithZone(cocos2d::CCZone*) */

undefined8 cocos2d::CCSpriteFrame::copyWithZone(CCZone *param_1)

{
  CCSpriteFrame *this;
  CCPoint *pCVar1;
  
  this = (CCSpriteFrame *)operator_new(0x4c);
  memset(this,0,0x4c);
  CCSpriteFrame(this);
  pCVar1 = (CCPoint *)(param_1 + 0x38);
  initWithTexture(this,*(CCTexture2D **)(param_1 + 0x48),(CCRect *)(param_1 + 0x14),
                  (bool)param_1[0x24],pCVar1,(CCSize *)(param_1 + 0x40));
  return CONCAT44(pCVar1,this);
}


