/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015badc  Symbol: CCSpriteFrame */

/* cocos2d::CCSpriteFrame::CCSpriteFrame() */

CCSpriteFrame * __thiscall cocos2d::CCSpriteFrame::CCSpriteFrame(CCSpriteFrame *this)

{
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_0015bb14 + 0x15baee) + 8;
  CCRect::CCRect((CCRect *)(this + 0x14));
  CCRect::CCRect((CCRect *)(this + 0x28));
  CCPoint::CCPoint((CCPoint *)(this + 0x38));
  CCSize::CCSize((CCSize *)(this + 0x40));
  return this;
}


