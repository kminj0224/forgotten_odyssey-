/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001508f4  Symbol: updateProgress */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00150902) */
/* WARNING: Removing unreachable block (ram,0x00150902) */
/* cocos2d::CCProgressTimer::updateProgress() */

void __thiscall cocos2d::CCProgressTimer::updateProgress(CCProgressTimer *this)

{
  switch(*(undefined4 *)(this + 0xfc)) {
  case 0:
  case 1:
    updateRadial(this);
    break;
  case 2:
  case 3:
  case 4:
  case 5:
    updateBar(this);
  }
  return;
}


