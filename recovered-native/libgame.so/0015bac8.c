/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015bac8  Symbol: ~CCSpriteFrame */

/* cocos2d::CCSpriteFrame::~CCSpriteFrame() */

CCSpriteFrame * __thiscall cocos2d::CCSpriteFrame::~CCSpriteFrame(CCSpriteFrame *this)

{
  ~CCSpriteFrame(this);
  operator_delete(this);
  return this;
}


