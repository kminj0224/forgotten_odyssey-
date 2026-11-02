/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a508  Symbol: ~CCScene */

/* cocos2d::CCScene::~CCScene() */

CCScene * __thiscall cocos2d::CCScene::~CCScene(CCScene *this)

{
  ~CCScene(this);
  operator_delete(this);
  return this;
}


