/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d6d4  Symbol: ccpSegmentIntersect */

/* cocos2d::ccpSegmentIntersect(cocos2d::CCPoint const&, cocos2d::CCPoint const&, cocos2d::CCPoint
   const&, cocos2d::CCPoint const&) */

uint cocos2d::ccpSegmentIntersect
               (CCPoint *param_1,CCPoint *param_2,CCPoint *param_3,CCPoint *param_4)

{
  CCPoint *pCVar1;
  uint uVar2;
  int iVar3;
  CCPoint *local_10;
  CCPoint *local_c;
  
  local_10 = param_3;
  local_c = param_4;
  uVar2 = ccpLineIntersect(param_1,param_2,param_3,param_4,(float *)&local_10,(float *)&local_c);
  pCVar1 = local_10;
  if (uVar2 != 0) {
    iVar3 = __aeabi_fcmpge(local_10,0);
    if (((iVar3 != 0) && (iVar3 = __aeabi_fcmple(pCVar1,0x3f800000), pCVar1 = local_c, iVar3 != 0))
       && (iVar3 = __aeabi_fcmpge(local_c,0), iVar3 != 0)) {
      iVar3 = __aeabi_fcmple(pCVar1,0x3f800000);
      return (uint)(iVar3 != 0);
    }
    uVar2 = 0;
  }
  return uVar2;
}


