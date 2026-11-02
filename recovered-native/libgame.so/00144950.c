/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144950  Symbol: ~CCDisplayLinkDirector */

/* cocos2d::CCDisplayLinkDirector::~CCDisplayLinkDirector() */

CCDisplayLinkDirector * __thiscall
cocos2d::CCDisplayLinkDirector::~CCDisplayLinkDirector(CCDisplayLinkDirector *this)

{
  *(int *)this = *(int *)(DAT_00144968 + 0x14495a) + 8;
  CCDirector::~CCDirector((CCDirector *)this);
  return this;
}


