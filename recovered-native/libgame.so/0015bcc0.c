/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015bcc0  Symbol: frameWithTexture */

/* cocos2d::CCSpriteFrame::frameWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool,
   cocos2d::CCPoint const&, cocos2d::CCSize const&) */

CCSpriteFrame *
cocos2d::CCSpriteFrame::frameWithTexture
          (CCTexture2D *param_1,CCRect *param_2,bool param_3,CCPoint *param_4,CCSize *param_5)

{
  CCSpriteFrame *this;
  
  this = (CCSpriteFrame *)operator_new(0x4c);
  memset(this,0,0x4c);
  CCSpriteFrame(this);
  initWithTexture(this,param_1,param_2,param_3,param_4,param_5);
  CCObject::autorelease((CCObject *)this);
  return this;
}


