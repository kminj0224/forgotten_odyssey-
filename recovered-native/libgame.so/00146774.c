/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146774  Symbol: CCNotificationObserver */

/* cocos2d::CCNotificationObserver::CCNotificationObserver(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*), char const*, cocos2d::CCObject*) */

CCNotificationObserver * __thiscall
cocos2d::CCNotificationObserver::CCNotificationObserver
          (CCNotificationObserver *this,CCObject *param_1,_func_void_CCObject_ptr *param_2,
          char *param_3,CCObject *param_4)

{
  int iVar1;
  size_t sVar2;
  void *__s;
  undefined4 in_stack_00000004;
  _func_void_CCObject_ptr *p_Stack_18;
  char *pcStack_14;
  
  p_Stack_18 = param_2;
  pcStack_14 = param_3;
  CCObject::CCObject((CCObject *)this);
  iVar1 = DAT_001467e4;
  *(CCObject **)(this + 0x14) = param_1;
  *(int *)this = *(int *)(iVar1 + 0x14678e) + 8;
  *(_func_void_CCObject_ptr **)(this + 0x18) = param_2;
  *(char **)(this + 0x1c) = param_3;
  *(undefined4 *)(this + 0x24) = in_stack_00000004;
  sVar2 = strlen((char *)param_4);
  __s = operator_new__(sVar2 + 1);
  *(void **)(this + 0x20) = __s;
  sVar2 = strlen((char *)param_4);
  memset(__s,0,sVar2 + 1);
  FUN_001eed40(&pcStack_14,param_4,&p_Stack_18);
  sVar2 = strlen((char *)param_4);
  FUN_001eccb4(&pcStack_14,*(undefined4 *)(this + 0x20),sVar2,0);
  FUN_001ed6b8(&pcStack_14);
  return this;
}


