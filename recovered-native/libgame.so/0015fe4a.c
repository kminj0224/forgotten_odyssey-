/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015fe4a  Symbol: ~CCIMEDispatcher */

/* cocos2d::CCIMEDispatcher::~CCIMEDispatcher() */

CCIMEDispatcher * __thiscall cocos2d::CCIMEDispatcher::~CCIMEDispatcher(CCIMEDispatcher *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = *(undefined4 **)this;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    while (puVar1 != puVar2) {
      puVar3 = (undefined4 *)*puVar1;
      operator_delete(puVar1);
      puVar1 = puVar3;
    }
    operator_delete(puVar1);
    *(undefined4 *)this = 0;
  }
  return this;
}


