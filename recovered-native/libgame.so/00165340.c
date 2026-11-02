/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165340  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCTMXObjectGroup*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCTMXObjectGroup*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCTMXObjectGroup*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCTMXObjectGroup*> *this)

{
  void *pvVar1;
  CCObject **ppCVar2;
  
  ppCVar2 = *(CCObject ***)(this + 0x14);
  *(int *)this = *(int *)(DAT_00165374 + 0x16534c) + 8;
  for (; ppCVar2 != *(CCObject ***)(this + 0x18); ppCVar2 = ppCVar2 + 1) {
    CCObject::release(*ppCVar2);
  }
  pvVar1 = *(void **)(this + 0x14);
  *(void **)(this + 0x18) = pvVar1;
  if (pvVar1 != (void *)0x0) {
    operator_delete(pvVar1);
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


