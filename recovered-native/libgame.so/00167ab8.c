/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167ab8  Symbol: __copy_move_backward_a<false,cocos2d::CCTouchHandler**,cocos2d::CCTouchHandler**> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* cocos2d::CCTouchHandler** std::__copy_move_backward_a<false, cocos2d::CCTouchHandler**,
   cocos2d::CCTouchHandler**>(cocos2d::CCTouchHandler**, cocos2d::CCTouchHandler**,
   cocos2d::CCTouchHandler**) */

CCTouchHandler **
std::__copy_move_backward_a<false,cocos2d::CCTouchHandler**,cocos2d::CCTouchHandler**>
          (CCTouchHandler **param_1,CCTouchHandler **param_2,CCTouchHandler **param_3)

{
  int iVar1;
  
  iVar1 = (int)param_2 - (int)param_1 >> 2;
  if (iVar1 != 0) {
    memmove(param_3 + -iVar1,param_1,iVar1 * 4);
  }
  return param_3 + -iVar1;
}


