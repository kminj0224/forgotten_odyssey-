/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144314  Symbol: ~CCObject */

/* cocos2d::CCObject::~CCObject() */

CCObject * __thiscall cocos2d::CCObject::~CCObject(CCObject *this)

{
  CCPoolManager *this_00;
  int **ppiVar1;
  
  *(int *)this = *(int *)(DAT_0014434c + 0x14431e) + 8;
  if (this[0x10] != (CCObject)0x0) {
    this_00 = (CCPoolManager *)CCPoolManager::getInstance();
    CCPoolManager::removeObject(this_00,this);
  }
  if (*(int *)(this + 8) != 0) {
    ppiVar1 = (int **)CCScriptEngineManager::sharedManager();
    (**(code **)(**ppiVar1 + 0x18))(*ppiVar1,*(undefined4 *)(this + 8));
  }
  return this;
}


