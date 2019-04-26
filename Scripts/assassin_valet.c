#pragma region Local Var //{
var uLocal_0 = 0;
var uLocal_1 = 0;
int iLocal_2 = 0;
int iLocal_3 = 0;
int iLocal_4 = 0;
int iLocal_5 = 0;
int iLocal_6 = 0;
int iLocal_7 = 0;
int iLocal_8 = 0;
int iLocal_9 = 0;
int iLocal_10 = 0;
int iLocal_11 = 0;
var uLocal_12 = 0;
var uLocal_13 = 0;
float fLocal_14 = 0f;
var uLocal_15 = 0;
var uLocal_16 = 0;
int iLocal_17 = 0;
var uLocal_18 = 0;
var uLocal_19 = 0;
char *sLocal_20 = NULL;
float fLocal_21 = 0f;
var uLocal_22 = 0;
var uLocal_23 = 0;
var uLocal_24 = 0;
float fLocal_25 = 0f;
float fLocal_26 = 0f;
var uLocal_27 = 0;
int iLocal_28 = 0;
var uLocal_29 = 0;
var uLocal_30 = 0;
float fLocal_31 = 0f;
float fLocal_32 = 0f;
float fLocal_33 = 0f;
var uLocal_34 = 0;
var uLocal_35 = 0;
var uLocal_36 = 0;
var uLocal_37 = 0;
var uLocal_38 = 0;
int iLocal_39 = 0;
int iLocal_40 = 0;
int iLocal_41 = 0;
int iLocal_42 = 0;
var uLocal_43 = 0;
var uLocal_44 = 0;
vector3 vLocal_45 = {0f, 0f, 0f};
var uLocal_48 = 0;
var uLocal_49 = 0;
var uLocal_50 = 0;
var uLocal_51 = 0;
var uLocal_52 = 0;
var uLocal_53 = 0;
var uLocal_54 = 0;
var uLocal_55 = 0;
var uLocal_56 = 0;
struct<39> Local_57 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_96 = 0;
var uLocal_97 = 16;
var uLocal_98 = 0;
var uLocal_99 = 0;
var uLocal_100 = 0;
var uLocal_101 = 0;
var uLocal_102 = 0;
var uLocal_103 = 0;
var uLocal_104 = 0;
var uLocal_105 = 0;
var uLocal_106 = 0;
var uLocal_107 = 0;
var uLocal_108 = 0;
var uLocal_109 = 0;
var uLocal_110 = 0;
var uLocal_111 = 0;
var uLocal_112 = 0;
var uLocal_113 = 0;
var uLocal_114 = 0;
var uLocal_115 = 0;
var uLocal_116 = 0;
var uLocal_117 = 0;
var uLocal_118 = 0;
var uLocal_119 = 0;
var uLocal_120 = 0;
var uLocal_121 = 0;
var uLocal_122 = 0;
var uLocal_123 = 0;
var uLocal_124 = 0;
var uLocal_125 = 0;
var uLocal_126 = 0;
var uLocal_127 = 0;
var uLocal_128 = 0;
var uLocal_129 = 0;
var uLocal_130 = 0;
var uLocal_131 = 0;
var uLocal_132 = 0;
var uLocal_133 = 0;
var uLocal_134 = 0;
var uLocal_135 = 0;
var uLocal_136 = 0;
var uLocal_137 = 0;
var uLocal_138 = 0;
var uLocal_139 = 0;
var uLocal_140 = 0;
var uLocal_141 = 0;
var uLocal_142 = 0;
var uLocal_143 = 0;
var uLocal_144 = 0;
var uLocal_145 = 0;
var uLocal_146 = 0;
var uLocal_147 = 0;
var uLocal_148 = 0;
var uLocal_149 = 0;
var uLocal_150 = 0;
var uLocal_151 = 0;
var uLocal_152 = 0;
var uLocal_153 = 0;
var uLocal_154 = 0;
var uLocal_155 = 0;
var uLocal_156 = 0;
var uLocal_157 = 0;
var uLocal_158 = 0;
var uLocal_159 = 0;
var uLocal_160 = 0;
var uLocal_161 = 0;
var uLocal_162 = 0;
var uLocal_163 = 0;
var uLocal_164 = 0;
var uLocal_165 = 0;
var uLocal_166 = 0;
var uLocal_167 = 0;
var uLocal_168 = 0;
var uLocal_169 = 0;
var uLocal_170 = 0;
var uLocal_171 = 0;
var uLocal_172 = 0;
var uLocal_173 = 0;
var uLocal_174 = 0;
var uLocal_175 = 0;
var uLocal_176 = 0;
var uLocal_177 = 0;
var uLocal_178 = 0;
var uLocal_179 = 0;
var uLocal_180 = 0;
var uLocal_181 = 0;
var uLocal_182 = 0;
var uLocal_183 = 0;
var uLocal_184 = 0;
var uLocal_185 = 0;
var uLocal_186 = 0;
var uLocal_187 = 0;
var uLocal_188 = 0;
var uLocal_189 = 0;
var uLocal_190 = 0;
var uLocal_191 = 0;
var uLocal_192 = 0;
var uLocal_193 = 0;
var uLocal_194 = 0;
var uLocal_195 = 0;
var uLocal_196 = 0;
var uLocal_197 = 0;
var uLocal_198 = 0;
var uLocal_199 = 0;
var uLocal_200 = 0;
var uLocal_201 = 0;
var uLocal_202 = 0;
var uLocal_203 = 0;
var uLocal_204 = 0;
var uLocal_205 = 0;
var uLocal_206 = 0;
var uLocal_207 = 0;
var uLocal_208 = 0;
var uLocal_209 = 0;
var uLocal_210 = 0;
var uLocal_211 = 0;
var uLocal_212 = 0;
var uLocal_213 = 0;
var uLocal_214 = 0;
var uLocal_215 = 0;
var uLocal_216 = 0;
var uLocal_217 = 0;
var uLocal_218 = 0;
var uLocal_219 = 0;
var uLocal_220 = 0;
var uLocal_221 = 0;
var uLocal_222 = 0;
var uLocal_223 = 0;
var uLocal_224 = 0;
var uLocal_225 = 0;
var uLocal_226 = 0;
var uLocal_227 = 0;
var uLocal_228 = 0;
var uLocal_229 = 0;
var uLocal_230 = 0;
var uLocal_231 = 0;
var uLocal_232 = 0;
var uLocal_233 = 0;
var uLocal_234 = 0;
var uLocal_235 = 0;
var uLocal_236 = 0;
var uLocal_237 = 0;
var uLocal_238 = 0;
var uLocal_239 = 0;
var uLocal_240 = 0;
var uLocal_241 = 0;
var uLocal_242 = 0;
var uLocal_243 = 0;
var uLocal_244 = 0;
var uLocal_245 = 0;
var uLocal_246 = 0;
var uLocal_247 = 0;
var uLocal_248 = 0;
var uLocal_249 = 0;
var uLocal_250 = 0;
var uLocal_251 = 0;
var uLocal_252 = 0;
var uLocal_253 = 0;
var uLocal_254 = 0;
var uLocal_255 = 0;
var uLocal_256 = 0;
var uLocal_257 = 0;
var uLocal_258 = 0;
var uLocal_259 = 0;
var uLocal_260 = 0;
var uLocal_261 = 0;
var uLocal_262 = 0;
var uLocal_263 = 0;
var uLocal_264 = 0;
var uLocal_265 = 0;
var uLocal_266 = 0;
var uLocal_267 = 0;
int iLocal_268 = 0;
int iLocal_269 = 0;
float fLocal_270 = 0f;
var uLocal_271 = 0;
var uLocal_272 = 0;
var uLocal_273 = 0;
var uLocal_274 = 0;
var uLocal_275 = 0;
var uLocal_276 = 0;
var uLocal_277 = 0;
var uLocal_278 = 0;
var uLocal_279 = 0;
var uLocal_280 = 0;
var uLocal_281 = 21;
var uLocal_282 = 6;
var uLocal_283 = 0;
var uLocal_284 = 0;
var uLocal_285 = 0;
var uLocal_286 = 0;
var uLocal_287 = 0;
var uLocal_288 = 1132396544;
var uLocal_289 = 1132396544;
var uLocal_290 = 1132396544;
var uLocal_291 = 0;
var uLocal_292 = -1082130432;
var uLocal_293 = 0;
var uLocal_294 = 0;
var uLocal_295 = 8;
var uLocal_296 = 0;
var uLocal_297 = 0;
var uLocal_298 = 0;
var uLocal_299 = 0;
var uLocal_300 = 0;
var uLocal_301 = 0;
var uLocal_302 = 0;
var uLocal_303 = 0;
var uLocal_304 = 0;
var uLocal_305 = 0;
var uLocal_306 = 0;
var uLocal_307 = 0;
var uLocal_308 = 0;
var uLocal_309 = 0;
var uLocal_310 = 0;
var uLocal_311 = 0;
var uLocal_312 = 0;
var uLocal_313 = 0;
var uLocal_314 = 0;
var uLocal_315 = 0;
var uLocal_316 = 0;
var uLocal_317 = 0;
var uLocal_318 = 0;
var uLocal_319 = 0;
var uLocal_320 = 0;
var uLocal_321 = 0;
var uLocal_322 = 0;
var uLocal_323 = 0;
var uLocal_324 = 0;
var uLocal_325 = 0;
var uLocal_326 = 0;
var uLocal_327 = 0;
var uLocal_328 = 0;
var uLocal_329 = 0;
var uLocal_330 = 0;
var uLocal_331 = 0;
var uLocal_332 = 0;
var uLocal_333 = 0;
var uLocal_334 = 0;
var uLocal_335 = 0;
var uLocal_336 = 0;
var uLocal_337 = 0;
var uLocal_338 = 0;
var uLocal_339 = 0;
var uLocal_340 = 0;
var uLocal_341 = 0;
var uLocal_342 = 0;
var uLocal_343 = 0;
var uLocal_344 = 0;
var uLocal_345 = 0;
var uLocal_346 = 0;
var uLocal_347 = 0;
var uLocal_348 = 0;
var uLocal_349 = 0;
var uLocal_350 = 0;
var uLocal_351 = 0;
var uLocal_352 = -1;
var uLocal_353 = 1092616192;
var uLocal_354 = 0;
var uLocal_355 = 0;
bool bLocal_356 = 0;
int iLocal_357 = 0;
int iLocal_358 = 0;
int iLocal_359 = 0;
struct<7> Local_360 = {
	0, 0, 1097859072, 1500, 45, 1103626240, 5
};
var *uLocal_367 = NULL;
var uLocal_368 = 0;
var uLocal_369 = 0;
var uLocal_370 = 0;
int *iLocal_371 = NULL;
float fLocal_372 = 0f;
float fLocal_373 = 0f;
float fLocal_374 = 0f;
bool bLocal_375 = 0;
bool bLocal_376 = 0;
int iLocal_377 = 0;
var uLocal_378 = 0;
var uLocal_379 = 0;
var uLocal_380 = 0;
var uLocal_381 = 0;
int iLocal_382 = 0;
int iLocal_383 = 0;
int iLocal_384 = 0;
var uLocal_385 = 0;
var uLocal_386 = 0;
var uLocal_387 = 0;
var *uLocal_388 = NULL;
var uLocal_389 = 0;
var uLocal_390 = 0;
var uLocal_391 = 0;
var uLocal_392 = 0;
var uLocal_393 = 0;
var uLocal_394 = 0;
var uLocal_395 = 0;
var uLocal_396 = 0;
var uLocal_397 = 0;
var uLocal_398 = 0;
var uLocal_399 = 0;
var uLocal_400 = 0;
var uLocal_401 = 0;
var uLocal_402 = 0;
var uLocal_403 = 0;
var uLocal_404 = 0;
var uLocal_405 = 0;
var uLocal_406 = 0;
var uLocal_407 = 0;
var uLocal_408 = 0;
var uLocal_409 = 0;
var uLocal_410 = 0;
var uLocal_411 = 0;
var uLocal_412 = 0;
var uLocal_413 = 0;
var uLocal_414 = 0;
var uLocal_415 = 0;
var uLocal_416 = 0;
var uLocal_417 = 0;
var uLocal_418 = 0;
var uLocal_419 = 0;
var uLocal_420 = 3;
var uLocal_421 = 0;
var uLocal_422 = 0;
var uLocal_423 = 0;
var uLocal_424 = 1;
var uLocal_425 = 0;
var uLocal_426 = 0;
var uLocal_427 = 0;
var uLocal_428 = 0;
var uLocal_429 = 0;
var uLocal_430 = 0;
var uLocal_431 = 0;
var uLocal_432 = 0;
var uLocal_433 = 0;
var uLocal_434 = 0;
var uLocal_435 = 0;
var uLocal_436 = 0;
var uLocal_437 = 0;
var uLocal_438 = 0;
var uLocal_439 = 0;
var uLocal_440 = 0;
var uLocal_441 = 2;
var uLocal_442 = 0;
var uLocal_443 = 0;
var uLocal_444 = 0;
var uLocal_445 = 13;
var uLocal_446 = 0;
var uLocal_447 = 0;
var uLocal_448 = 0;
var uLocal_449 = 0;
var uLocal_450 = 0;
var uLocal_451 = 0;
var uLocal_452 = 0;
var uLocal_453 = 0;
var uLocal_454 = 0;
var uLocal_455 = 0;
var uLocal_456 = 0;
var uLocal_457 = 0;
var uLocal_458 = 0;
var uLocal_459 = 13;
var uLocal_460 = 0;
var uLocal_461 = 0;
var uLocal_462 = 0;
var uLocal_463 = 0;
var uLocal_464 = 0;
var uLocal_465 = 0;
var uLocal_466 = 0;
var uLocal_467 = 0;
var uLocal_468 = 0;
var uLocal_469 = 0;
var uLocal_470 = 0;
var uLocal_471 = 0;
var uLocal_472 = 0;
var uLocal_473 = 0;
var uLocal_474 = 0;
var uLocal_475 = 0;
var uLocal_476 = 0;
var uLocal_477 = 0;
var uLocal_478 = 0;
var uLocal_479 = 0;
var uLocal_480 = 0;
var uLocal_481 = 0;
var uLocal_482 = 0;
var uLocal_483 = 0;
var uLocal_484 = 0;
var uLocal_485 = 0;
var uLocal_486 = 0;
var uLocal_487 = 0;
var uLocal_488 = 0;
var uLocal_489 = 0;
var uLocal_490 = 0;
var uLocal_491 = 0;
var uLocal_492 = 0;
var uLocal_493 = 0;
var uLocal_494 = 0;
var uLocal_495 = 0;
var uLocal_496 = 0;
var uLocal_497 = 0;
var uLocal_498 = 0;
var uLocal_499 = 0;
var uLocal_500 = 0;
var uLocal_501 = 0;
var uLocal_502 = 0;
var uLocal_503 = 0;
var uLocal_504 = 0;
var uLocal_505 = 0;
var uLocal_506 = 0;
var uLocal_507 = 0;
var uLocal_508 = 0;
var uLocal_509 = 0;
var uLocal_510 = 0;
var uLocal_511 = 0;
var uLocal_512 = 0;
var uLocal_513 = 0;
var uLocal_514 = 0;
var uLocal_515 = 0;
var uLocal_516 = 0;
var uLocal_517 = 0;
var uLocal_518 = 0;
var uLocal_519 = 0;
var uLocal_520 = 0;
var uLocal_521 = 0;
var uLocal_522 = 0;
var uLocal_523 = 0;
var uLocal_524 = 0;
var uLocal_525 = 0;
var uLocal_526 = 0;
var uLocal_527 = 0;
var uLocal_528 = 0;
var uLocal_529 = 0;
var uLocal_530 = 0;
var uLocal_531 = 0;
var uLocal_532 = 0;
var uLocal_533 = 0;
var uLocal_534 = 0;
var uLocal_535 = 0;
var uLocal_536 = 0;
var uLocal_537 = 0;
var uLocal_538 = 0;
var uLocal_539 = 0;
var uLocal_540 = 0;
var uLocal_541 = 0;
var uLocal_542 = 0;
var uLocal_543 = 0;
var uLocal_544 = 0;
var uLocal_545 = 0;
var uLocal_546 = 0;
var uLocal_547 = 0;
var uLocal_548 = 0;
var uLocal_549 = 0;
var uLocal_550 = 0;
var uLocal_551 = 0;
var uLocal_552 = 0;
var uLocal_553 = 0;
var uLocal_554 = 0;
var uLocal_555 = 0;
var uLocal_556 = 0;
var uLocal_557 = 0;
var uLocal_558 = 0;
var uLocal_559 = 0;
var uLocal_560 = 0;
var uLocal_561 = 0;
var uLocal_562 = 0;
var uLocal_563 = 0;
var uLocal_564 = 0;
var uLocal_565 = 0;
var uLocal_566 = 0;
var uLocal_567 = 0;
var uLocal_568 = 0;
var uLocal_569 = 0;
var uLocal_570 = 0;
var uLocal_571 = 0;
var uLocal_572 = 0;
var uLocal_573 = 0;
var uLocal_574 = 0;
var uLocal_575 = 0;
var uLocal_576 = 0;
var uLocal_577 = 0;
var uLocal_578 = 0;
var uLocal_579 = 0;
var uLocal_580 = 0;
var uLocal_581 = 0;
var uLocal_582 = 0;
var uLocal_583 = 0;
var uLocal_584 = 0;
var uLocal_585 = 0;
var uLocal_586 = 0;
var uLocal_587 = 0;
var uLocal_588 = 0;
var uLocal_589 = 0;
var uLocal_590 = 0;
var uLocal_591 = 0;
var uLocal_592 = 0;
var uLocal_593 = 0;
var uLocal_594 = 0;
var uLocal_595 = 0;
var uLocal_596 = 0;
var uLocal_597 = 0;
var uLocal_598 = 0;
var uLocal_599 = 0;
var uLocal_600 = 0;
var uLocal_601 = 0;
var uLocal_602 = 0;
var uLocal_603 = 0;
var uLocal_604 = 0;
var uLocal_605 = 0;
var uLocal_606 = 0;
var uLocal_607 = 0;
var uLocal_608 = 0;
var uLocal_609 = 0;
var uLocal_610 = 0;
var uLocal_611 = 0;
var uLocal_612 = 0;
var uLocal_613 = 0;
var uLocal_614 = 0;
var uLocal_615 = 0;
var uLocal_616 = 0;
var uLocal_617 = 0;
var uLocal_618 = 0;
var uLocal_619 = 0;
var uLocal_620 = 0;
var uLocal_621 = 0;
var uLocal_622 = 0;
var uLocal_623 = 0;
var uLocal_624 = 0;
var uLocal_625 = 0;
var uLocal_626 = 0;
var uLocal_627 = 0;
var uLocal_628 = 0;
var uLocal_629 = 0;
var uLocal_630 = 0;
var uLocal_631 = 0;
var uLocal_632 = 0;
var uLocal_633 = 0;
var uLocal_634 = 0;
var uLocal_635 = 0;
var uLocal_636 = 0;
var uLocal_637 = 0;
var uLocal_638 = 0;
var uLocal_639 = 0;
var uLocal_640 = 0;
var uLocal_641 = 0;
var uLocal_642 = 0;
var uLocal_643 = 0;
var uLocal_644 = 0;
var uLocal_645 = 0;
var uLocal_646 = 0;
var uLocal_647 = 0;
var uLocal_648 = 0;
var uLocal_649 = 0;
var uLocal_650 = 0;
var uLocal_651 = 0;
var uLocal_652 = 0;
var uLocal_653 = 0;
var uLocal_654 = 0;
var uLocal_655 = 0;
var uLocal_656 = 0;
var uLocal_657 = 0;
var uLocal_658 = 0;
var uLocal_659 = 0;
var uLocal_660 = 0;
var uLocal_661 = 0;
var uLocal_662 = 0;
var uLocal_663 = 0;
var uLocal_664 = 0;
var uLocal_665 = 0;
var uLocal_666 = 0;
var uLocal_667 = 0;
var uLocal_668 = 13;
var uLocal_669 = 0;
var uLocal_670 = 0;
var uLocal_671 = 0;
var uLocal_672 = 0;
var uLocal_673 = 0;
var uLocal_674 = 0;
var uLocal_675 = 0;
var uLocal_676 = 0;
var uLocal_677 = 0;
var uLocal_678 = 0;
var uLocal_679 = 0;
var uLocal_680 = 0;
var uLocal_681 = 0;
var uLocal_682 = 0;
var uLocal_683 = 0;
var uLocal_684 = 0;
var uLocal_685 = 0;
var uLocal_686 = 0;
var uLocal_687 = 0;
var uLocal_688 = 0;
var uLocal_689 = 0;
var uLocal_690 = 0;
var uLocal_691 = 0;
var uLocal_692 = 0;
var uLocal_693 = 0;
var uLocal_694 = 0;
var uLocal_695 = 0;
var uLocal_696 = 0;
var uLocal_697 = 0;
var uLocal_698 = 0;
var uLocal_699 = 0;
var uLocal_700 = 0;
var uLocal_701 = 0;
var uLocal_702 = 0;
var uLocal_703 = 0;
var uLocal_704 = 0;
var uLocal_705 = 0;
var uLocal_706 = 0;
var uLocal_707 = 0;
var uLocal_708 = 0;
var uLocal_709 = 0;
var uLocal_710 = 0;
var uLocal_711 = 0;
var uLocal_712 = 0;
var uLocal_713 = 0;
var uLocal_714 = 0;
var uLocal_715 = 0;
var uLocal_716 = 0;
var uLocal_717 = 0;
var uLocal_718 = 0;
var uLocal_719 = 0;
var uLocal_720 = 0;
var uLocal_721 = 0;
var uLocal_722 = 0;
var uLocal_723 = 0;
var uLocal_724 = 0;
var uLocal_725 = 0;
var uLocal_726 = 0;
var uLocal_727 = 0;
var uLocal_728 = 0;
var uLocal_729 = 0;
var uLocal_730 = 0;
var uLocal_731 = 0;
var uLocal_732 = 0;
var uLocal_733 = 0;
var uLocal_734 = 0;
var uLocal_735 = 0;
var uLocal_736 = 0;
var uLocal_737 = 0;
var uLocal_738 = 0;
var uLocal_739 = 0;
var uLocal_740 = 0;
var uLocal_741 = 0;
var uLocal_742 = 0;
var uLocal_743 = 0;
var uLocal_744 = 0;
var uLocal_745 = 0;
var uLocal_746 = 0;
var uLocal_747 = 0;
var uLocal_748 = 0;
var uLocal_749 = 0;
var uLocal_750 = 0;
var uLocal_751 = 0;
var uLocal_752 = 0;
var uLocal_753 = 0;
var uLocal_754 = 0;
var uLocal_755 = 0;
var uLocal_756 = 0;
var uLocal_757 = 0;
var uLocal_758 = 0;
var uLocal_759 = 0;
var uLocal_760 = 0;
var uLocal_761 = 0;
var uLocal_762 = 0;
var uLocal_763 = 0;
var uLocal_764 = 0;
var uLocal_765 = 0;
var uLocal_766 = 0;
var uLocal_767 = 0;
var uLocal_768 = 0;
var uLocal_769 = 0;
var uLocal_770 = 0;
var uLocal_771 = 0;
var uLocal_772 = 0;
var uLocal_773 = 0;
var uLocal_774 = 0;
var uLocal_775 = 0;
var uLocal_776 = 0;
var uLocal_777 = 0;
var uLocal_778 = 0;
var uLocal_779 = 0;
var uLocal_780 = 0;
var uLocal_781 = 0;
var uLocal_782 = 0;
var uLocal_783 = 0;
var uLocal_784 = 0;
var uLocal_785 = 0;
var uLocal_786 = 0;
var uLocal_787 = 0;
var uLocal_788 = 0;
var uLocal_789 = 0;
var uLocal_790 = 0;
var uLocal_791 = 0;
var uLocal_792 = 0;
var uLocal_793 = 0;
var uLocal_794 = 0;
var uLocal_795 = 0;
var uLocal_796 = 0;
var uLocal_797 = 0;
var uLocal_798 = 0;
var uLocal_799 = 0;
var uLocal_800 = 0;
var uLocal_801 = 0;
var uLocal_802 = 0;
var uLocal_803 = 0;
var uLocal_804 = 0;
var uLocal_805 = 0;
var uLocal_806 = 0;
var uLocal_807 = 0;
var uLocal_808 = 0;
var uLocal_809 = 0;
var uLocal_810 = 0;
var uLocal_811 = 0;
var uLocal_812 = 0;
var uLocal_813 = 0;
var uLocal_814 = 0;
var uLocal_815 = 0;
var uLocal_816 = 0;
var uLocal_817 = 0;
var uLocal_818 = 0;
var uLocal_819 = 0;
var uLocal_820 = 0;
var uLocal_821 = 0;
var uLocal_822 = 0;
var uLocal_823 = 0;
var uLocal_824 = 0;
var uLocal_825 = 0;
var uLocal_826 = 0;
var uLocal_827 = 0;
var uLocal_828 = 0;
var uLocal_829 = 0;
var uLocal_830 = 0;
var uLocal_831 = 0;
var uLocal_832 = 0;
var uLocal_833 = 0;
var uLocal_834 = 0;
var uLocal_835 = 0;
var uLocal_836 = 0;
var uLocal_837 = 0;
var uLocal_838 = 0;
var uLocal_839 = 0;
var uLocal_840 = 0;
var uLocal_841 = 0;
var uLocal_842 = 0;
var uLocal_843 = 0;
var uLocal_844 = 0;
var uLocal_845 = 0;
var uLocal_846 = 0;
var uLocal_847 = 0;
var uLocal_848 = 0;
var uLocal_849 = 0;
var uLocal_850 = 0;
var uLocal_851 = 0;
var uLocal_852 = 0;
var uLocal_853 = 0;
var uLocal_854 = 0;
var uLocal_855 = 0;
var uLocal_856 = 0;
var uLocal_857 = 0;
var uLocal_858 = 0;
var uLocal_859 = 0;
var uLocal_860 = 0;
var uLocal_861 = 0;
var uLocal_862 = 0;
var uLocal_863 = 0;
var uLocal_864 = 0;
var uLocal_865 = 0;
var uLocal_866 = 0;
var uLocal_867 = 0;
var uLocal_868 = 0;
var uLocal_869 = 0;
var uLocal_870 = 0;
var uLocal_871 = 0;
var uLocal_872 = 0;
var uLocal_873 = 0;
var uLocal_874 = 0;
var uLocal_875 = 0;
var uLocal_876 = 0;
var uLocal_877 = 13;
var uLocal_878 = 0;
var uLocal_879 = 0;
var uLocal_880 = 0;
var uLocal_881 = 0;
var uLocal_882 = 0;
var uLocal_883 = 0;
var uLocal_884 = 0;
var uLocal_885 = 0;
var uLocal_886 = 0;
var uLocal_887 = 0;
var uLocal_888 = 0;
var uLocal_889 = 0;
var uLocal_890 = 0;
var uLocal_891 = 13;
var uLocal_892 = 0;
var uLocal_893 = 0;
var uLocal_894 = 0;
var uLocal_895 = 0;
var uLocal_896 = 0;
var uLocal_897 = 0;
var uLocal_898 = 0;
var uLocal_899 = 0;
var uLocal_900 = 0;
var uLocal_901 = 0;
var uLocal_902 = 0;
var uLocal_903 = 0;
var uLocal_904 = 0;
var uLocal_905 = 13;
var uLocal_906 = 0;
var uLocal_907 = 0;
var uLocal_908 = 0;
var uLocal_909 = 0;
var uLocal_910 = 0;
var uLocal_911 = 0;
var uLocal_912 = 0;
var uLocal_913 = 0;
var uLocal_914 = 0;
var uLocal_915 = 0;
var uLocal_916 = 0;
var uLocal_917 = 0;
var uLocal_918 = 0;
var uLocal_919 = 13;
var uLocal_920 = 0;
var uLocal_921 = 0;
var uLocal_922 = 0;
var uLocal_923 = 0;
var uLocal_924 = 0;
var uLocal_925 = 0;
var uLocal_926 = 0;
var uLocal_927 = 0;
var uLocal_928 = 0;
var uLocal_929 = 0;
var uLocal_930 = 0;
var uLocal_931 = 0;
var uLocal_932 = 0;
var uLocal_933 = 0;
var uLocal_934 = 0;
var uLocal_935 = 0;
var uLocal_936 = 0;
var uLocal_937 = 0;
var uLocal_938 = 0;
var uLocal_939 = 0;
var uLocal_940 = 0;
var uLocal_941 = 0;
var uLocal_942 = 0;
var uLocal_943 = 0;
var uLocal_944 = 0;
var uLocal_945 = 0;
var uLocal_946 = 0;
var uLocal_947 = 0;
var uLocal_948 = 0;
var uLocal_949 = 0;
var uLocal_950 = 0;
var uLocal_951 = 0;
var uLocal_952 = 0;
var uLocal_953 = 0;
var uLocal_954 = 0;
var uLocal_955 = 0;
var uLocal_956 = 0;
var uLocal_957 = 0;
var uLocal_958 = 0;
var uLocal_959 = 0;
var uLocal_960 = 0;
var uLocal_961 = 0;
var uLocal_962 = 0;
var uLocal_963 = 0;
struct<55> Local_964 = {
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
var uLocal_1019 = 0;
var uLocal_1020 = 0;
var uLocal_1021 = 0;
var uLocal_1022 = 0;
var uLocal_1023 = 0;
var uLocal_1024 = 0;
var uLocal_1025 = 0;
var uLocal_1026 = 0;
var uLocal_1027 = 0;
var uLocal_1028 = 0;
var uLocal_1029 = 0;
int iLocal_1030 = 0;
int iLocal_1031 = 0;
int iLocal_1032[3] = {0, 0, 0};
int iLocal_1036[2] = {0, 0};
int iLocal_1039 = 0;
int iLocal_1040[2] = {0, 0};
int iLocal_1043 = 0;
int iLocal_1044 = 0;
int iLocal_1045 = 0;
var uLocal_1046[2] = {0, 0};
var uLocal_1049[3] = {0, 0, 0};
var uLocal_1053[2] = {0, 0};
int iLocal_1056 = 0;
int iLocal_1057 = 0;
int iLocal_1058 = 0;
struct<8> Local_1059[3];
struct<8> Local_1084[2];
struct<8> Local_1101[2];
int iLocal_1118 = 0;
int iLocal_1119 = 0;
var uLocal_1120[3] = {0, 0, 0};
var uLocal_1124[2] = {0, 0};
int iLocal_1127 = 0;
int iLocal_1128 = 0;
int iLocal_1129 = 0;
int iLocal_1130 = 0;
int iLocal_1131 = 0;
int iLocal_1132 = 0;
int iLocal_1133 = 0;
int iLocal_1134 = 0;
int iLocal_1135 = 0;
int iLocal_1136 = 0;
int iLocal_1137 = 0;
int iLocal_1138 = 0;
int *iLocal_1139 = NULL;
int *iLocal_1140 = NULL;
bool bLocal_1141 = 0;
int iLocal_1142 = 0;
bool bLocal_1143 = 0;
bool bLocal_1144 = 0;
int iLocal_1145 = 0;
int iLocal_1146 = 0;
int iLocal_1147 = 0;
int iLocal_1148 = 0;
bool bLocal_1149 = 0;
bool bLocal_1150 = 0;
bool bLocal_1151 = 0;
int iLocal_1152 = 0;
int iLocal_1153 = 0;
int iLocal_1154 = 0;
int iLocal_1155 = 0;
bool bLocal_1156 = 0;
int iLocal_1157 = 0;
bool bLocal_1158 = 0;
int iLocal_1159 = 0;
bool bLocal_1160 = 0;
int iLocal_1161 = 0;
int iLocal_1162 = 0;
bool bLocal_1163 = 0;
int iLocal_1164 = 0;
int iLocal_1165 = 0;
int iLocal_1166 = 0;
int iLocal_1167 = 0;
int iLocal_1168 = 0;
int iLocal_1169 = 0;
int iLocal_1170 = 0;
int iLocal_1171 = 0;
int iLocal_1172 = 0;
int iLocal_1173 = 0;
bool bLocal_1174 = 0;
int iLocal_1175 = 0;
int iLocal_1176 = 0;
int iLocal_1177 = 0;
int iLocal_1178 = 0;
int iLocal_1179 = 0;
int iLocal_1180 = 0;
int iLocal_1181 = 0;
int iLocal_1182 = 0;
int *iLocal_1183 = NULL;
bool bLocal_1184 = 0;
int iLocal_1185 = 0;
int iLocal_1186 = 0;
int iLocal_1187 = 0;
int *iLocal_1188 = NULL;
int iLocal_1189 = 0;
int iLocal_1190 = 0;
int iLocal_1191 = 0;
int iLocal_1192 = 0;
int iLocal_1193 = 0;
int iLocal_1194 = 0;
var uLocal_1195[5] = {0, 0, 0, 0, 0};
int iLocal_1201 = 0;
var *uLocal_1202 = NULL;
int iLocal_1203 = 0;
int iLocal_1204 = 0;
int iLocal_1205 = 0;
int iLocal_1206 = 0;
int iLocal_1207 = 0;
int iLocal_1208 = 0;
int iLocal_1209 = 0;
int iLocal_1210 = 0;
var uLocal_1211 = 0;
int iLocal_1212 = 0;
int iLocal_1213 = 0;
int iLocal_1214 = 0;
int iLocal_1215 = 0;
int iLocal_1216 = 0;
float *fLocal_1217 = NULL;
float fLocal_1218 = 0f;
float fLocal_1219 = 0f;
float fLocal_1220[5] = {0f, 0f, 0f, 0f, 0f};
var uLocal_1226[5] = {0, 0, 0, 0, 0};
float fLocal_1232 = 0f;
float fLocal_1233 = 0f;
float fLocal_1234[3] = {0f, 0f, 0f};
var uLocal_1238[3] = {0, 0, 0};
float fLocal_1242 = 0f;
float fLocal_1243 = 0f;
float fLocal_1244 = 0f;
int iLocal_1245 = 0;
float fLocal_1246 = 0f;
vector3 vLocal_1247[3] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_1257[3] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_1267[5] = {{0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}, {0f, 0f, 0f}};
vector3 vLocal_1283 = {0f, 0f, 0f};
vector3 vLocal_1286 = {0f, 0f, 0f};
vector3 vLocal_1289 = {0f, 0f, 0f};
vector3 vLocal_1292 = {0f, 0f, 0f};
vector3 vLocal_1295 = {0f, 0f, 0f};
vector3 vLocal_1298 = {0f, 0f, 0f};
vector3 vLocal_1301 = {0f, 0f, 0f};
vector3 vLocal_1304 = {0f, 0f, 0f};
vector3 vLocal_1307 = {0f, 0f, 0f};
float fLocal_1310 = 0f;
int iLocal_1311 = 0;
int iLocal_1312 = 0;
int iLocal_1313 = 0;
int iLocal_1314 = 0;
var uLocal_1315[2] = {0, 0};
int iLocal_1318 = 0;
int iLocal_1319[3] = {0, 0, 0};
int iLocal_1323 = 0;
int iLocal_1324 = 0;
int iLocal_1325 = 0;
int iLocal_1326 = 0;
int iLocal_1327 = 0;
int iLocal_1328 = 0;
int iLocal_1329 = 0;
int iLocal_1330 = 0;
int iLocal_1331 = 0;
var *uLocal_1332 = NULL;
var uLocal_1333 = 0;
var uLocal_1334 = 0;
var *uLocal_1335 = NULL;
var uLocal_1336 = 0;
var uLocal_1337 = 0;
var *uLocal_1338 = NULL;
var uLocal_1339 = 0;
var uLocal_1340 = 0;
var *uLocal_1341 = NULL;
var uLocal_1342 = 0;
var uLocal_1343 = 0;
var *uLocal_1344 = NULL;
var uLocal_1345 = 0;
var uLocal_1346 = 0;
var *uLocal_1347 = NULL;
var uLocal_1348 = 0;
var uLocal_1349 = 0;
var *uLocal_1350 = NULL;
var uLocal_1351 = 0;
var uLocal_1352 = 0;
var *uLocal_1353 = NULL;
var uLocal_1354 = 0;
var uLocal_1355 = 0;
int *iLocal_1356 = NULL;
var uLocal_1357 = 0;
var uLocal_1358 = 0;
var *uLocal_1359 = NULL;
var uLocal_1360 = 0;
var uLocal_1361 = 0;
bool bLocal_1362 = 0;
var *uLocal_1363 = NULL;
var uLocal_1364 = 0;
var uLocal_1365 = 0;
var uLocal_1366 = 0;
var uLocal_1367 = 0;
var uLocal_1368 = 0;
var uLocal_1369 = 0;
var uLocal_1370 = 0;
var uLocal_1371 = 0;
var uLocal_1372 = 0;
var uLocal_1373 = 0;
var uLocal_1374 = 0;
var uLocal_1375 = 0;
var uLocal_1376 = 0;
var uLocal_1377 = 0;
var uLocal_1378 = 0;
var uLocal_1379 = 0;
var uLocal_1380 = 0;
var uLocal_1381 = 0;
var uLocal_1382 = 0;
var uLocal_1383 = 0;
var uLocal_1384 = 0;
var uLocal_1385 = 0;
var uLocal_1386 = 0;
var uLocal_1387 = 0;
var uLocal_1388 = 0;
var uLocal_1389 = 0;
var uLocal_1390 = 0;
var uLocal_1391 = 0;
var uLocal_1392 = 0;
var uLocal_1393 = 0;
var uLocal_1394 = 0;
var uLocal_1395 = 0;
var uLocal_1396 = 0;
var uLocal_1397 = 0;
var uLocal_1398 = 0;
var uLocal_1399 = 0;
var uLocal_1400 = 0;
var uLocal_1401 = 0;
var uLocal_1402 = 0;
var uLocal_1403 = 0;
var uLocal_1404 = 0;
var uLocal_1405 = 0;
var uLocal_1406 = 0;
var uLocal_1407 = 0;
var uLocal_1408 = 0;
var uLocal_1409 = 0;
var uLocal_1410 = 0;
var uLocal_1411 = 0;
var uLocal_1412 = 0;
var uLocal_1413 = 0;
var uLocal_1414 = 0;
var uLocal_1415 = 0;
var uLocal_1416 = 0;
var uLocal_1417 = 0;
var uLocal_1418 = 0;
var uLocal_1419 = 0;
var uLocal_1420 = 0;
var uLocal_1421 = 0;
var uLocal_1422 = 0;
var uLocal_1423 = 0;
var uLocal_1424 = 0;
var uLocal_1425 = 0;
var uLocal_1426 = 0;
var uLocal_1427 = 0;
var uLocal_1428 = 0;
var uLocal_1429 = 0;
var uLocal_1430 = 0;
var uLocal_1431 = 0;
var uLocal_1432 = 0;
var uLocal_1433 = 0;
var uLocal_1434 = 0;
var uLocal_1435 = 0;
var uLocal_1436 = 0;
var uLocal_1437 = 0;
var uLocal_1438 = 0;
var uLocal_1439 = 0;
var uLocal_1440 = 0;
var uLocal_1441 = 0;
var uLocal_1442 = 0;
var uLocal_1443 = 0;
var uLocal_1444 = 0;
var uLocal_1445 = 0;
var uLocal_1446 = 0;
var uLocal_1447 = 0;
var uLocal_1448 = 0;
var uLocal_1449 = 0;
var uLocal_1450 = 0;
var uLocal_1451 = 0;
var uLocal_1452 = 0;
var uLocal_1453 = 0;
var uLocal_1454 = 0;
var uLocal_1455 = 0;
var uLocal_1456 = 0;
var uLocal_1457 = 0;
var uLocal_1458 = 0;
var uLocal_1459 = 0;
var uLocal_1460 = 0;
var uLocal_1461 = 0;
var uLocal_1462 = 0;
var uLocal_1463 = 0;
var uLocal_1464 = 0;
var uLocal_1465 = 0;
var uLocal_1466 = 0;
var uLocal_1467 = 0;
var uLocal_1468 = 0;
var uLocal_1469 = 0;
var uLocal_1470 = 0;
var uLocal_1471 = 0;
var uLocal_1472 = 0;
var uLocal_1473 = 0;
var uLocal_1474 = 0;
var uLocal_1475 = 0;
var uLocal_1476 = 0;
var uLocal_1477 = 0;
var uLocal_1478 = 0;
var uLocal_1479 = 0;
var uLocal_1480 = 0;
var uLocal_1481 = 0;
var uLocal_1482 = 0;
var uLocal_1483 = 0;
var uLocal_1484 = 0;
var uLocal_1485 = 0;
var uLocal_1486 = 0;
var uLocal_1487 = 0;
var uLocal_1488 = 0;
var uLocal_1489 = 0;
var uLocal_1490 = 0;
var uLocal_1491 = 0;
var uLocal_1492 = 0;
var uLocal_1493 = 0;
var uLocal_1494 = 0;
var uLocal_1495 = 0;
var uLocal_1496 = 0;
var uLocal_1497 = 0;
var uLocal_1498 = 0;
var uLocal_1499 = 0;
var uLocal_1500 = 0;
var uLocal_1501 = 0;
var uLocal_1502 = 0;
var uLocal_1503 = 0;
var uLocal_1504 = 0;
var uLocal_1505 = 0;
var uLocal_1506 = 0;
var uLocal_1507 = 0;
var uLocal_1508 = 0;
var uLocal_1509 = 0;
var uLocal_1510 = 0;
var uLocal_1511 = 0;
var uLocal_1512 = 0;
var uLocal_1513 = 0;
var uLocal_1514 = 0;
var uLocal_1515 = 0;
var uLocal_1516 = 0;
var uLocal_1517 = 0;
var uLocal_1518 = 0;
var uLocal_1519 = 0;
var uLocal_1520 = 0;
var uLocal_1521 = 0;
var uLocal_1522 = 0;
var uLocal_1523 = 0;
var uLocal_1524 = 0;
var uLocal_1525 = 0;
var uLocal_1526 = 0;
var uLocal_1527 = 0;
int *iLocal_1528 = NULL;
var uLocal_1529 = 0;
var uLocal_1530 = -1;
var uLocal_1531 = 0;
var uLocal_1532 = 0;
var uLocal_1533 = 0;
var uLocal_1534 = 0;
var uLocal_1535 = 0;
var uLocal_1536 = 0;
var uLocal_1537 = 1000;
var uLocal_1538 = 1000;
var uLocal_1539 = 0;
var *uLocal_1540 = NULL;
var uLocal_1541 = 0;
var uLocal_1542 = 8;
var uLocal_1543 = 0;
var uLocal_1544 = 0;
var uLocal_1545 = 0;
var uLocal_1546 = 4;
var uLocal_1547 = 0;
var uLocal_1548 = 0;
var uLocal_1549 = 0;
var uLocal_1550 = 0;
var uLocal_1551 = 0;
var uLocal_1552 = 0;
var uLocal_1553 = 0;
var uLocal_1554 = 0;
var uLocal_1555 = 0;
var uLocal_1556 = 0;
var uLocal_1557 = 0;
var uLocal_1558 = 0;
var uLocal_1559 = 0;
var uLocal_1560 = 0;
var uLocal_1561 = 4;
var uLocal_1562 = 0;
var uLocal_1563 = 0;
var uLocal_1564 = 0;
var uLocal_1565 = 0;
var uLocal_1566 = 0;
var uLocal_1567 = 0;
var uLocal_1568 = 0;
var uLocal_1569 = 0;
var uLocal_1570 = 0;
var uLocal_1571 = 0;
var uLocal_1572 = 0;
var uLocal_1573 = 0;
var uLocal_1574 = 0;
var uLocal_1575 = 0;
var uLocal_1576 = 4;
var uLocal_1577 = 0;
var uLocal_1578 = 0;
var uLocal_1579 = 0;
var uLocal_1580 = 0;
var uLocal_1581 = 0;
var uLocal_1582 = 0;
var uLocal_1583 = 0;
var uLocal_1584 = 0;
var uLocal_1585 = 0;
var uLocal_1586 = 0;
var uLocal_1587 = 0;
var uLocal_1588 = 0;
var uLocal_1589 = 0;
var uLocal_1590 = 0;
var uLocal_1591 = 4;
var uLocal_1592 = 0;
var uLocal_1593 = 0;
var uLocal_1594 = 0;
var uLocal_1595 = 0;
var uLocal_1596 = 0;
var uLocal_1597 = 0;
var uLocal_1598 = 0;
var uLocal_1599 = 0;
var uLocal_1600 = 0;
var uLocal_1601 = 0;
var uLocal_1602 = 0;
var uLocal_1603 = 0;
var uLocal_1604 = 0;
var uLocal_1605 = 0;
var uLocal_1606 = 4;
var uLocal_1607 = 0;
var uLocal_1608 = 0;
var uLocal_1609 = 0;
var uLocal_1610 = 0;
var uLocal_1611 = 0;
var uLocal_1612 = 0;
var uLocal_1613 = 0;
var uLocal_1614 = 0;
var uLocal_1615 = 0;
var uLocal_1616 = 0;
var uLocal_1617 = 0;
var uLocal_1618 = 0;
var uLocal_1619 = 0;
var uLocal_1620 = 0;
var uLocal_1621 = 4;
var uLocal_1622 = 0;
var uLocal_1623 = 0;
var uLocal_1624 = 0;
var uLocal_1625 = 0;
var uLocal_1626 = 0;
var uLocal_1627 = 0;
var uLocal_1628 = 0;
var uLocal_1629 = 0;
var uLocal_1630 = 0;
var uLocal_1631 = 0;
var uLocal_1632 = 0;
var uLocal_1633 = 0;
var uLocal_1634 = 0;
var uLocal_1635 = 0;
var uLocal_1636 = 4;
var uLocal_1637 = 0;
var uLocal_1638 = 0;
var uLocal_1639 = 0;
var uLocal_1640 = 0;
var uLocal_1641 = 0;
var uLocal_1642 = 0;
var uLocal_1643 = 0;
var uLocal_1644 = 0;
var uLocal_1645 = 0;
var uLocal_1646 = 0;
var uLocal_1647 = 0;
var uLocal_1648 = 0;
var uLocal_1649 = 0;
var uLocal_1650 = 0;
var uLocal_1651 = 4;
var uLocal_1652 = 0;
var uLocal_1653 = 0;
var uLocal_1654 = 0;
var uLocal_1655 = 0;
var uLocal_1656 = 0;
var uLocal_1657 = 0;
var uLocal_1658 = 0;
var uLocal_1659 = 0;
var uLocal_1660 = 0;
var uLocal_1661 = 0;
var uLocal_1662 = 0;
var uLocal_1663 = 0;
vector3 vLocal_1664 = {0f, 0f, 0f};
float fLocal_1667 = 0f;
vector3 vLocal_1668 = {0f, 0f, 0f};
float fLocal_1671 = 0f;
int iLocal_1672 = 0;
int iLocal_1673 = 0;
vector3 vLocal_1674 = {0f, 0f, 0f};
vector3 vLocal_1677 = {0f, 0f, 0f};
vector3 vLocal_1680 = {0f, 0f, 0f};
vector3 vLocal_1683 = {0f, 0f, 0f};
var *uLocal_1686 = NULL;
var uLocal_1687 = 0;
var uLocal_1688 = 0;
int iLocal_1689 = 0;
struct<12> Local_1690 = {
	2, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0
};
#pragma endregion //}

void __EntryFunction__() {
	int iVar0;
	int iVar1;
	int iVar2;

	iLocal_2 = 1;
	iLocal_3 = 134;
	iLocal_4 = 134;
	iLocal_5 = 1;
	iLocal_6 = 1;
	iLocal_7 = 1;
	iLocal_8 = 134;
	iLocal_9 = 1;
	iLocal_10 = 12;
	iLocal_11 = 12;
	fLocal_14 = 0.001f;
	iLocal_17 = -1;
	sLocal_20 = "NULL";
	fLocal_21 = 0f;
	fLocal_25 = -0.0375f;
	fLocal_26 = 0.17f;
	iLocal_28 = 3;
	fLocal_31 = 80f;
	fLocal_32 = 140f;
	fLocal_33 = 180f;
	iLocal_39 = 1;
	iLocal_40 = 65;
	iLocal_41 = 49;
	iLocal_42 = 64;
	vLocal_45 = {500f, 500f, 500f};
	uLocal_54 = ui::_0x4A9923385BDB9DAD();
	uLocal_55 = ui::_get_blip_info_id_iterator();
	iLocal_268 = -1;
	fLocal_270 = 1f;
	iLocal_383 = 100;
	iLocal_384 = 3;
	iLocal_1030 = 3;
	iLocal_1209 = 37000;
	iLocal_1215 = -1;
	fLocal_1217 = 90000f;
	fLocal_1242 = 135f;
	fLocal_1244 = 0f;
	fLocal_1246 = 0f;
	vLocal_1292 = {-1162.985f, -161.715f, -38.221f};
	vLocal_1295 = {-1327.63f, -266.202f, 38.221f};
	vLocal_1298 = {-1236.661f, -197.316f, 39.6313f};
	vLocal_1301 = {-1266.027f, -218.9829f, 41.44594f};
	vLocal_1307 = {-1237.731f, -189.5452f, 40.63728f};
	fLocal_1310 = 40f;
	iLocal_1324 = joaat("a_m_y_beachvesp_02");
	iLocal_1325 = joaat("fbi2");
	iLocal_1326 = joaat("s_m_m_highsec_01");
	iLocal_1327 = joaat("s_m_m_highsec_02");
	iLocal_1328 = joaat("washington");
	vLocal_1664 = {-1263.677f, -222.2767f, 41.446f};
	fLocal_1667 = 304.201f;
	vLocal_1668 = {-1507.252f, -934.3307f, 8.6562f};
	fLocal_1671 = 137.9228f;
	vLocal_1674 = {-1510.733f, -935.96f, 10.90214f};
	vLocal_1677 = {15.07491f, -0.024198f, -71.86189f};
	vLocal_1680 = {-1510.878f, -936.1155f, 9.798549f};
	vLocal_1683 = {4.686822f, -0.024198f, -72.45972f};
	if (player::has_force_cleanup_occurred(3)) {
		audio::trigger_music_event("ASS1_FAIL");
		func_490(&Global_101700.f_18922.f_1, 1024);
		func_488();
		func_483();
	}
	gameplay::set_mission_flag(1);
	iLocal_1044 = player::player_ped_id();
	if (!ped::is_ped_injured(player::player_ped_id())) {
		player::clear_player_wanted_level(player::player_id());
	}
	if (func_482()) {
		if (func_481()) {
			iLocal_1152 = 1;
		}
		bLocal_1141 = true;
	}
	else {
		bLocal_1141 = false;
	}
	func_480();
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ped::set_ped_config_flag(player::player_ped_id(), 32, 0);
	}
	func_479();
	iLocal_269 = 0;
	Local_57 = {func_477(iLocal_269)};
	ped::set_ped_model_is_suppressed(iLocal_1326, 1);
	ped::set_ped_model_is_suppressed(iLocal_1327, 1);
	cam::_0xF4F2C0D4EE209E20();
	if (func_482()) {
		bLocal_376 = true;
		iLocal_1208 = func_476();
		if (Global_86001) {
			if (iLocal_1208 <= 1) {
				iLocal_1208++;
			}
		}
		func_475();
		if (iLocal_1208 == 0) {
			if (iLocal_1152) {
				func_473();
				while (!func_472()) {
					system::wait(0);
				}
				iVar0 = func_429(-1523.174f, -924.6732f, 9.1221f, 53.0177f);
				if (!vehicle::is_this_model_a_boat(entity::get_entity_model(iVar0)) &&
					!vehicle::is_this_model_a_plane(entity::get_entity_model(iVar0)) &&
					!vehicle::is_this_model_a_heli(entity::get_entity_model(iVar0)) &&
					!vehicle::is_big_vehicle(iVar0)) {
					vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
				}
				else {
					vehicle::delete_vehicle(&iVar0);
				}
			}
			func_428(-1510.181f, -946.9595f, 8.2738f, 10f, 1, 0);
		}
		else if (iLocal_1208 == 1) {
			if (iLocal_1152) {
				func_473();
				while (!func_472()) {
					system::wait(0);
				}
				iVar1 = func_429(-1266.405f, -219.1991f, 41.4459f, 304.8644f);
				if (!vehicle::is_this_model_a_boat(entity::get_entity_model(iVar1)) &&
					!vehicle::is_this_model_a_plane(entity::get_entity_model(iVar1)) &&
					!vehicle::is_this_model_a_heli(entity::get_entity_model(iVar1)) &&
					!vehicle::is_big_vehicle(iVar1)) {
					vehicle::set_vehicle_on_ground_properly(iVar1, 1084227584);
				}
				else {
					vehicle::delete_vehicle(&iVar1);
				}
			}
			func_428(-1266.173f, -214.0011f, 41.4459f, 310.0126f, 1, 0);
		}
		else if (iLocal_1208 == 2) {
			if (iLocal_1152) {
				func_473();
				while (!func_472()) {
					system::wait(0);
				}
				iVar2 = func_429(-1188.486f, -316.9884f, 36.6841f, 29.9702f);
				if (!vehicle::is_this_model_a_boat(entity::get_entity_model(iVar2)) &&
					!vehicle::is_this_model_a_plane(entity::get_entity_model(iVar2)) &&
					!vehicle::is_this_model_a_heli(entity::get_entity_model(iVar2)) &&
					!vehicle::is_big_vehicle(iVar2)) {
					vehicle::set_vehicle_on_ground_properly(iVar2, 1084227584);
				}
				else {
					vehicle::delete_vehicle(&iVar2);
				}
			}
			func_428(-1184.244f, -319.2575f, 36.7445f, 26.0711f, 1, 0);
		}
	}
	while (true) {
		unk1::_0x208784099002BC30("M_ASS1", 0);
		if (iLocal_1142) {
			if (func_427()) {
				func_426();
			}
		}
		else if (!ped::is_ped_injured(iLocal_1044)) {
			func_419();
			if (iLocal_1030 < 10) {
				Local_360.f_6 = 1;
			}
			else {
				Local_360.f_6 = 5;
			}
			func_141();
			func_89();
			if (iLocal_1157) {
				func_84();
			}
			if (!iLocal_1140) {
				if (iLocal_1030 >= 9 && iLocal_1030 < 11) {
					func_80(&uLocal_1202, &fLocal_1217, &iLocal_1139, &iLocal_1140);
				}
			}
			func_55();
			func_53();
			if ((iLocal_1133 || iLocal_1138) && iLocal_1030 < 11 || iLocal_1168 && iLocal_1030 < 11) {
				if (!func_52(&uLocal_1353) && iLocal_1030 > 8) {
					func_49(&uLocal_1353);
				}
				else if (iLocal_1030 < 8 || func_46(&uLocal_1353) > 5f) {
					if (iLocal_1043 == 1) {
						func_31(1);
					}
					else if (iLocal_1043 == 5) {
						func_31(5);
					}
					else {
						func_31(2);
					}
				}
				else if (func_46(&uLocal_1353) > 2.5f) {
					if (!iLocal_1169) {
						if (!iLocal_1188) {
							iLocal_1056 = func_30(70f, 0);
						}
						else {
							iLocal_1056 = func_30(70f, 1);
						}
						if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
							if (!ped::is_ped_injured(iLocal_1056)) {
								ai::clear_ped_tasks(iLocal_1056);
								if (iLocal_1043 == 1) {
									if (entity::does_entity_exist(iLocal_1313)) {
										if (!ped::is_ped_in_any_vehicle(iLocal_1056, 0)) {
											ai::task_go_to_entity_while_aiming_at_entity(iLocal_1056, iLocal_1313,
																						 iLocal_1313, 2f, 0, 0.5f,
																						 1082130432, 1, 0, -957453492);
										}
									}
									if (entity::does_entity_exist(iLocal_1056) && !ped::is_ped_injured(iLocal_1056)) {
										func_28(iLocal_1056, 6, "OJAvaGUARD2");
										func_27(&uLocal_1363, "OJASAUD", "OJASva_CAR2", "OJASva_CAR2_1", 9, 0, 0);
									}
								}
								else if (iLocal_1043 == 8) {
									if (entity::does_entity_exist(iLocal_1311) &&
										vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
										ai::task_go_to_entity_while_aiming_at_entity(iLocal_1056, iLocal_1311,
																					 iLocal_1311, 2f, 0, 0.5f,
																					 1082130432, 1, 0, -957453492);
									}
									func_28(func_25(25f), 6, "OJAvaGUARD2");
									func_27(&uLocal_1363, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
								}
								else {
									ai::task_aim_gun_at_entity(iLocal_1056, player::player_ped_id(), -1, 0);
									func_2(iLocal_1056);
								}
							}
						}
						iLocal_1169 = 1;
					}
				}
			}
			func_1();
		}
		system::wait(0);
	}
}

// Position - 0x723
void func_1() {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(iLocal_1044, 0)) {
		iVar0 = ped::get_vehicle_ped_is_in(iLocal_1044, 0);
		if (entity::get_entity_model(iVar0) == joaat("towtruck") ||
			entity::get_entity_model(iVar0) == joaat("towtruck2")) {
			bLocal_1143 = true;
		}
	}
	else {
		bLocal_1143 = false;
	}
	if (bLocal_1143) {
		if (vehicle::is_vehicle_attached_to_tow_truck(iVar0, iLocal_1311)) {
			vehicle::detach_vehicle_from_tow_truck(iVar0, iLocal_1311);
		}
	}
}

// Position - 0x787
void func_2(int iParam0) {
	struct<6> Var0;

	if (!iLocal_1179) {
		if (entity::does_entity_exist(iParam0) && !ped::is_ped_injured(iParam0) && func_23(iParam0, 1) < 50f) {
			if (!func_22()) {
				if (iLocal_1043 == 4) {
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1363, "OJASAUD", "OJASva_LIMO", 9, 0, 0, 0);
				}
				else if (iLocal_1043 == 8) {
					func_28(func_25(25f), 6, "OJAvaGUARD2");
					func_27(&uLocal_1363, "OJASAUD", "OJASva_CAR3", "OJASva_CAR3_1", 9, 0, 0);
				}
				else {
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1363, "OJASAUD", "OJASva_GTFO3", 9, 0, 0, 0);
				}
				iLocal_1179 = 1;
			}
			else {
				Var0 = {func_5()};
				if (!gameplay::are_strings_equal(&Var0, "OJAS_FEED")) {
					func_3();
				}
			}
		}
	}
}

// Position - 0x85A
void func_3() {
	Global_14611 = 0;
	func_4();
}

// Position - 0x86A
void func_4() {
	audio::restart_scripted_conversation();
	Global_16756 = 0;
	if (audio::is_mobile_phone_call_ongoing() || Global_14443.f_1 == 9 || Global_14442 == 1) {
		audio::stop_scripted_conversation(0);
		Global_15745 = 6;
		Global_14443.f_1 = 3;
		return;
	}
	if (audio::is_scripted_conversation_ongoing()) {
		audio::stop_scripted_conversation(1);
		Global_15745 = 6;
		return;
	}
}

// Position - 0x8C1
struct<6> func_5() {
	struct<6> Var0;

	StringCopy(&Var0, "NULL", 24);
	if (Global_15745 == 4) {
		return Global_15364;
	}
	return Var0;
}

//Position - 0x8E5
bool func_6(var* uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_21(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
	if (iParam3 > 7) {
		if (iParam3 < 12) {
			iParam3 = 7;
		}
	}
	Global_15752 = 0;
	Global_15754 = 0;
	Global_15759 = 0;
	Global_16736 = 0;
	Global_16738 = 0;
	Global_16742 = 0;
	Global_2621441 = 0;
	return func_7(sParam2, iParam3, 0);
}

// Position - 0x933
int func_7(char *sParam0, int iParam1, int iParam2) {
	Global_15746 = 0;
	if (Global_15745 == 0 || Global_15747 == 2) {
		if (Global_15745 != 0) {
			if (iParam1 > Global_15747) {
				if (Global_15752 == 0) {
					audio::stop_scripted_conversation(0);
					Global_14443.f_1 = 3;
					Global_15745 = 0;
					Global_15746 = 1;
					Global_15798 = 0;
					Global_15741 = 0;
					Global_15742 = 0;
					Global_15756 = 0;
					Global_15755 = 0;
					Global_14442 = 0;
				}
				else {
					func_4();
					return 0;
				}
			}
			else {
				return 0;
			}
		}
		if (audio::is_scripted_conversation_ongoing()) {
			return 0;
		}
		if (func_20(8, -1)) {
			return 0;
		}
		Global_15821 = {Global_15815};
		func_19();
		Global_15034 = {Global_15199};
		Global_15751 = Global_15752;
		Global_15758 = Global_15759;
		Global_2621442 = Global_2621441;
		Global_15760 = {Global_15776};
		Global_15753 = Global_15754;
		Global_16735 = Global_16736;
		Global_16743 = {Global_16749};
		Global_16737 = Global_16738;
		Global_16739 = Global_16740;
		Global_16741 = Global_16742;
		Global_15364.f_370 = Global_16734;
		Global_15364.f_368 = Global_16732;
		Global_15364.f_369 = Global_16733;
		Global_15741 = Global_15742;
		if (Global_15751) {
			gameplay::clear_bit(&Global_2313, 20);
			gameplay::clear_bit(&Global_2314, 17);
			gameplay::clear_bit(&Global_2315, 0);
			if (iParam2) {
				func_12();
				if (Global_3118[Global_14443 /*2811*/][0 /*281*/].f_259 == 2) {
					if (iParam1 == 13) {
					}
					else {
						return 0;
					}
				}
				if (Global_14443.f_1 > 3) {
					return 0;
				}
			}
			if (Global_14409 == 1) {
				return 0;
			}
			if (player::is_player_playing(player::player_id())) {
				if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
					return 0;
				}
				if (func_11()) {
					return 0;
				}
				if (ai::is_ped_sprinting(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_ragdoll(player::player_ped_id())) {
					return 0;
				}
				if (ped::is_ped_in_parachute_free_fall(player::player_ped_id())) {
					return 0;
				}
				if (weapon::get_is_ped_gadget_equipped(player::player_ped_id(), joaat("gadget_parachute"))) {
					return 0;
				}
				if (!Global_69702) {
					if (entity::is_entity_in_water(player::player_ped_id())) {
						return 0;
					}
					if (player::is_player_climbing(player::player_id())) {
						return 0;
					}
					if (ped::is_ped_planting_bomb(player::player_ped_id())) {
						return 0;
					}
					if (player::is_special_ability_active(player::player_id())) {
						return 0;
					}
				}
			}
			if (func_10()) {
				return 0;
			}
			else {
				switch (Global_14443.f_1) {
				case 7: return 0;

				case 8: return 0;

				case 9: break;

				case 10: break;

				default: break;
				}
				if (gameplay::is_bit_set(Global_2313, 9)) {
					return 0;
				}
			}
			func_9();
			Global_15755 = iParam2;
		}
		Global_15747 = iParam1;
		StringCopy(&Global_15364, sParam0, 24);
		Global_14611 = 0;
		func_8();
		return 1;
	}
	if (Global_15745 == 5) {
		return 0;
	}
	if (iParam1 < Global_15747 || iParam1 == Global_15747) {
		return 0;
	}
	if (iParam1 == 2) {
	}
	else {
		func_4();
	}
	return 0;
}

// Position - 0xBFF
void func_8() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 69) {
		StringCopy(&Global_14613[iVar0 /*6*/], "", 24);
		iVar0++;
	}
	audio::stop_scripted_conversation(0);
	Global_15745 = 1;
}

// Position - 0xC30
void func_9() {
	Global_15798 = Global_15797;
	Global_15792 = Global_15793;
	Global_15839 = {Global_15827};
	Global_15845 = {Global_15833};
	Global_15800 = Global_15799;
	Global_15869 = {Global_15851};
	Global_15875 = {Global_15857};
	Global_15881 = {Global_15863};
	Global_15887 = {Global_15893};
	Global_1628 = Global_1629;
	Global_1630 = Global_1631;
	Global_15756 = Global_15757;
	Global_15758 = Global_15759;
	Global_15760 = {Global_15776};
	Global_15749 = Global_15750;
	Global_16761 = 0;
	Global_15794 = 0;
	Global_15795 = 0;
	gameplay::clear_bit(&Global_2314, 16);
}

// Position - 0xCC5
bool func_10() {
	if (Global_14443.f_1 == 1 || Global_14443.f_1 == 0) {
		return true;
	}
	return false;
}

// Position - 0xCEC
bool func_11() {
	int iVar0;
	int iVar1;

	if (Global_69702) {
		iVar0 = 0;
		weapon::get_current_ped_weapon(player::player_ped_id(), &iVar1, 1);
		if (player::is_player_playing(player::player_id())) {
			if (iVar1 == joaat("weapon_sniperrifle") || iVar1 == joaat("weapon_heavysniper") ||
				iVar1 == joaat("weapon_remotesniper")) {
				iVar0 = 1;
			}
		}
		if (cam::is_aim_cam_active() && iVar0 == 1) {
			return true;
		}
		else {
			return false;
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (ped::get_ped_config_flag(player::player_ped_id(), 78, 1)) {
			return true;
		}
		else {
			return false;
		}
	}
	return true;
}

// Position - 0xD85
void func_12() {
	if (func_18(14)) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[0 /*29*/]) {
				Global_14443 = 0;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[1 /*29*/]) {
				Global_14443 = 1;
			}
			else if (entity::get_entity_model(player::player_ped_id()) == Global_101700.f_27009[2 /*29*/]) {
				Global_14443 = 2;
			}
			else {
				Global_14443 = 0;
			}
		}
	}
	else {
		Global_14443 = func_13();
		if (Global_14443 == 145) {
			Global_14443 = 3;
		}
		if (Global_69702) {
			Global_14443 = 3;
		}
		if (Global_14443 > 3) {
			Global_14443 = 3;
		}
	}
}

// Position - 0xE27
int func_13() {
	func_14();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xE40
void func_14() {
	int iVar0;

	if (entity::does_entity_exist(player::player_ped_id())) {
		if (func_17(Global_101700.f_2095.f_539.f_3549) != entity::get_entity_model(player::player_ped_id())) {
			iVar0 = func_16(player::player_ped_id());
			if (func_15(iVar0) && (!func_18(14) || Global_100652)) {
				if (Global_101700.f_2095.f_539.f_3549 != iVar0 && func_15(Global_101700.f_2095.f_539.f_3549)) {
					Global_101700.f_2095.f_539.f_3550 = Global_101700.f_2095.f_539.f_3549;
				}
				Global_101700.f_2095.f_539.f_3551 = iVar0;
				Global_101700.f_2095.f_539.f_3549 = iVar0;
				return;
			}
		}
		else {
			if (Global_101700.f_2095.f_539.f_3549 != 145) {
				Global_101700.f_2095.f_539.f_3551 = Global_101700.f_2095.f_539.f_3549;
			}
			return;
		}
	}
	Global_101700.f_2095.f_539.f_3549 = 145;
}

// Position - 0xF3D
bool func_15(int iParam0) { return iParam0 < 3; }

// Position - 0xF49
int func_16(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		iVar1 = entity::get_entity_model(iParam0);
		iVar0 = 0;
		while (iVar0 <= 2) {
			if (func_17(iVar0) == iVar1) {
				return iVar0;
			}
			iVar0++;
		}
	}
	return 145;
}

// Position - 0xF86
int func_17(int iParam0) {
	if (func_15(iParam0)) {
		return Global_101700.f_27009[iParam0 /*29*/];
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xFB0
bool func_18(int iParam0) { return Global_35781 == iParam0; }

// Position - 0xFBE
void func_19() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 15) {
		Global_15034[iVar0 /*10*/] = 0;
		StringCopy(&Global_15034[iVar0 /*10*/].f_1, "", 24);
		Global_15034[iVar0 /*10*/].f_7 = 0;
		Global_15034[iVar0 /*10*/].f_8 = 0;
		iVar0++;
	}
	Global_15034.f_161 = -99;
	Global_15034.f_162 = {0f, 0f, 0f};
}

// Position - 0x1015
bool func_20(int iParam0, int iParam1) {
	switch (iParam0) {
	case 5:
		if (iParam1 > -1) {
			return Global_1353070.f_203[iParam1];
		}
		break;
	}
	return gameplay::is_bit_set(Global_1353070.f_1015, iParam0);
}

// Position - 0x1050
void func_21(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5) {
	Global_15199 = {*uParam0};
	Global_1629 = iParam1;
	StringCopy(&Global_15815, sParam2, 24);
	Global_16734 = iParam5;
	if (iParam3 == 0) {
		Global_16732 = 1;
		Global_16730 = 0;
	}
	else {
		Global_16732 = 0;
		Global_16730 = 1;
	}
	if (iParam4 == 0) {
		Global_16733 = 1;
		Global_16731 = 0;
	}
	else {
		Global_16733 = 0;
		Global_16731 = 1;
	}
}

// Position - 0x10A6
bool func_22() {
	if (Global_15745 != 0 || audio::is_scripted_conversation_ongoing()) {
		return true;
	}
	return false;
}

// Position - 0x10C8
float func_23(int iParam0, int iParam1) {
	return func_24(player::get_player_ped(player::get_player_index()), iParam0, iParam1);
}

// Position - 0x10E0
float func_24(int iParam0, int iParam1, int iParam2) {
	vector3 vVar0;
	vector3 vVar3;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar3 = {entity::get_entity_coords(iParam1, 1)};
	}
	else {
		vVar3 = {entity::get_entity_coords(iParam1, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vVar3, iParam2);
}

// Position - 0x113E
int func_25(float fParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 2) {
		if (!ped::is_ped_injured(uLocal_1049[iVar0])) {
			if (func_26(uLocal_1049[iVar0], vLocal_1289, 1) < fParam0) {
				return uLocal_1049[iVar0];
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		if (!ped::is_ped_injured(uLocal_1053[iVar0])) {
			if (func_26(uLocal_1053[iVar0], vLocal_1289, 1) < fParam0) {
				return uLocal_1053[iVar0];
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x11CB
float func_26(int iParam0, vector3 vParam1, int iParam4) {
	if (entity::is_entity_dead(iParam0, 0)) {
		return -1f;
	}
	return gameplay::get_distance_between_coords(entity::get_entity_coords(iParam0, 1), vParam1, iParam4);
}

// Position - 0x11F5
int func_27(var *uParam0, char *sParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6) {
	func_21(uParam0, 145, sParam1, iParam5, iParam6, 0);
	if (iParam4 > 7) {
		if (iParam4 < 12) {
			iParam4 = 7;
		}
	}
	Global_15752 = 0;
	Global_15759 = 0;
	Global_15754 = 0;
	Global_16736 = 1;
	Global_16738 = 0;
	Global_16742 = 0;
	StringCopy(&Global_16749, sParam3, 24);
	Global_2621441 = 0;
	return func_7(sParam2, iParam4, 0);
}

// Position - 0x1249
void func_28(int iParam0, int iParam1, char *sParam2) {
	if (!ped::is_ped_injured(iParam0)) {
		func_29(&uLocal_1363, iParam1, iParam0, sParam2, 0, 1);
	}
}

// Position - 0x126A
void func_29(var *uParam0, int iParam1, int iParam2, char *sParam3, int iParam4, int iParam5) {
	if ((*uParam0)[iParam1 /*10*/].f_7 == 1) {
	}
	(*uParam0)[iParam1 /*10*/] = iParam2;
	StringCopy(&(*uParam0)[iParam1 /*10*/].f_1, sParam3, 24);
	(*uParam0)[iParam1 /*10*/].f_7 = 1;
	(*uParam0)[iParam1 /*10*/].f_8 = iParam4;
	(*uParam0)[iParam1 /*10*/].f_9 = iParam5;
	if (!Global_69702) {
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_8 == 0) {
				ped::set_ped_can_play_ambient_anims(iParam2, 0);
			}
			else {
				ped::set_ped_can_play_ambient_anims(iParam2, 1);
			}
		}
		if (!ped::is_ped_injured(iParam2)) {
			if ((*uParam0)[iParam1 /*10*/].f_9 == 0) {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 0);
			}
			else {
				ped::set_ped_can_use_auto_conversation_lookat(iParam2, 1);
			}
		}
	}
}

// Position - 0x1305
int func_30(int iParam0, int iParam1) {
	int iVar0;
	float fVar1;
	float fVar2;
	var uVar3;

	fVar2 = iParam0;
	iVar0 = 0;
	while (iVar0 <= 2) {
		if (!ped::is_ped_injured(uLocal_1049[iVar0])) {
			if (iParam1 || !iParam1 && !ped::is_ped_in_any_vehicle(uLocal_1049[iVar0], 0)) {
				fVar1 = func_23(uLocal_1049[iVar0], 1);
				if (fVar1 < fVar2) {
					fVar2 = fVar1;
					uVar3 = uLocal_1049[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		if (!ped::is_ped_injured(uLocal_1053[iVar0])) {
			if (iParam1 || !iParam1 && !ped::is_ped_in_any_vehicle(uLocal_1053[iVar0], 0)) {
				fVar1 = func_23(uLocal_1053[iVar0], 1);
				if (fVar1 < fVar2) {
					fVar2 = fVar1;
					uVar3 = uLocal_1053[iVar0];
				}
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 1) {
		if (!ped::is_ped_injured(uLocal_1046[iVar0])) {
			if (iParam1 || !iParam1 && !ped::is_ped_in_any_vehicle(uLocal_1053[iVar0], 0)) {
				fVar1 = func_23(uLocal_1046[iVar0], 1);
				if (fVar1 < fVar2) {
					fVar2 = fVar1;
					uVar3 = uLocal_1046[iVar0];
				}
			}
		}
		iVar0++;
	}
	return uVar3;
}

// Position - 0x143F
void func_31(int iParam0) {
	char *sVar0;

	if (iLocal_1142 == 0) {
		iLocal_1043 = iParam0;
		func_3();
		ui::clear_prints();
		audio::trigger_music_event("ASS1_FAIL");
		if (func_45()) {
			func_43(-1698.51f, -1067.768f, 12.1417f, 316.3502f);
		}
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			Global_91491.f_12[0] = 1;
		}
		else {
			Global_91491.f_12[0] = 0;
		}
		switch (iLocal_1043) {
		case 0: sVar0 = "ASS_VA_FAILED"; break;

		case 1: sVar0 = "ASS_VA_VEHICLE"; break;

		case 2:
		case 5: sVar0 = "ASS_VA_COVER"; break;

		case 8: sVar0 = "ASS_VA_COVER"; break;

		case 3: sVar0 = "ASS_VA_WANTED"; break;

		case 6: sVar0 = "ASS_VA_ESCAPED"; break;

		case 7: sVar0 = "ASS_VA_ABAND"; break;

		case 9: sVar0 = "ASS_VA_LATTACK"; break;
		}
		iLocal_1142 = 1;
		func_41(sVar0);
		func_32(0);
	}
}

// Position - 0x1531
void func_32(int iParam0) {
	int iVar0;

	if (Global_101700.f_8044 || func_40(0)) {
		iVar0 = func_39();
		if (!func_33(iVar0)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
		Global_91527 = iParam0;
	}
}

// Position - 0x1576
int func_33(int iParam0) {
	int iVar0;
	int iVar1;

	func_38();
	if (player::is_player_playing(player::player_id())) {
		player::start_firing_amnesty(5000);
	}
	iVar0 = Global_82576[iParam0 /*5*/];
	iVar1 = Global_69971.f_109[iVar0 /*4*/];
	func_37(iVar1, 1);
	player::_0xC9A763D8FE87436A(player::player_id());
	player::special_ability_deactivate(player::player_id());
	func_34(&Global_101700.f_2095.f_539, iVar1);
	if (Global_85999 == Global_91528) {
		Global_101700.f_8044.f_330[iVar1 /*6*/].f_1++;
	}
	if (!gameplay::is_bit_set(Global_82612[iVar1 /*34*/].f_15, 1)) {
		if (!player::is_player_playing(player::player_id())) {
			gameplay::set_fade_in_after_death_arrest(0);
		}
	}
	Global_101700.f_8044.f_330[iVar1 /*6*/].f_2++;
	Global_85999 = Global_91528;
	if (iParam0 == -1) {
		if (Global_101700.f_8044) {
		}
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 4)) {
		return 0;
	}
	if (gameplay::is_bit_set(Global_82576[iParam0 /*5*/].f_1, 5)) {
		return 0;
	}
	return 1;
}

// Position - 0x168D
void func_34(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float *fVar5;

	if (iParam1 == 94) {
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = Global_101700.f_17492[iVar0];
		if (iVar1 == 8 || iVar1 == 9 || iVar1 == 10 || iVar1 == 11 || iVar1 == 34 || iVar1 == 72 || iVar1 == 73)
			&&!gameplay::is_bit_set(Global_101700.f_8044.f_99.f_219[0], 9) {}
		else {
			vVar2 = {0f, 0f, 0f};
			fVar5 = 0f;
			if (!func_36(Global_101700.f_17492[iVar0], &vVar2, &fVar5)) {
				Global_101700.f_17492[iVar0] = 318;
				func_35(&uParam0->f_1524[iVar0]);
				uParam0->f_1528[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1538[iVar0] = 0f;
				uParam0->f_1542[iVar0] = 0;
				uParam0->f_1546[iVar0 /*3*/] = {0f, 0f, 0f};
				uParam0->f_1556[iVar0] = 0;
				Global_89214[iVar0 /*29*/] = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_9 = 0f;
				Global_89214[iVar0 /*29*/].f_12 = 0f;
				Global_89214[iVar0 /*29*/].f_3 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_10 = 0f;
				Global_89214[iVar0 /*29*/].f_13 = 0f;
				Global_89214[iVar0 /*29*/].f_6 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_11 = 0f;
				Global_89214[iVar0 /*29*/].f_14 = 0f;
				Global_89214[iVar0 /*29*/].f_17 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_26 = 0f;
				Global_89214[iVar0 /*29*/].f_20 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_27 = 0f;
				Global_89214[iVar0 /*29*/].f_23 = {0f, 0f, 0f};
				Global_89214[iVar0 /*29*/].f_28 = 0f;
			}
		}
		iVar0++;
	}
}

// Position - 0x1856
void func_35(int *iParam0) { *iParam0 = -15; }

// Position - 0x1864
int func_36(int iParam0, var *uParam1, float *fParam2) {
	switch (iParam0) {
	case 11:
		*uParam1 = {115.1569f, -1286.684f, 28.2613f};
		*fParam2 = 111f;
		return 1;

	case 8:
		*uParam1 = {-90.0089f, -1324.195f, 28.3203f};
		*fParam2 = 194.1887f;
		return 1;

	case 9: return func_36(8, uParam1, fParam2);

	case 10: return func_36(8, uParam1, fParam2);

	case 13:
		*uParam1 = {-807.2979f, -48.4004f, 36.8173f};
		*fParam2 = 201.6328f;
		return 1;

	case 14:
		*uParam1 = {1432.34f, -1887.383f, 70.5768f};
		*fParam2 = 350.0509f;
		return 1;

	case 15:
		*uParam1 = {1666.204f, 1967.25f, 143.3213f};
		*fParam2 = 0.7896f;
		return 1;

	case 12:
		*uParam1 = {-1440.22f, -127.02f, 50f};
		*fParam2 = 42f;
		return 1;

	case 16:
		*uParam1 = {135.055f, -1759.64f, 27.8957f};
		*fParam2 = -129f;
		return 1;

	case 17:
		*uParam1 = {687.6992f, -1744.03f, 28.3624f};
		*fParam2 = 267.1409f;
		return 1;

	case 18:
		*uParam1 = {56.5117f, -744.6122f, 43.1356f};
		*fParam2 = 340.0526f;
		return 1;

	case 19:
		*uParam1 = {506.485f, -1884.967f, 24.764f};
		*fParam2 = 22.9566f;
		return 1;

	case 20:
		*uParam1 = {1555.958f, 953.6136f, 77.2063f};
		*fParam2 = 152.8118f;
		return 1;

	case 21:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 22:
		*uParam1 = {220.72f, -64.4177f, 68.2922f};
		*fParam2 = 250.4535f - 360f;
		return 1;

	case 74:
		*uParam1 = {2048.07f, 3840.84f, 34.2238f};
		*fParam2 = 119.603f;
		return 1;

	case 23:
		*uParam1 = {-464.22f, -1592.98f, 38.73f};
		*fParam2 = 168f;
		return 1;

	case 24:
		*uParam1 = {744.79f + 0.0186f, -465.86f - 0.0114f, 36.6399f};
		*fParam2 = 51.7279f;
		return 1;

	case 67:
		*uParam1 = {-9f, 508.1f, 173.6278f};
		*fParam2 = 151.2504f;
		return 1;

	case 25:
		*uParam1 = {72.2278f, -1464.68f, 28.2915f};
		*fParam2 = 156.8827f;
		return 1;

	case 27:
		*uParam1 = {763f, -906f, 24.2312f};
		*fParam2 = 7.2736f;
		return 1;

	case 26:
		*uParam1 = {257.9167f, -1120.786f, 28.3684f};
		*fParam2 = 97.2736f;
		return 1;

	case 28:
		*uParam1 = {422.5858f, -978.6332f, 69.7073f};
		*fParam2 = 4f;
		return 1;

	case 29:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 30:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 31:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 32:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 33:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 34:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 35:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 36:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 37:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 58:
		*uParam1 = {294.8521f, 882.9366f, 197.8527f};
		*fParam2 = 162.693f;
		return 1;

	case 59:
		*uParam1 = {-1771.802f, 794.4316f, 138.4211f};
		*fParam2 = 128.9946f;
		return 1;

	case 60:
		*uParam1 = {1495.595f, -1848.821f, 70.2075f};
		*fParam2 = 32.2721f;
		return 1;

	case 38:
		*uParam1 = {2897.554f, 4032.241f, 50.1419f};
		*fParam2 = 192.8091f;
		return 1;

	case 39:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 40:
		*uParam1 = {1973.355f, 3818.204f, 32.005f};
		*fParam2 = 32f;
		return 1;

	case 41:
		*uParam1 = {1397f, 3725.8f, 33.0673f};
		*fParam2 = -3.7534f;
		return 1;

	case 42:
		*uParam1 = {Vector(4.0205f, -2975.341f, 798.4536f) + Vector(1f, 0f, 0f)};
		*fParam2 = 90f;
		return 1;

	case 43:
		*uParam1 = {709.0244f, -2916.479f, 5.0589f};
		*fParam2 = 355.326f;
		return 1;

	case 44:
		*uParam1 = {643.5248f, -2917.325f, 5.1337f};
		*fParam2 = 334.1068f;
		return 1;

	case 45:
		*uParam1 = {595.2742f, -2819.183f, 5.0559f};
		*fParam2 = 46.8853f;
		return 1;

	case 46:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 47:
		*uParam1 = {314.4171f, 965.207f, 208.4024f};
		*fParam2 = 165.9421f;
		return 1;

	case 49:
		*uParam1 = {3321.537f, 4975.455f, 25.9097f};
		*fParam2 = 221.228f;
		return 1;

	case 48:
		*uParam1 = {-111.1318f, 6316.479f, 30.4904f};
		*fParam2 = 42f + 180f;
		return 1;

	case 50:
		*uParam1 = {-731.3261f, 106.68f, 54.7169f};
		*fParam2 = 98.9764f;
		return 1;

	case 51:
		*uParam1 = {-1257.5f, -526.9999f, 30.2361f};
		*fParam2 = 220.9554f;
		return 1;

	case 52:
		*uParam1 = {736.9869f, -2050.678f, 28.2718f};
		*fParam2 = 83.9922f;
		return 1;

	case 66:
		*uParam1 = {262.5499f, -2540.15f, 4.8433f};
		*fParam2 = -64.1366f;
		return 1;

	case 53:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 55:
		*uParam1 = {-315.7789f, 6201.355f, 30.4322f};
		*fParam2 = 127.7547f;
		return 1;

	case 56:
		*uParam1 = {118.0988f, -1264.916f, 32.3637f};
		*fParam2 = -63f;
		return 1;

	case 57:
		*uParam1 = {37.5988f, -1351.52f, 28.2954f};
		*fParam2 = 90.0339f;
		return 1;

	case 61:
		*uParam1 = {-558.2693f, 261.1167f, 82.07f};
		*fParam2 = 84.6231f;
		return 1;

	case 62:
		*uParam1 = {-196.9999f, 507.9999f, 132.477f};
		*fParam2 = 99.6049f;
		return 1;

	case 63:
		*uParam1 = {1312.01f, -1645.87f, 51.2f};
		*fParam2 = 120f;
		return 1;

	case 68:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 69:
		*uParam1 = {-818.7374f, 6.4824f, 41.2432f};
		*fParam2 = 211.8223f;
		return 1;

	case 64:
		*uParam1 = {2091.258f, 4714.852f, 40.1936f};
		*fParam2 = 136.0867f;
		return 1;

	case 54:
		*uParam1 = {1762.59f, 3247.212f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 65:
		*uParam1 = {1764.013f, 3252.902f, 40.735f};
		*fParam2 = 27.0648f;
		return 1;

	case 70:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 71:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 72:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	case 73:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		return 1;

	default: break;
	}
	return 0;
}

// Position - 0x21D3
void func_37(int iParam0, int iParam1) {
	if (iParam1) {
		if (iParam0 != 88 && iParam0 != 89 && iParam0 != 92) {
			Global_85809[iParam0 /*2*/] = 1;
		}
	}
	else {
		Global_85809[iParam0 /*2*/] = 0;
	}
}

// Position - 0x2211
void func_38() {
	Global_91526 = 1;
	if (player::is_player_being_arrested(player::player_id(), 1)) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_13()) {
			case 0: StringCopy(&Global_69934, "CMN_MARRE", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FARRE", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TARRE", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
	}
	else if (!player::is_player_playing(player::player_id())) {
		if (gameplay::is_string_null_or_empty(&Global_69934)) {
			switch (func_13()) {
			case 0: StringCopy(&Global_69934, "CMN_MDIED", 16); break;

			case 1: StringCopy(&Global_69934, "CMN_FDIED", 16); break;

			case 2: StringCopy(&Global_69934, "CMN_TDIED", 16); break;
			}
			StringCopy(&Global_69938, "", 16);
		}
		Global_91526 = 0;
		gameplay::set_bit(&Global_91491.f_20, 25);
	}
}

// Position - 0x22FC
int func_39() {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 7) {
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 2)) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x2331
bool func_40(int iParam0) {
	if (!iParam0 && script::_get_number_of_instances_of_script_with_name_hash(joaat("benchmark")) > 0) {
		return true;
	}
	return gameplay::is_bit_set(Global_69950, 0);
}

// Position - 0x235C
void func_41(char *sParam0) {
	func_490(&Global_101700.f_18922.f_1, 1024);
	if (!gameplay::is_string_null(sParam0)) {
		func_42(sParam0);
	}
}

// Position - 0x2384
void func_42(char *sParam0) {
	if (!gameplay::is_string_null_or_empty(sParam0)) {
		if (ui::get_length_of_literal_string(sParam0) <= 16) {
			StringCopy(&Global_69934, sParam0, 16);
			StringCopy(&Global_69938, "", 16);
			if (unk1::_is_recording()) {
				unk1::_stop_recording_and_save_clip();
			}
		}
	}
}

// Position - 0x23C3
void func_43(vector3 vParam0, float fParam3) {
	if (func_44(Global_69942, 0f, 0f, 0f, 0)) {
		Global_69942 = {vParam0};
		Global_69945 = fParam3;
	}
}

// Position - 0x23EF
bool func_44(vector3 vParam0, vector3 vParam3, int iParam6) {
	if (iParam6) {
		return vParam0.x == vParam3.x && vParam0.y == vParam3.y;
	}
	return vParam0.x == vParam3.x && vParam0.y == vParam3.y && vParam0.z == vParam3.z;
}

// Position - 0x2436
bool func_45() {
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		if (ped::is_ped_in_any_heli(player::player_ped_id()) || ped::is_ped_in_any_plane(player::player_ped_id())) {
			return true;
		}
	}
	return false;
}

// Position - 0x2469
float func_46(var *uParam0) {
	if (func_52(uParam0)) {
		if (func_48(uParam0)) {
			return uParam0->f_2;
		}
		else {
			return func_47(gameplay::is_bit_set(*uParam0, 4)) - uParam0->f_1;
		}
	}
	return uParam0->f_1;
}

// Position - 0x24A8
float func_47(bool bParam0) {
	float fVar0;
	float fVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	if (bParam0) {
		fVar0 = system::to_float(gameplay::get_game_timer());
		fVar1 = fVar0 / 1000f;
		return fVar1;
	}
	if (network::network_is_game_in_progress()) {
		iVar2 = network::get_network_time();
		fVar3 = system::to_float(iVar2);
		fVar4 = fVar3 / 1000f;
		return fVar4;
	}
	return system::to_float(gameplay::get_game_timer()) / 1000f;
}

// Position - 0x2500
bool func_48(var *uParam0) { return gameplay::is_bit_set(*uParam0, 2); }

// Position - 0x2510
void func_49(var *uParam0) {
	if (!func_52(uParam0)) {
		func_50(uParam0);
	}
}

// Position - 0x2528
void func_50(var *uParam0) { func_51(uParam0, 0f); }

// Position - 0x2537
void func_51(int *iParam0, float fParam1) {
	uParam0->f_1 = func_47(gameplay::is_bit_set(*uParam0, 4)) - fParam1;
	gameplay::set_bit(uParam0, 1);
	gameplay::clear_bit(iParam0, 2);
	iParam0->f_2 = 0f;
}

// Position - 0x2565
bool func_52(var *uParam0) { return gameplay::is_bit_set(*uParam0, 1); }

// Position - 0x2575
void func_53() {
	if (func_54(&iLocal_1043)) {
		func_31(6);
	}
}

// Position - 0x258C
bool func_54(int *iParam0) {
	float fVar0;
	bool bVar1;

	if (iLocal_1030 > 11) {
		if (!ped::is_ped_injured(iLocal_1045)) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
				if (ped::is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0)) {
					bVar1 = true;
				}
			}
		}
		if (bLocal_1163) {
			fVar0 = 100f;
		}
		else {
			fVar0 = 200f;
		}
		if (entity::does_entity_exist(iLocal_1045)) {
			if (!ped::is_ped_injured(iLocal_1045)) {
				if (func_24(iLocal_1044, iLocal_1045, 1) >= fVar0) {
					if (bVar1) {
						if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
							if (entity::is_entity_occluded(iLocal_1311) || !entity::is_entity_on_screen(iLocal_1311)) {
								*iParam0 = 6;
								return true;
							}
						}
					}
					else if (entity::is_entity_occluded(iLocal_1045)) {
						*iParam0 = 6;
						return true;
					}
				}
				else if (ui::does_blip_exist(iLocal_1119)) {
					if (func_24(iLocal_1044, iLocal_1045, 1) >= fVar0 * 0.5f) {
						if (!ui::is_blip_flashing(iLocal_1119)) {
							ui::set_blip_flashes(iLocal_1119, 1);
						}
					}
					else if (ui::is_blip_flashing(iLocal_1119)) {
						ui::set_blip_flashes(iLocal_1119, 0);
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x2692
void func_55() {
	if (entity::does_entity_exist(iLocal_1045)) {
		if (!ped::is_ped_injured(iLocal_1045)) {
			func_56(&iLocal_1528, iLocal_1045, 0, 0, 1, 1, 1);
		}
	}
}

// Position - 0x26BE
void func_56(int *iParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	func_57(iParam0, iParam1, sParam2, iParam3, iParam4, iParam5, iParam6);
}

// Position - 0x26D8
void func_57(int *iParam0, int iParam1, char *sParam2, int iParam3, bool bParam4, var uParam5, bool bParam6) {
	func_58(iParam0, iParam1, 0f, 0f, 0f, sParam2, iParam3, bParam4, uParam5, bParam6);
}

// Position - 0x26F5
void func_58(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			 bool bParam9) {
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
		func_79(iParam0, 0, 0);
	}
	iParam0->f_6 = 2;
	func_59(iParam0, iParam1, vParam2, sParam5, iParam6, bParam7, uParam8, bParam9);
}

// Position - 0x272D
void func_59(int *iParam0, int iParam1, vector3 vParam2, char *sParam5, int iParam6, bool bParam7, var uParam8,
			 bool bParam9) {
	int iVar0;
	int iVar1;

	if (iParam0->f_1 && cam::is_gameplay_hint_active()) {
		if (gameplay::get_game_timer() >= iParam0->f_8 + iParam0->f_9) {
			iParam0->f_1 = 0;
		}
	}
	iVar0 = sParam5;
	if (gameplay::is_string_null(iVar0)) {
		if (!network::network_is_game_in_progress()) {
			iVar0 = "CMN_HINT";
		}
		else {
			iVar0 = "FM_IHELP_HNT";
		}
	}
	if (func_78(iVar0)) {
		func_77();
	}
	if (func_76(iParam1) && entity::is_entity_visible(iParam1)) {
		iVar1 = 0;
		if (entity::is_entity_a_ped(iParam1)) {
			ped::_0x7D7A2E43E74E2EB8(entity::get_ped_index_from_entity_index(iParam1));
			ped::get_ped_flood_invincibility(entity::get_ped_index_from_entity_index(iParam1), 1);
			if (ped::is_tracked_ped_visible(entity::get_ped_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_a_vehicle(iParam1)) {
			vehicle::track_vehicle_visibility(entity::get_vehicle_index_from_entity_index(iParam1));
			if (vehicle::is_vehicle_visible(entity::get_vehicle_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		else if (entity::is_entity_an_object(iParam1)) {
			object::track_object_visibility(entity::get_object_index_from_entity_index(iParam1));
			if (object::is_object_visible(entity::get_object_index_from_entity_index(iParam1))) {
				iVar1 = 1;
			}
		}
		if (!cam::is_gameplay_hint_active()) {
			if (func_71(iParam0, bParam7, bParam9, 0)) {
				func_68(iParam0, iParam1, vParam2, iParam6);
			}
			if (*iParam0) {
				*iParam0 = 0;
			}
			else if (iParam0->f_6 == 2) {
				if (func_64(iVar0)) {
					if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0) &&
						ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
						if (iVar1 && !ui::is_help_message_being_displayed() && uParam8) {
							if (!func_78(iVar0)) {
								func_63(iVar0, -1);
								iParam0->f_3 = iVar0;
								if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
									func_62(1);
								}
							}
						}
					}
				}
			}
			else if (func_64(iVar0)) {
				if (gameplay::is_string_null(iParam0->f_3) && !gameplay::is_string_null(iVar0)) {
					if (entity::is_entity_on_screen(iParam1) && iVar1 && !ui::is_help_message_being_displayed() &&
						uParam8) {
						if (!func_78(iVar0)) {
							func_63(iVar0, -1);
							iParam0->f_3 = iVar0;
							if (gameplay::are_strings_equal("CMN_HINT", iVar0)) {
								func_62(1);
							}
						}
					}
				}
			}
		}
		else {
			if (!gameplay::is_string_null(sParam5)) {
				if (func_78(sParam5)) {
					ui::clear_help(1);
				}
			}
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (ped::is_ped_in_any_boat(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
						func_79(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
						func_79(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
						func_79(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
						func_79(iParam0, iVar0, 1);
					}
				}
				else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
					if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
						func_79(iParam0, iVar0, 1);
					}
				}
				else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
					func_79(iParam0, iVar0, 1);
				}
			}
			if (!func_71(iParam0, bParam7, bParam9, 0)) {
				if (!*iParam0 && !iParam0->f_1 && !func_61(iParam0)) {
					func_60(iParam0);
				}
			}
		}
	}
	else {
		func_79(iParam0, iVar0, 0);
	}
}

// Position - 0x2A9A
void func_60(int *iParam0) {
	if (func_76(player::player_ped_id())) {
		ai::task_clear_look_at(player::player_ped_id());
	}
	if (cam::is_gameplay_hint_active()) {
		cam::set_cinematic_button_active(1);
		cam::stop_gameplay_hint(0);
		audio::stop_audio_scene("HINT_CAM_SCENE");
		graphics::_stop_screen_effect("FocusIn");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	iParam0->f_2 = -1;
	*iParam0 = 1;
}

// Position - 0x2B03
bool func_61(var *uParam0) {
	int iVar0;

	if (uParam0->f_2 > 0) {
		iVar0 = uParam0->f_10 / 2;
		if (uParam0->f_2 + iVar0 > gameplay::get_game_timer()) {
			return true;
		}
	}
	return false;
}

// Position - 0x2B2E
int func_62(int iParam0) {
	switch (Global_35781) {
	case 0:
	case 3:
		if (iParam0) {
			Global_101700.f_9008.f_100++;
		}
		return Global_101700.f_9008.f_100;

	case 4:
		if (iParam0) {
			Global_101700.f_9008.f_101++;
		}
		return Global_101700.f_9008.f_101;

	case 5:
	case 15:
		if (iParam0) {
			Global_101700.f_9008.f_102++;
		}
		return Global_101700.f_9008.f_102;

	default: break;
	}
	return 3;
}

// Position - 0x2BD8
void func_63(char *sParam0, int iParam1) {
	ui::begin_text_command_display_help(sParam0);
	ui::end_text_command_display_help(0, 0, 1, iParam1);
}

// Position - 0x2BEF
bool func_64(char *sParam0) {
	if (!func_65(1, 1, 0)) {
		if (!gameplay::is_string_null_or_empty(sParam0) && func_78(sParam0) || func_78("CMN_HINT")) {
			ui::clear_help(1);
		}
		return false;
	}
	switch (Global_35781) {
	case 0:
	case 3:
		if (func_62(0) < 3) {
			return true;
		}
		break;

	case 4:
		if (func_62(0) < 1) {
			return true;
		}
		break;

	case 5:
	case 15:
		if (func_62(0) < 1) {
			return true;
		}
		break;

	default: break;
	}
	return false;
}

// Position - 0x2C88
int func_65(int iParam0, int iParam1, int iParam2) {
	if (iParam0) {
		if (!player::is_player_control_on(player::player_id())) {
			return 0;
		}
	}
	if (iParam2) {
		return 1;
	}
	if (streaming::is_player_switch_in_progress()) {
		return 0;
	}
	if (func_67(0)) {
		return 0;
	}
	if (func_66()) {
		return 0;
	}
	if (network::_network_is_text_chat_active()) {
		return 0;
	}
	if (Global_68131) {
		return 0;
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("appinternet")) > 0) {
		return 0;
	}
	if (Global_53003) {
		return 0;
	}
	if (iParam1) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
			if (ped::is_ped_in_any_boat(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(3) == 3 || cam::_0xEE778F8C7E1142E2(3) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_heli(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(6) == 3 || cam::_0xEE778F8C7E1142E2(6) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_plane(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(4) == 3 || cam::_0xEE778F8C7E1142E2(4) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_in_any_sub(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(5) == 3 || cam::_0xEE778F8C7E1142E2(5) == 4) {
					return 0;
				}
			}
			else if (ped::is_ped_on_any_bike(player::player_ped_id())) {
				if (cam::_0xEE778F8C7E1142E2(2) == 3 || cam::_0xEE778F8C7E1142E2(2) == 4) {
					return 0;
				}
			}
			else if (cam::get_follow_vehicle_cam_view_mode() == 3 || cam::get_follow_vehicle_cam_view_mode() == 4) {
				return 0;
			}
			if (cam::is_gameplay_cam_looking_behind()) {
				return 0;
			}
		}
	}
	return 1;
}

// Position - 0x2E04
bool func_66() { return gameplay::get_game_timer() <= Global_17290.f_5745 + 100; }

// Position - 0x2E19
bool func_67(int iParam0) {
	if (iParam0 == 1) {
		if (Global_14443.f_1 > 3) {
			if (gameplay::is_bit_set(Global_2313, 14)) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("cellphone_flashhand")) > 0) {
		return true;
	}
	if (Global_14443.f_1 > 3) {
		return true;
	}
	return false;
}

// Position - 0x2E73
void func_68(int *iParam0, int iParam1, vector3 vParam2, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (entity::is_entity_dead(iParam1, 0)) {
		func_79(iParam0, 0, 0);
	}
	if (func_44(vParam2, 0f, 0f, 0f, 0)) {
		if (entity::is_entity_a_ped(iParam1)) {
			iVar0 = entity::get_ped_index_from_entity_index(iParam1);
			if (!ped::is_ped_in_any_vehicle(iVar0, 0)) {
				if (ped::is_ped_a_player(iVar0)) {
					if (!func_69()) {
						vParam2 = {0f, 0f, 1f};
					}
				}
				else if (ped::is_ped_male(iVar0)) {
					vParam2 = {0f, 0f, 1f};
				}
			}
		}
	}
	cam::set_cinematic_button_active(0);
	iVar1 = iParam0->f_9;
	iVar2 = iParam0->f_10;
	if (iParam5 == 1726668277) {
		if (iVar1 < 1500) {
			iVar1 = 1500;
		}
		if (iVar2 < 1500) {
			iVar2 = 1500;
		}
	}
	cam::set_gameplay_entity_hint(iParam1, vParam2, 1, -1, iVar1, iVar2, iParam5);
	iVar3 = 2048;
	iVar4 = 3;
	ai::task_look_at_entity(player::player_ped_id(), iParam1, -1, iVar3, iVar4);
	graphics::_start_screen_effect("FocusIn", 0, 0);
	audio::start_audio_scene("HINT_CAM_SCENE");
	audio::play_sound_frontend(-1, "FocusIn", "HintCamSounds", 1);
	iParam0->f_11 = 1;
	iParam0->f_8 = gameplay::get_game_timer();
	iParam0->f_1 = 1;
	*iParam0 = 0;
}

// Position - 0x2F78
int func_69() { return func_70(player::player_id()); }

// Position - 0x2F88
int func_70(int iParam0) {
	if (entity::get_entity_model(player::get_player_ped(iParam0)) == joaat("mp_f_freemode_01")) {
		return 1;
	}
	return 0;
}

// Position - 0x2FA7
bool func_71(var *uParam0, bool bParam1, bool bParam2, int iParam3) {
	if (uParam0->f_1) {
		if (gameplay::get_game_timer() >= uParam0->f_8 + uParam0->f_9) {
			uParam0->f_1 = 0;
		}
	}
	switch (uParam0->f_5) {
	case 0:
		uParam0->f_7 = 0;
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (func_75(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 1;
					uParam0->f_7 = 1;
				}
			}
			else if (func_74(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (func_74(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (func_75(bParam1, bParam2, iParam3)) {
				uParam0->f_4 = gameplay::get_game_timer();
				uParam0->f_5 = 1;
				uParam0->f_7 = 1;
			}
		}
		if (func_61(uParam0)) {
			uParam0->f_7 = 1;
			uParam0->f_5 = 4;
		}
		break;

	case 1:
		if (gameplay::get_game_timer() - uParam0->f_4 <= 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (!func_75(bParam1, bParam2, iParam3)) {
						uParam0->f_4 = gameplay::get_game_timer();
						uParam0->f_5 = 3;
					}
				}
				else if (!func_74(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (!func_74(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!func_75(bParam1, bParam2, iParam3)) {
					uParam0->f_4 = gameplay::get_game_timer();
					uParam0->f_5 = 3;
				}
			}
		}
		else {
			uParam0->f_5 = 2;
		}
		break;

	case 2:
		if (uParam0->f_6 == 0) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				if (!func_75(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (!func_74(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 1) {
			if (!func_74(bParam1, bParam2, iParam3) || ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
				uParam0->f_5 = 0;
			}
		}
		else if (uParam0->f_6 == 2) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
				ai::get_is_task_active(player::player_ped_id(), 2)) {
				uParam0->f_5 = 0;
			}
			else if (!func_75(bParam1, bParam2, iParam3)) {
				uParam0->f_5 = 0;
			}
		}
		break;

	case 3:
		if (gameplay::get_game_timer() - uParam0->f_4 > 500) {
			if (uParam0->f_6 == 0) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1)) {
					if (func_73(bParam1, bParam2, iParam3)) {
						uParam0->f_5 = 0;
					}
				}
				else if (func_72(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 1) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) || func_72(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
			else if (uParam0->f_6 == 2) {
				if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 1) ||
					ai::get_is_task_active(player::player_ped_id(), 2)) {
					uParam0->f_5 = 0;
				}
				else if (func_73(bParam1, bParam2, iParam3)) {
					uParam0->f_5 = 0;
				}
			}
		}
		break;

	case 4:
		if (!func_61(uParam0)) {
			uParam0->f_5 = 0;
		}
		break;
	}
	if (!func_65(bParam1, bParam2, iParam3)) {
		uParam0->f_5 = 0;
		uParam0->f_7 = 0;
	}
	if (uParam0->f_7) {
		func_77();
		return true;
	}
	else {
		return false;
	}
	return false;
}

// Position - 0x3313
bool func_72(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_65(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_just_released(0, 80)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3365
bool func_73(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_65(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_just_released(0, 80)) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x33AE
bool func_74(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_65(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!player::is_player_targetting_anything(player::player_id())) {
			controls::disable_control_action(0, 140, 1);
			controls::disable_control_action(0, 80, 1);
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x340D
bool func_75(bool bParam0, bool bParam1, bool bParam2) {
	if (!func_65(bParam0, bParam1, bParam2)) {
		return false;
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		controls::disable_control_action(0, 80, 1);
		if (cam::is_follow_vehicle_cam_active()) {
			if (controls::is_disabled_control_pressed(0, 80) && gameplay::get_game_timer() > Global_116) {
				cam::set_cinematic_button_active(0);
				return true;
			}
		}
	}
	return false;
}

// Position - 0x3463
bool func_76(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (entity::is_entity_a_vehicle(iParam0)) {
			if (vehicle::is_vehicle_driveable(entity::get_vehicle_index_from_entity_index(iParam0), 0)) {
				return true;
			}
		}
		else if (entity::is_entity_a_ped(iParam0)) {
			if (!ped::is_ped_injured(entity::get_ped_index_from_entity_index(iParam0))) {
				return true;
			}
		}
		else if (entity::is_entity_an_object(iParam0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x34BE
void func_77() { gameplay::set_bit(&Global_2314, 4); }

// Position - 0x34CE
bool func_78(char *sParam0) {
	ui::begin_text_command_is_this_help_message_being_displayed(sParam0);
	return ui::end_text_command_is_this_help_message_being_displayed(0);
}

// Position - 0x34E1
void func_79(int *iParam0, int iParam1, int iParam2) {
	char *sVar0;

	if (network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_2494199.f_4449, 26)) {
			return;
		}
	}
	if (cam::is_gameplay_hint_active()) {
		cam::stop_gameplay_hint(iParam2);
		graphics::_stop_screen_effect("FocusIn");
		audio::stop_audio_scene("HINT_CAM_SCENE");
		if (iParam0->f_11) {
			graphics::_start_screen_effect("FocusOut", 0, 0);
			audio::play_sound_frontend(-1, "FocusOut", "HintCamSounds", 1);
			iParam0->f_11 = 0;
		}
	}
	cam::set_cinematic_button_active(1);
	iParam0->f_1 = 0;
	*iParam0 = 0;
	iParam0->f_2 = -1;
	iParam0->f_8 = 0;
	iParam0->f_5 = 0;
	iParam0->f_6 = 0;
	sVar0 = iParam1;
	if (gameplay::is_string_null(sVar0)) {
		if (!network::network_is_game_in_progress()) {
			sVar0 = "CMN_HINT";
		}
		else {
			sVar0 = "FM_IHELP_HNT";
		}
	}
	if (!gameplay::is_string_null(iParam0->f_3)) {
		if (func_78(iParam0->f_3)) {
			ui::clear_help(1);
		}
	}
	if (!gameplay::is_string_null(sVar0)) {
		if (func_78(sVar0)) {
			ui::clear_help(1);
		}
	}
}

// Position - 0x35BE
void func_80(var *uParam0, float *fParam1, int *iParam2, int *iParam3) {
	float fVar0;

	if (!*iParam2) {
		*uParam0 = gameplay::get_game_timer();
		*fParam1 /= 1000f;
		if (!func_52(&uLocal_1350)) {
			func_49(&uLocal_1350);
		}
		*iParam2 = 1;
	}
	if (func_52(&uLocal_1350)) {
		fVar0 = func_46(&uLocal_1350);
		if (fVar0 >= *fParam1) {
			*iParam3 = 1;
		}
	}
	iLocal_1212 = system::round(*fParam1 - fVar0);
	iLocal_1212 *= 1000;
	if (iLocal_1212 < 63000) {
		iLocal_1146 = 1;
	}
	if (iLocal_1212 < 65000) {
		iLocal_1153 = 1;
	}
	if (iLocal_1212 < iLocal_1209) {
		iLocal_1176 = 1;
	}
	if (!audio::request_script_audio_bank("SCRIPT\ASSASSINATION_MULTI", 0, -1)) {
		bLocal_1362 = false;
	}
	else {
		bLocal_1362 = true;
	}
	if (iLocal_1212 < 30000) {
		iLocal_1167 = 1;
		if (bLocal_1362) {
			if (func_52(&uLocal_1359)) {
				if (func_46(&uLocal_1359) > 1f) {
					audio::play_sound_frontend(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
					func_50(&uLocal_1359);
				}
			}
			else {
				audio::play_sound_frontend(-1, "ASSASSINATIONS_HOTEL_TIMER_COUNTDOWN", "ASSASSINATION_MULTI", 1);
				func_49(&uLocal_1359);
			}
		}
		func_81(iLocal_1212, "ASS_VA_TIMERED", 0, 0, -1, 0, 2, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0);
	}
	else {
		func_81(iLocal_1212, "ASS_VA_TIMELEFT", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0);
	}
}

// Position - 0x36FB
void func_81(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			 int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14,
			 int iParam15, int iParam16) {
	int iVar0;
	int iVar1;

	iVar0 = -1;
	iVar1 = 0;
	while (iVar1 <= 9) {
		if (iVar0 == -1) {
			if (func_83(7, iVar1) == 0) {
				iVar0 = iVar1;
			}
		}
		iVar1++;
	}
	if (iVar0 > -1) {
		Global_1354542.f_1 = 1;
		func_82(7, iVar0);
		Global_1354542.f_4282[iVar0] = iParam0;
		StringCopy(&Global_1354542.f_4282.f_11[iVar0 /*16*/], sParam1, 64);
		Global_1354542.f_4282.f_172[iVar0] = iParam2;
		Global_1354542.f_4282.f_216[iVar0] = iParam3;
		Global_1354542.f_4282.f_183[iVar0] = iParam4;
		Global_1354542.f_4282.f_194[iVar0] = iParam5;
		Global_1354542.f_4282.f_249[iVar0] = iParam6;
		Global_1354542.f_4282.f_260[iVar0] = iParam7;
		Global_1354542.f_4282.f_205[iVar0] = iParam8;
		Global_1354542.f_4282.f_314[iVar0] = iParam9;
		Global_1354542.f_4282.f_325[iVar0] = iParam10;
		Global_1354542.f_4282.f_357[iVar0] = iParam11;
		Global_1354542.f_4282.f_238[iVar0] = iParam12;
		Global_1354542.f_4282.f_271[iVar0] = iParam13;
		Global_1354542.f_4282.f_368[iVar0] = iParam14;
		Global_1354542.f_4282.f_379[iVar0] = iParam15;
		Global_1354542.f_4282.f_390[iVar0] = iParam16;
	}
}

// Position - 0x3849
void func_82(int iParam0, int iParam1) { gameplay::set_bit(&Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x3862
int func_83(int iParam0, int iParam1) { return gameplay::is_bit_set(Global_1354542.f_5703[iParam0], iParam1); }

// Position - 0x387B
void func_84() {
	int iVar0;

	switch (iLocal_1206) {
	case 0:
		if (!func_22()) {
			if (!entity::is_entity_dead(uLocal_1049[0], 0)) {
				ai::task_clear_look_at(uLocal_1049[0]);
			}
			if (!entity::is_entity_dead(uLocal_1049[1], 0)) {
				ai::task_clear_look_at(uLocal_1049[1]);
			}
			iVar0 = func_88();
			if (bLocal_1156) {
				if (!iLocal_1172) {
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1363, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0)) {
						iLocal_1172 = 1;
					}
				}
			}
			else if (!bLocal_1163 && ped::is_ped_injured(iLocal_1045)) {
				if (!iLocal_1172) {
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1363, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0)) {
						iLocal_1172 = 1;
					}
				}
			}
			if (!func_52(&uLocal_1338)) {
				func_49(&uLocal_1338);
			}
			else {
				func_50(&uLocal_1338);
			}
			iLocal_1206 = 1;
		}
		break;

	case 1: iLocal_1206 = 2; break;

	case 2:
		if (iLocal_1172 || !ped::is_ped_injured(iLocal_1045)) {
			if (!func_22() && !bLocal_1156) {
				if (!iLocal_1170) {
					iVar0 = func_88();
					func_28(iVar0, 3, "OJAvaGUARD");
					if (func_6(&uLocal_1363, "OJASAUD", "OJASva_LOOK", 9, 0, 0, 0)) {
						iLocal_1170 = 1;
					}
				}
				else if (!iLocal_1180 && ped::is_ped_injured(iLocal_1045)) {
					iVar0 = func_88();
					func_87(iVar0);
				}
			}
		}
		else if (bLocal_1156) {
			if (!iLocal_1172) {
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_6(&uLocal_1363, "OJASAUD", "OJASva_EXPLO", 9, 0, 0, 0)) {
					iLocal_1172 = 1;
				}
			}
		}
		else if (!bLocal_1163) {
			if (!iLocal_1172) {
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_6(&uLocal_1363, "OJASAUD", "OJASva_SNIPE", 9, 0, 0, 0)) {
					iLocal_1172 = 1;
				}
			}
		}
		if (func_86(iLocal_1044)) {
			fLocal_1243 = 2.5f;
		}
		else {
			fLocal_1243 = 5f;
		}
		if (func_52(&uLocal_1338)) {
			if (func_46(&uLocal_1338) > fLocal_1243 && func_85() || ped::is_ped_shooting(player::player_ped_id())) {
				func_3();
				if (!iLocal_1133) {
					iLocal_1133 = 1;
					iLocal_1177 = 1;
				}
				iLocal_1157 = 0;
			}
		}
		break;

	case 3: break;
	}
}

// Position - 0x3AC5
int func_85() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(uLocal_1049[iVar0]) && !entity::is_entity_dead(uLocal_1049[iVar0], 0)) {
			ped::set_ped_reset_flag(uLocal_1049[iVar0], 85, 1);
			if (ped::_0x6CD5A433374D4CFB(uLocal_1049[iVar0], player::player_ped_id())) {
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (entity::does_entity_exist(uLocal_1053[iVar0]) && !entity::is_entity_dead(uLocal_1053[iVar0], 0)) {
			ped::set_ped_reset_flag(uLocal_1053[iVar0], 85, 1);
			if (ped::_0x6CD5A433374D4CFB(uLocal_1053[iVar0], player::player_ped_id())) {
				return 1;
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (entity::does_entity_exist(uLocal_1046[iVar0]) && !entity::is_entity_dead(uLocal_1046[iVar0], 0)) {
			ped::set_ped_reset_flag(uLocal_1046[iVar0], 85, 1);
			if (ped::_0x6CD5A433374D4CFB(uLocal_1046[iVar0], player::player_ped_id())) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x3BD0
bool func_86(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_in_angled_area(iParam0, -1252.302f, -213.9033f, 35.11222f, -1205.808f, -183.0681f,
											  45.32541f, 51f, 0, 1, 0) &&
			!entity::is_entity_in_angled_area(iParam0, -1250.809f, -192.5218f, 35.33125f, -1231.866f, -161.3655f,
											  45.02535f, 12.8f, 0, 1, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x3C48
void func_87(int iParam0) {
	if (!iLocal_1180) {
		if (entity::does_entity_exist(iLocal_1045) && ped::is_ped_injured(iLocal_1045)) {
			if (!func_22()) {
				if (entity::does_entity_exist(iParam0) && !ped::is_ped_injured(iParam0) && func_23(iParam0, 1) < 75f) {
					func_28(iParam0, 3, "OJAvaGUARD");
					func_6(&uLocal_1363, "OJASAUD", "OJAS_FEED", 9, 0, 0, 0);
					iLocal_1180 = 1;
				}
			}
		}
	}
}

// Position - 0x3CBD
int func_88() {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3) {
		if (entity::does_entity_exist(uLocal_1049[iVar1]) && !ped::is_ped_injured(uLocal_1049[iVar1])) {
			iVar0 = uLocal_1049[iVar1];
		}
		iVar1++;
	}
	if (iVar0 == 0) {
		iVar1 = 0;
		while (iVar1 < 2) {
			if (entity::does_entity_exist(uLocal_1053[iVar1]) && !ped::is_ped_injured(uLocal_1053[iVar1])) {
				iVar0 = uLocal_1053[iVar1];
			}
			iVar1++;
		}
	}
	if (iVar0 == 0) {
		iVar1 = 0;
		while (iVar1 < 2) {
			if (entity::does_entity_exist(uLocal_1046[iVar1]) && !ped::is_ped_injured(uLocal_1046[iVar1])) {
				iVar0 = uLocal_1046[iVar1];
			}
			iVar1++;
		}
	}
	return iVar0;
}

// Position - 0x3D81
void func_89() {
	func_96();
	if (!iLocal_1157) {
		if (!iLocal_1133) {
			if (func_90(&iLocal_1043)) {
				iLocal_1133 = 1;
			}
		}
	}
}

// Position - 0x3DA9
bool func_90(int *iParam0) {
	int iVar0;
	float fVar1;
	int iVar2;

	if (!iLocal_1133) {
		if (iLocal_1167 && !iLocal_1136) {
			if (func_95(&iLocal_1043)) {
				*iParam0 = 8;
				return true;
			}
		}
		if (weapon::is_ped_armed(iLocal_1044, 4)) {
			if (ped::is_ped_shooting(iLocal_1044)) {
				fVar1 = func_26(player::player_ped_id(), -1230.599f, -196.5408f, 38.1528f, 1);
				weapon::get_current_ped_weapon(iLocal_1044, &iVar2, 1);
				if (fVar1 > 15f && iVar2 == joaat("weapon_sniperrifle") || iVar2 == joaat("weapon_heavysniper") ||
					iVar2 == joaat("weapon_remotesniper") || iVar2 == joaat("weapon_marksmanrifle")) {
					if (entity::does_entity_exist(iLocal_1045)) {
						iLocal_1157 = 1;
						iLocal_1155 = 1;
					}
				}
				else if (fVar1 < 50f) {
					return true;
				}
			}
		}
		if (func_94(iLocal_1311) || func_93(iLocal_1311) ||
			entity::does_entity_exist(iLocal_1311) &&
				entity::has_entity_been_damaged_by_entity(iLocal_1311, iLocal_1044, 1)) {
			return true;
		}
		if (func_94(iLocal_1312) || entity::does_entity_exist(iLocal_1312) &&
										entity::has_entity_been_damaged_by_entity(iLocal_1312, iLocal_1044, 1)) {
			return true;
		}
		if (entity::does_entity_exist(iLocal_1311) && !entity::is_entity_dead(iLocal_1311, 0)) {
			if (ped::is_ped_in_vehicle(iLocal_1044, iLocal_1311, 0)) {
				vehicle::set_vehicle_alarm(iLocal_1311, 1);
				vehicle::start_vehicle_alarm(iLocal_1311);
				return true;
			}
		}
		if (entity::does_entity_exist(iLocal_1311)) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
				if (ped::is_ped_in_any_vehicle(iLocal_1044, 0)) {
					iVar0 = ped::get_vehicle_ped_is_in(iLocal_1044, 0);
					if (entity::is_entity_touching_entity(iVar0, iLocal_1311) ||
						bLocal_1143 && vehicle::is_vehicle_attached_to_tow_truck(iVar0, iLocal_1311)) {
						*iParam0 = 4;
						return true;
					}
				}
			}
		}
		if (iLocal_1030 == 12) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
				if (func_24(iLocal_1044, iLocal_1311, 1) <= 15f) {
					return true;
				}
			}
		}
		if (iLocal_1032[0] == 2 || iLocal_1032[1] == 2 || iLocal_1032[2] == 2) {
			if (func_92()) {
				return true;
			}
		}
		if (iLocal_1030 < 11) {
			if (fire::is_explosion_in_sphere(-1, vLocal_1307, fLocal_1310)) {
				return true;
			}
		}
		else if (fire::is_explosion_in_sphere(-1, vLocal_1307, fLocal_1310)) {
			if (func_91()) {
				iLocal_1187 = 1;
			}
			else {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x400B
bool func_91() {
	if (entity::is_entity_in_angled_area(player::player_ped_id(), -1272.181f, -241.2545f, 62.90406f, -1300.203f,
										 -201.3968f, 40.40408f, 44.5f, 0, 0, 0) ||
		entity::is_entity_in_angled_area(player::player_ped_id(), -1270.125f, -253.9321f, 62.90407f, -1311.414f,
										 -193.6588f, 38.23291f, 44.5f, 0, 0, 0)) {
		return true;
	}
	return false;
}

// Position - 0x407D
bool func_92() {
	int iVar0;

	if (weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1)) {
		if (iVar0 == joaat("weapon_stickybomb")) {
			if (player::is_player_free_aiming(player::player_id())) {
				if (ped::is_ped_on_foot(player::player_ped_id()) && controls::is_control_pressed(0, 24) ||
					ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) && controls::is_control_pressed(0, 69)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x40DF
int func_93(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::get_vehicle_door_lock_status(iParam0) == 3 &&
				ped::set_exclusive_phone_relationships(iLocal_1044) == iParam0) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x4119
int func_94(int iParam0) {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0) != 0) {
				if (weapon::get_current_ped_weapon(player::player_ped_id(), &iVar0, 1)) {
					if (iVar0 == joaat("weapon_stickybomb")) {
						if (func_24(player::player_ped_id(), iParam0, 1) < 40f) {
							if (player::get_entity_player_is_free_aiming_at(player::player_id(), &iVar1)) {
								if (entity::is_entity_a_vehicle(iVar1) &&
										entity::get_vehicle_index_from_entity_index(iVar1) == iParam0 ||
									entity::is_entity_a_ped(iVar1) &&
										entity::get_ped_index_from_entity_index(iVar1) ==
											vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0)) {
									if (ped::is_ped_on_foot(player::player_ped_id()) &&
											controls::is_control_pressed(0, 24) ||
										ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
											controls::is_control_pressed(0, 69)) {
										return 1;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

// Position - 0x41E7
bool func_95(int *iParam0) {
	if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
		if (weapon::has_vehicle_got_projectile_attached(player::player_ped_id(), iLocal_1311,
														joaat("weapon_stickybomb"), -1)) {
			if (gameplay::is_projectile_type_in_angled_area(-1223.024f, -187.3076f, 39.02538f, -1220.311f, -186.2481f,
															40.42538f, 6.5f, joaat("weapon_stickybomb"), 0) ||
				gameplay::is_projectile_type_in_angled_area(-1223.024f, -187.3076f, 38.02538f, -1220.311f, -186.2481f,
															40.42538f, 4.5f, joaat("weapon_stickybomb"), 0)) {
				*iParam0 = 8;
				return true;
			}
		}
	}
	return false;
}

// Position - 0x427B
void func_96() {
	int iVar0;

	func_137();
	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(uLocal_1049[iVar0])) {
			if (iLocal_1133 && !iLocal_1166) {
				func_136(uLocal_1049[iVar0], &Local_1059[iVar0 /*8*/], -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (entity::does_entity_exist(uLocal_1053[iVar0])) {
			if (iLocal_1133 && !iLocal_1166) {
				func_136(uLocal_1053[iVar0], &Local_1084[iVar0 /*8*/], -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (entity::does_entity_exist(uLocal_1046[iVar0])) {
			if (iLocal_1133 && !iLocal_1166) {
				func_136(uLocal_1046[iVar0], &Local_1101[iVar0 /*8*/], -1, 0, 0, 0, 150f, 0, -1, -1, 1);
			}
			if (!ped::is_ped_injured(uLocal_1046[iVar0])) {
				if (iLocal_1040[iVar0] == 4) {
					ped::set_ped_reset_flag(uLocal_1046[iVar0], 128, 1);
				}
			}
		}
		iVar0++;
	}
	if (iLocal_1203 == 0) {
		func_134(0);
	}
	else if (iLocal_1203 == 1) {
		func_134(1);
	}
	else if (iLocal_1203 == 2) {
		if (iLocal_1030 >= 9) {
			func_123(0);
		}
	}
	else if (iLocal_1203 == 3) {
		if (iLocal_1030 >= 9) {
			func_123(1);
		}
	}
	else if (iLocal_1203 == 4) {
		if (iLocal_1030 >= 9) {
			func_123(2);
			func_122(-1222.558f, -173.7471f, 38.32541f, -1220.101f, -169.0531f, 42.07541f, 4f);
		}
	}
	else if (iLocal_1203 == 5) {
		func_97(0);
		func_122(-1213.432f, -191.3261f, 38.32541f, -1208.553f, -193.8618f, 42.07534f, 4f);
	}
	else if (iLocal_1203 == 6) {
		func_97(1);
		func_122(-1219.14f, -202.3124f, 38.32534f, -1214.269f, -204.9035f, 42.07534f, 4f);
	}
	iLocal_1203++;
	if (iLocal_1203 > 6) {
		iLocal_1203 = 0;
	}
	if (iLocal_1133) {
		if (!entity::is_entity_dead(iLocal_1045, 0)) {
			ped::set_ped_reset_flag(iLocal_1045, 120, 1);
		}
	}
}

// Position - 0x44B2
void func_97(int iParam0) {
	int iVar0;
	vector3 vVar1;
	var uVar4;
	int iVar5;

	iVar0 = uLocal_1053[iParam0];
	switch (iLocal_1036[iParam0]) {
	case 0:
		if (iLocal_1146) {
			iLocal_1036[iParam0] = 1;
		}
		else if (bLocal_1144) {
			iLocal_1036[iParam0] = 3;
		}
		break;

	case 1:
		if (vehicle::is_vehicle_driveable(iLocal_1312, 0)) {
			if (func_121()) {
				if (!ai::is_waypoint_playback_going_on_for_vehicle(iLocal_1312)) {
					if (vehicle::get_ped_in_vehicle_seat(iLocal_1312, -1, 0) == uLocal_1053[iParam0]) {
						ai::task_vehicle_follow_waypoint_recording(uLocal_1053[iParam0], iLocal_1312, "OJASva_104", 948,
																   0, 16, 18, 6f, 0, 1073741824);
					}
				}
				iLocal_1036[iParam0] = 2;
			}
			else {
				func_120(iParam0);
			}
		}
		break;

	case 2:
		if (vehicle::is_vehicle_driveable(iLocal_1312, 0)) {
			if (!ai::is_waypoint_playback_going_on_for_vehicle(iLocal_1312)) {
				vVar1 = {entity::get_entity_coords(iLocal_1312, 1)};
				uVar4 = entity::get_entity_heading(iLocal_1312);
				iLocal_1146 = 0;
				iLocal_1036[iParam0] = 0;
			}
		}
		break;

	case 3:
		if (vehicle::is_vehicle_driveable(iLocal_1312, 0)) {
			if (!entity::is_entity_dead(uLocal_1053[iParam0], 0)) {
				if (ped::is_ped_in_vehicle(uLocal_1053[iParam0], iLocal_1312, 0) &&
					vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
					if (!iLocal_1133) {
						if (vehicle::get_ped_in_vehicle_seat(iLocal_1312, -1, 0) == uLocal_1053[iParam0]) {
							if (ai::get_script_task_status(uLocal_1053[iParam0], -1273030092) != 1) {
								ai::task_vehicle_escort(uLocal_1053[iParam0], iLocal_1312, iLocal_1311, -1, 45f, 786981,
														10f, -1, 10f);
							}
						}
					}
					else if (vehicle::get_ped_in_vehicle_seat(iLocal_1312, -1, 0) == uLocal_1053[iParam0]) {
						if (!iLocal_1147) {
							if (entity::is_entity_dead(iLocal_1045, 0)) {
								if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
									ai::task_combat_ped(iVar0, player::player_ped_id(), 0, 16);
								}
								else {
									iLocal_1036[iParam0] = 8;
								}
							}
							else {
								ai::task_vehicle_escort(uLocal_1053[iParam0], iLocal_1312, iLocal_1311, -1, 45f, 786981,
														10f, -1, 10f);
								ai::add_vehicle_subtask_attack_ped(iVar0, player::player_ped_id());
								iLocal_1147 = 1;
							}
						}
					}
					else if (!bLocal_1163) {
						if (ai::get_script_task_status(uLocal_1053[iParam0], 780511057) != 1) {
							if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								if (entity::get_entity_speed(iLocal_1312) < 5f) {
									iLocal_1036[iParam0] = 8;
								}
							}
							ai::task_combat_ped(iVar0, player::player_ped_id(), 0, 16);
						}
					}
					else if (ai::get_script_task_status(uLocal_1053[iParam0], 780511057) != 1) {
						ai::task_combat_ped(iVar0, player::player_ped_id(), 0, 16);
					}
				}
				else if (!iLocal_1157) {
					iLocal_1036[iParam0] = 8;
				}
			}
		}
		break;

	case 4:
		if (!func_52(&uLocal_1332)) {
			func_50(&uLocal_1332);
		}
		func_117(&uLocal_1053[iParam0]);
		iLocal_1036[iParam0] = 5;
		break;

	case 5:
		if (!func_86(iLocal_1044)) {
			if (func_46(&uLocal_1332) >= 27f || player::is_player_wanted_level_greater(player::player_id(), 0)) {
				if (!ped::is_ped_injured(iVar0)) {
					if (entity::is_entity_at_entity(iLocal_1044, iVar0, 5f, 5f, 3f, 0, 1, 0)) {
						func_116(iVar0, 5f, 5f, 3f);
					}
					else {
						func_120(iParam0);
					}
				}
			}
		}
		else {
			iLocal_1036[iParam0] = 0;
		}
		break;

	case 6:
		if (bLocal_1158) {
			ai::open_sequence_task(&iLocal_1323);
			ai::task_leave_any_vehicle(0, 0, 0);
			ai::task_look_at_coord(0, func_115(), gameplay::get_random_int_in_range(1000, 1500), 2048, 4);
			ai::task_look_at_coord(0, func_115(), gameplay::get_random_int_in_range(2000, 2500), 2048, 4);
			ai::task_go_to_entity(0, player::player_ped_id(), gameplay::get_random_int_in_range(10000, 11000), 30f, 1f,
								  1073741824, 0);
			ai::task_go_to_entity_while_aiming_at_coord(0, player::player_ped_id(), func_115(), 1f, 0, 1056964608,
														1082130432, 1, 0, -957453492);
			ai::close_sequence_task(iLocal_1323);
			if (!ped::is_ped_injured(uLocal_1053[iParam0])) {
				ai::task_perform_sequence(uLocal_1053[iParam0], iLocal_1323);
			}
			ai::clear_sequence_task(&iLocal_1323);
		}
		else {
			ai::open_sequence_task(&iLocal_1323);
			ai::task_leave_any_vehicle(0, 0, 0);
			ai::task_aim_gun_at_coord(0, func_115(), gameplay::get_random_int_in_range(3000, 3500), 1, 0);
			ai::task_aim_gun_at_coord(0, func_115(), gameplay::get_random_int_in_range(3000, 3500), 0, 0);
			ai::task_aim_gun_at_coord(0, func_115(), gameplay::get_random_int_in_range(3000, 3500), 0, 0);
			ai::task_aim_gun_at_coord(0, func_115(), gameplay::get_random_int_in_range(3000, 3500), 0, 0);
			ai::task_aim_gun_at_coord(0, func_115(), -1, 0, 0);
			ai::close_sequence_task(iLocal_1323);
			if (!ped::is_ped_injured(uLocal_1053[iParam0])) {
				ai::task_perform_sequence(uLocal_1053[iParam0], iLocal_1323);
			}
			ai::clear_sequence_task(&iLocal_1323);
		}
		iLocal_1036[iParam0] = 7;
		break;

	case 7:
		if (!ped::is_ped_injured(uLocal_1053[iParam0])) {
			if (ai::get_script_task_status(uLocal_1053[iParam0], 1435919172) != 1) {
				ai::task_go_to_entity_while_aiming_at_entity(uLocal_1053[iParam0], iLocal_1044, iLocal_1044, 1f, 0, -1f,
															 1082130432, 1, 0, -957453492);
			}
		}
		break;

	case 8:
		if (iLocal_1043 != 4 && iLocal_1043 != 5) {
			func_114(iVar0);
		}
		else {
			func_113(iVar0);
		}
		iLocal_1036[iParam0] = 9;
		break;

	case 9:
		if (iParam0 == 0) {
			if (iLocal_1043 != 4) {
				func_112(iLocal_1312, iVar0, 1112014848, 1112014848, 1092616192);
			}
		}
		func_2(iVar0);
		func_87(iVar0);
		break;
	}
	if (!iLocal_1133) {
		if (iLocal_1157) {
			if (iLocal_1036[iParam0] != 6 && iLocal_1036[iParam0] != 7) {
				iLocal_1036[iParam0] = 6;
			}
		}
		else if (func_105(iVar0, iLocal_1312, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) || func_104(iLocal_1312)) {
			iVar5 = func_30(1116471296, 1);
			if (iVar5 != 0) {
				func_103(entity::get_entity_coords(iVar5, 1), 1097859072, 1116471296);
			}
			if (!func_102()) {
				iLocal_1133 = 1;
			}
		}
		else if (!iLocal_1136) {
			if (func_101(iVar0, 10f)) {
				if (iLocal_1036[iParam0] != 4 && iLocal_1036[iParam0] != 5) {
					if (!iLocal_1134) {
						func_99(&Local_360, 4);
						iLocal_1036[iParam0] = 4;
					}
					else if (!func_86(iLocal_1044)) {
						iLocal_1133 = 1;
						if (!entity::does_entity_exist(iLocal_1045)) {
							iLocal_1043 = 5;
						}
						iLocal_1036[iParam0] = 8;
					}
				}
			}
		}
	}
	else if (!ped::is_ped_injured(iVar0)) {
		if (ped::is_ped_in_vehicle(iVar0, iLocal_1312, 0)) {
			if (!vehicle::is_vehicle_driveable(iLocal_1312, 0) || !vehicle::is_vehicle_driveable(iLocal_1311, 0) ||
				iLocal_1145 || !iLocal_1136) {
				if (iLocal_1036[iParam0] < 8) {
					iLocal_1036[iParam0] = 8;
				}
			}
		}
		else if (iLocal_1036[iParam0] < 8) {
			iLocal_1036[iParam0] = 8;
		}
	}
	func_98(iVar0, uLocal_1124[iParam0]);
}

// Position - 0x4B6A
void func_98(int iParam0, int iParam1) {
	if (entity::does_entity_exist(iParam0)) {
		if (ped::is_ped_injured(iParam0)) {
			if (ui::does_blip_exist(iParam1)) {
				ui::remove_blip(&iParam1);
			}
		}
	}
}

// Position - 0x4B93
void func_99(int *iParam0, int iParam1) { func_100(iParam0, iParam1); }

// Position - 0x4BA3
void func_100(int *iParam0, var uParam1) { *iParam0 -= (*iParam0 & uParam1); }

// Position - 0x4BB8
bool func_101(int iParam0, float fParam1) {
	if (!iLocal_1133) {
		if (!func_86(iLocal_1044)) {
			if (entity::does_entity_exist(iParam0)) {
				if (!ped::is_ped_injured(iParam0)) {
					if (func_23(iParam0, 0) <= fParam1) {
						if (ped::is_ped_facing_ped(iParam0, iLocal_1044, 120f)) {
							if (entity::has_entity_clear_los_to_entity(iParam0, iLocal_1044, 17)) {
								if (!entity::is_entity_in_angled_area(player::player_ped_id(), -1251.791f, -147.043f,
																	  42.679f, -1197.245f, -212.232f, 50.679f, 35f, 1,
																	  1, 0) &&
									!entity::is_entity_in_angled_area(player::player_ped_id(), -1259.282f, -204.172f,
																	  -60.654f, -1304.335f, -235.719f, 60.654f, 85f, 1,
																	  1, 0)) {
									return true;
								}
							}
						}
					}
				}
			}
		}
		else if (entity::does_entity_exist(iParam0)) {
			if (!ped::is_ped_injured(iParam0)) {
				if (entity::is_entity_at_entity(iLocal_1044, iParam0, 5f, 5f, 1f, 0, 1, 0)) {
					if (ped::is_ped_facing_ped(iParam0, iLocal_1044, 120f)) {
						if (entity::has_entity_clear_los_to_entity(iParam0, iLocal_1044, 17)) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x4CCD
int func_102() {
	if (iLocal_1157 || bLocal_1158) {
		return 1;
	}
	return 0;
}

// Position - 0x4CE9
void func_103(vector3 vParam0, float fParam3, float fParam4) {
	int iVar0;
	float fVar1;

	if (!entity::does_entity_exist(iLocal_1045)) {
		return;
	}
	if (!entity::does_entity_exist(iLocal_1311)) {
		return;
	}
	if (entity::is_entity_dead(iLocal_1311, 0) || iLocal_1187) {
		bLocal_1156 = true;
	}
	if (entity::does_entity_exist(iLocal_1045)) {
		if (weapon::has_entity_been_damaged_by_weapon(iLocal_1045, joaat("weapon_sniperrifle"), 0) ||
			weapon::has_entity_been_damaged_by_weapon(iLocal_1045, joaat("weapon_heavysniper"), 0) ||
			weapon::has_entity_been_damaged_by_weapon(iLocal_1045, joaat("weapon_remotesniper"), 0) ||
			weapon::has_entity_been_damaged_by_weapon(iLocal_1045, joaat("weapon_marksmanrifle"), 0)) {
			iLocal_1155 = 1;
			iLocal_1031 = 1;
		}
	}
	if (iLocal_371 == 4 || iLocal_371 == 8) {
		if (!ai::is_waypoint_playback_going_on_for_vehicle(iLocal_1311)) {
			fParam3 *= 2f;
			iVar0 = 1;
		}
	}
	if (!iLocal_1133) {
		if (iLocal_1155 || bLocal_1156 || iVar0) {
			fVar1 = func_26(player::player_ped_id(), vParam0, 1);
			if (fVar1 > fParam3) {
				iLocal_1157 = 1;
				if (fVar1 > fParam4) {
					bLocal_1158 = true;
				}
			}
		}
	}
}

// Position - 0x4DF0
bool func_104(int iParam0) {
	int iVar0;
	float fVar1;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					if (entity::does_entity_exist(iVar0) && vehicle::is_vehicle_driveable(iVar0, 0)) {
						fVar1 = entity::get_entity_speed(iVar0);
						if (fVar1 > 7f) {
							if (entity::is_entity_touching_entity(iVar0, iParam0) ||
								entity::has_entity_been_damaged_by_entity(iVar0, iParam0, 1)) {
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x4E72
bool func_105(int iParam0, int iParam1, int *iParam2, int *iParam3, int iParam4, int iParam5, int iParam6, int iParam7,
			  int iParam8) {
	int iVar0;
	bool bVar1;

	iVar0 = player::player_ped_id();
	if (!entity::is_entity_dead(iVar0, 0) && !entity::is_entity_dead(iParam0, 0)) {
		if (!func_111(*iParam2, 1)) {
			if (func_110(iParam0, iParam2)) {
				*iParam3 = 1;
				return true;
			}
		}
		if (!func_111(*iParam2, 2)) {
			if (player::get_player_wanted_level(player::player_id()) > 0) {
				*iParam3 = 2;
				return true;
			}
		}
		if (!func_111(*iParam2, 4)) {
			if (func_109(iVar0, iParam0, iParam2, iParam5)) {
				*iParam3 = 4;
				return true;
			}
		}
		if (!func_111(*iParam2, 8)) {
			if (func_108(iVar0, iParam0, iParam2)) {
				*iParam3 = 8;
				return true;
			}
		}
		bVar1 = !func_111(*iParam2, 128);
		if (iParam4) {
			if (func_106(iParam0, iParam1, 1, iParam6, bVar1, 1)) {
				*iParam3 = 32;
				return true;
			}
		}
		else if (!func_111(*iParam2, 16)) {
			if (func_106(iParam0, iParam1, 0, iParam6, bVar1, iParam8)) {
				*iParam3 = 16;
				return true;
			}
		}
	}
	else if (entity::does_entity_exist(iParam0)) {
		if (iParam7 && entity::has_entity_been_damaged_by_entity(iParam0, iVar0, 1)) {
			*iParam3 = 16;
			return true;
		}
	}
	return false;
}

// Position - 0x4F9C
bool func_106(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5) {
	int iVar0;
	int iVar1;

	if (bParam3) {
		if (!bLocal_356) {
			iLocal_357 = entity::get_entity_health(iParam0);
			bLocal_356 = true;
		}
		iLocal_358 = entity::get_entity_health(iParam0);
		iLocal_359 = iLocal_357 - iLocal_358;
		iVar0 = player::get_players_last_vehicle();
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, iVar0, 1)) {
				if (IntToFloat(iLocal_359) > 100f) {
					return true;
				}
			}
		}
		if (bLocal_356) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
				if (IntToFloat(iLocal_359) > 100f) {
					return true;
				}
			}
		}
	}
	else if (entity::has_entity_been_damaged_by_entity(iParam0, player::player_ped_id(), 1)) {
		return true;
	}
	if (!bParam3) {
		iVar1 = player::get_players_last_vehicle();
		if (!entity::is_entity_dead(iVar1, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam0, iVar1, 1)) {
				return true;
			}
		}
	}
	if (bParam4) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (ped::is_ped_being_jacked(iParam0)) {
				if (ped::get_peds_jacker(iParam0) == player::player_ped_id()) {
					return true;
				}
			}
		}
	}
	if (iParam5) {
		if (ped::is_ped_in_melee_combat(player::player_ped_id())) {
			if (entity::is_entity_at_coord(iParam0, entity::get_entity_coords(player::player_ped_id(), 1), 10f, 10f,
										   10f, 0, 1, 0)) {
				if (player::has_player_damaged_at_least_one_ped(player::player_id())) {
					return true;
				}
			}
		}
	}
	if (ped::is_ped_performing_stealth_kill(player::player_ped_id())) {
		if (ped::was_ped_killed_by_stealth(iParam0)) {
			return true;
		}
	}
	if (func_107(player::player_ped_id(), iParam0)) {
		return true;
	}
	if (iParam2) {
		if (ped::is_ped_ragdoll(iParam0) && func_23(iParam0, 1) < 1.5f) {
			return true;
		}
		else if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
			if (entity::is_entity_touching_entity(player::player_ped_id(), ped::get_vehicle_ped_is_in(iParam0, 0))) {
				return true;
			}
		}
		else if (entity::is_entity_touching_entity(player::player_ped_id(), iParam0)) {
			return true;
		}
		if (!entity::is_entity_dead(iParam1, 0)) {
			if (entity::has_entity_been_damaged_by_entity(iParam1, player::player_ped_id(), 1)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x516E
bool func_107(int iParam0, int iParam1) {
	int iVar0;

	weapon::get_current_ped_weapon(iParam0, &iVar0, 1);
	if (iVar0 == joaat("weapon_petrolcan")) {
		if (ped::is_ped_shooting(iParam0)) {
			if (system::vdist(entity::get_entity_coords(iParam0, 1), entity::get_entity_coords(iParam1, 1)) < 2.5f) {
				if (ped::is_ped_facing_ped(iParam0, iParam1, 180f)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x51C3
bool func_108(int iParam0, int iParam1, var *uParam2) {
	if (weapon::is_ped_armed(iParam0, 4)) {
		if (ped::is_ped_shooting(iParam0) && !weapon::is_ped_current_weapon_silenced(iParam0)) {
			if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1), IntToFloat(uParam2->f_4),
										   IntToFloat(uParam2->f_4), IntToFloat(uParam2->f_4), 0, 1, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x5211
bool func_109(int iParam0, int iParam1, var *uParam2, bool bParam3) {
	vector3 vVar0;
	int iVar3;

	iVar3 = 0;
	if (!entity::is_entity_dead(iParam1, 0)) {
		vVar0 = {entity::get_entity_coords(iParam1, 1)};
	}
	if (gameplay::is_bullet_in_area(vVar0, 4f, 1)) {
		return true;
	}
	if (gameplay::has_bullet_impacted_in_area(vVar0, system::to_float(uParam2->f_6), 1, 1)) {
		return true;
	}
	if (weapon::is_ped_armed(iParam0, 2)) {
		if (ped::is_ped_shooting(iParam0)) {
			if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1), IntToFloat(uParam2->f_6 * 3),
										   IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3), 0, 1, 0)) {
				if (ped::is_ped_facing_ped(entity::get_ped_index_from_entity_index(iParam1), iParam0, 120f) &&
					entity::has_entity_clear_los_to_entity(iParam1, iParam0, 17)) {
					return true;
				}
			}
		}
		else {
			if (ped::is_ped_in_any_vehicle(entity::get_ped_index_from_entity_index(iParam1), 0)) {
				iVar3 = ped::get_vehicle_ped_is_in(entity::get_ped_index_from_entity_index(iParam1), 0);
			}
			if (ped::is_ped_planting_bomb(iParam0) || func_94(iVar3)) {
				if (entity::is_entity_at_coord(iParam1, entity::get_entity_coords(iParam0, 1),
											   IntToFloat(uParam2->f_6 * 3), IntToFloat(uParam2->f_6 * 3),
											   IntToFloat(uParam2->f_6 * 3), 0, 1, 0)) {
					if (ped::is_ped_facing_ped(entity::get_ped_index_from_entity_index(iParam1), iParam0, 120f) &&
						entity::has_entity_clear_los_to_entity(iParam1, iParam0, 17)) {
						return true;
					}
				}
			}
		}
	}
	if (bParam3) {
		if (gameplay::is_projectile_in_area(vVar0.x - IntToFloat(uParam2->f_6), vVar0.y - IntToFloat(uParam2->f_6),
											vVar0.z - IntToFloat(uParam2->f_6), vVar0.x + IntToFloat(uParam2->f_6),
											vVar0.y + IntToFloat(uParam2->f_6), vVar0.z + IntToFloat(uParam2->f_6),
											0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x538A
bool func_110(int iParam0, var *uParam1) {
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (weapon::is_ped_armed(player::player_ped_id(), 6)) {
			if (player::is_player_free_aiming_at_entity(player::player_id(), iParam0) ||
				player::is_player_targetting_entity(player::player_id(), iParam0)) {
				if (ped::is_ped_facing_ped(iParam0, player::player_ped_id(), 90f)) {
					if (func_23(iParam0, 1) < uParam1->f_2) {
						if (uParam1->f_1 == 0) {
							uParam1->f_1 = gameplay::get_game_timer();
						}
						else if (gameplay::get_game_timer() - uParam1->f_1 > uParam1->f_3) {
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

// Position - 0x540F
bool func_111(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x541E
void func_112(int iParam0, int iParam1, float fParam2, float fParam3, float fParam4) {
	if (!ped::is_ped_injured(iParam1)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (func_24(iParam1, iParam0, 0) > fParam2 && func_23(iParam1, 1) < fParam3) {
					if (!ped::is_ped_in_vehicle(iParam1, iParam0, 0)) {
						if (ai::get_script_task_status(iParam1, -1794415470) != 1) {
							ai::task_enter_vehicle(iParam1, iParam0, 20000, -1, 2f, 1, 0);
						}
					}
					else if (ai::get_script_task_status(iParam1, -1273030092) != 1) {
						ai::task_vehicle_mission(iParam1, iParam0,
												 ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 6, 35f, 786469,
												 -1f, -1f, 1);
						ai::add_vehicle_subtask_attack_ped(iParam1, player::player_ped_id());
					}
				}
				else if (!ped::is_ped_in_vehicle(iParam1, iParam0, 0)) {
					if (ai::get_script_task_status(iParam1, 780511057) != 1) {
						ai::task_combat_ped(iParam1, player::player_ped_id(), 0, 16);
					}
				}
			}
			else if (ped::is_ped_in_vehicle(iParam1, iParam0, 0)) {
				if (func_23(iParam1, 1) > fParam4) {
					if (ai::get_script_task_status(iParam1, -1273030092) != 1) {
						ai::task_vehicle_mission_ped_target(iParam1, iParam0, player::player_ped_id(), 6, 35f, 786469,
															-1f, -1f, 1);
						ai::add_vehicle_subtask_attack_ped(iParam1, player::player_ped_id());
					}
				}
				else if (ai::get_script_task_status(iParam1, 780511057) != 1) {
					ai::task_combat_ped(iParam1, player::player_ped_id(), 0, 16);
				}
			}
		}
		else if (ai::get_script_task_status(iParam1, 780511057) != 1) {
			ai::task_combat_ped(iParam1, player::player_ped_id(), 0, 16);
		}
	}
}

// Position - 0x5585
void func_113(int iParam0) {
	int iVar0;

	if (!ped::is_ped_injured(iLocal_1044) && !ped::is_ped_injured(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			ped::set_ped_combat_attributes(iParam0, 3, 1);
		}
		ai::clear_sequence_task(&iVar0);
		ai::open_sequence_task(&iVar0);
		ai::task_leave_any_vehicle(0, 0, 256);
		ai::task_aim_gun_at_entity(0, iLocal_1044, -1, 0);
		ai::close_sequence_task(iVar0);
		ai::task_perform_sequence(iParam0, iVar0);
		ai::clear_sequence_task(&iVar0);
	}
}

// Position - 0x55EA
void func_114(int iParam0) {
	if (!entity::is_entity_dead(iLocal_1044, 0)) {
		if (!ped::is_ped_in_any_vehicle(iLocal_1044, 0)) {
			if (!entity::is_entity_dead(iParam0, 0)) {
				ped::set_ped_combat_attributes(iParam0, 3, 1);
			}
			ai::clear_sequence_task(&iLocal_1323);
			ai::open_sequence_task(&iLocal_1323);
			ai::task_leave_any_vehicle(0, 0, 256);
			ai::task_combat_ped(0, iLocal_1044, 0, 16);
			ai::close_sequence_task(iLocal_1323);
			if (!entity::is_entity_dead(iParam0, 0)) {
				ai::task_perform_sequence(iParam0, iLocal_1323);
			}
			ai::clear_sequence_task(&iLocal_1323);
		}
		else if (!ped::is_ped_injured(iParam0)) {
			if (ai::get_script_task_status(iParam0, 780511057) != 1) {
				ai::clear_ped_tasks(iParam0);
				ai::task_combat_ped(iParam0, iLocal_1044, 0, 16);
			}
		}
	}
}

// Position - 0x568F
Vector3 func_115() {
	vector3 vVar0;
	int iVar3;

	iVar3 = gameplay::get_random_int_in_range(0, 65535) % 3;
	switch (iVar3) {
	case 0: vVar0 = {-1270.206f, -200.3586f, 40.8333f}; break;

	case 1: vVar0 = {-1268.439f, -215.9683f, 59.654f}; break;

	case 2: vVar0 = {-1241.558f, -239.3237f, 38.7884f}; break;
	}
	return vVar0;
}

// Position - 0x5703
void func_116(int iParam0, vector3 vParam1) {
	if (!iLocal_1133) {
		if (!ped::is_ped_injured(iParam0)) {
			if (entity::is_entity_at_entity(iLocal_1044, iParam0, vParam1, 0, 1, 0)) {
				if (ped::is_ped_facing_ped(iParam0, iLocal_1044, 160f)) {
					if (entity::has_entity_clear_los_to_entity(iParam0, iLocal_1044, 17)) {
						ai::task_go_to_entity_while_aiming_at_entity(iParam0, iLocal_1044, iLocal_1044, 1f, 0, -1f,
																	 1082130432, 1, 0, -957453492);
						iLocal_1043 = 5;
						iLocal_1133 = 1;
					}
				}
			}
			else if (!ped::is_ped_in_any_vehicle(iParam0, 0)) {
				if (ai::get_script_task_status(iParam0, -1207174364) != 1) {
					ai::task_go_to_entity_while_aiming_at_entity(iParam0, iLocal_1044, iLocal_1044, 1f, 0, -1f,
																 1082130432, 1, 0, -957453492);
				}
			}
		}
	}
}

// Position - 0x57A9
void func_117(int iParam0) {
	int iVar0;
	vector3 vVar1;

	if (iLocal_1056 == 0) {
		iLocal_1056 = func_30(70f, 0);
	}
	if (!ped::is_ped_injured(*iParam0)) {
		if (!ped::is_ped_in_any_vehicle(*iParam0, 0)) {
			if (!iLocal_1135) {
				if (*iParam0 == iLocal_1056) {
					ai::clear_sequence_task(&iVar0);
					ai::open_sequence_task(&iVar0);
					ai::task_go_to_entity(0, iLocal_1044, 20000, 2f, 1f, 1073741824, 0);
					ai::task_turn_ped_to_face_entity(0, iLocal_1044, -1);
					ai::close_sequence_task(iVar0);
					ai::task_perform_sequence(*iParam0, iVar0);
					ai::clear_sequence_task(&iVar0);
					iLocal_1135 = 1;
					vVar1 = {entity::get_entity_coords(*iParam0, 1)};
				}
				else if (ai::get_script_task_status(*iParam0, 1227113341) != 1) {
					ai::task_turn_ped_to_face_entity(*iParam0, iLocal_1044, -1);
				}
			}
			else if (*iParam0 != iLocal_1056) {
				if (ai::get_script_task_status(*iParam0, 1227113341) != 1) {
					ai::task_turn_ped_to_face_entity(*iParam0, iLocal_1044, -1);
				}
			}
		}
		ped::set_ped_can_be_targetted(*iParam0, 1);
		func_118();
	}
}

// Position - 0x5890
void func_118() {
	int iVar0;

	if (!iLocal_1137) {
		if (!iLocal_1148) {
			if (!func_22()) {
				iVar0 = func_30(1116471296, 1);
				func_28(iVar0, 3, "OJAvaGUARD");
				if (func_119()) {
					func_6(&uLocal_1363, "OJASAUD", "OJASva_CAR", 9, 0, 0, 0);
					iLocal_1137 = 1;
				}
				else {
					func_27(&uLocal_1363, "OJASAUD", "OJASva_GTFO2", "OJASva_GTFO2_1", 9, 0, 0);
					iLocal_1137 = 1;
				}
			}
		}
	}
}

// Position - 0x5901
bool func_119() {
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
		if (!entity::is_entity_dead(iLocal_1311, 0)) {
			vVar3 = {entity::get_entity_coords(iLocal_1311, 1)};
		}
		fVar6 = system::vdist2(vVar0, vVar3);
		if (fVar6 <= 25f) {
			return true;
		}
	}
	return false;
}

// Position - 0x5958
void func_120(int iParam0) {
	int iVar0;

	iLocal_1134 = 1;
	if (iParam0 == 0) {
		iVar0 = -1;
	}
	else if (iParam0 == 1) {
		iVar0 = 0;
	}
	if (!entity::is_entity_dead(uLocal_1053[iParam0], 0)) {
		if (vehicle::is_vehicle_driveable(iLocal_1312, 0)) {
			if (!ped::is_ped_in_vehicle(uLocal_1053[iParam0], iLocal_1312, 0)) {
				if (ai::get_script_task_status(uLocal_1053[iParam0], -1794415470) != 1) {
					ai::task_enter_vehicle(uLocal_1053[iParam0], iLocal_1312, 20000, iVar0, 2f, 1, 0);
				}
			}
		}
	}
}

// Position - 0x59D5
bool func_121() {
	if (!ped::is_ped_injured(uLocal_1053[0]) && !ped::is_ped_injured(uLocal_1053[1])) {
		if (ped::is_ped_in_vehicle(uLocal_1053[0], iLocal_1312, 0) &&
			ped::is_ped_in_vehicle(uLocal_1053[1], iLocal_1312, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x5A24
void func_122(vector3 vParam0, vector3 vParam3, float fParam6) {
	if (!iLocal_1133) {
		if (gameplay::is_projectile_type_in_angled_area(vParam0, vParam3, fParam6, joaat("weapon_stickybomb"), 0)) {
			iLocal_1133 = 1;
		}
	}
}

// Position - 0x5A4E
void func_123(int iParam0) {
	int iVar0;
	float fVar1;
	int iVar2;

	iVar0 = uLocal_1049[iParam0];
	switch (iLocal_1032[iParam0]) {
	case 0:
		if (!ped::is_ped_injured(iVar0)) {
			ai::clear_sequence_task(&iLocal_1323);
			ai::open_sequence_task(&iLocal_1323);
			ai::task_go_to_coord_any_means(0, vLocal_1267[iParam0 /*3*/], 1f, 0, 0, 786603, -1082130432);
			ai::task_achieve_heading(0, fLocal_1220[iParam0], 0);
			ai::close_sequence_task(iLocal_1323);
			ai::task_perform_sequence(iVar0, iLocal_1323);
			ai::clear_sequence_task(&iLocal_1323);
			iLocal_1032[iParam0] = 1;
		}
		break;

	case 1:
		if (entity::does_entity_exist(iVar0)) {
			if (!entity::is_entity_dead(iVar0, 0)) {
				if (!iLocal_1168) {
					if (ai::get_script_task_status(iVar0, -2017877118) != 1 &&
						ai::get_script_task_status(iVar0, 242628503) != 1) {
						if (entity::is_entity_at_coord(iVar0, vLocal_1267[iParam0 /*3*/], 3f, 3f, 3f, 0, 1, 0)) {
							func_131(iVar0, &uLocal_1195[iParam0], 1);
						}
						else {
							iLocal_1032[iParam0] = 0;
						}
					}
				}
			}
		}
		break;

	case 3:
		if (!func_52(&uLocal_1332)) {
			func_50(&uLocal_1332);
			func_117(&iVar0);
			iLocal_1032[iParam0] = 2;
		}
		else if (func_46(&uLocal_1332) > uLocal_1226[iParam0] ||
				 player::is_player_wanted_level_greater(player::player_id(), 0)) {
			func_117(&iVar0);
			iLocal_1032[iParam0] = 2;
		}
		break;

	case 2:
		if (!func_86(iLocal_1044)) {
			iLocal_1161 = 1;
			if (bLocal_1160) {
				iLocal_1032[iParam0] = 4;
				break;
			}
			else if (func_46(&uLocal_1332) >= 27f && iLocal_1137) {
				func_116(iVar0, 15f, 15f, 3f);
			}
			else if (func_46(&uLocal_1332) >= 15f) {
				func_129(iVar0);
			}
		}
		else {
			iLocal_1161 = 0;
			iLocal_1134 = 1;
			if (!iLocal_1154) {
				iLocal_1032[iParam0] = 0;
			}
			else {
				iLocal_1032[iParam0] = 4;
			}
		}
		break;

	case 4:
		if (!ped::is_ped_injured(iVar0)) {
			ped::set_ped_can_be_targetted(iVar0, 1);
			ped::set_ped_reset_flag(iVar0, 60, 1);
		}
		if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
			if (!ped::is_ped_injured(iVar0)) {
				if (iParam0 == 0) {
					ai::task_look_at_entity(uLocal_1049[0], uLocal_1049[1], -1, 0, 2);
					if (!ped::is_ped_in_vehicle(iVar0, iLocal_1311, 0)) {
						ai::task_enter_vehicle(iVar0, iLocal_1311, 30000, -1, 1f, 1, 0);
					}
				}
				else if (iParam0 == 1) {
					ai::task_look_at_entity(uLocal_1049[1], uLocal_1049[0], -1, 0, 2);
					if (!ped::is_ped_in_vehicle(iVar0, iLocal_1311, 0)) {
						ai::task_enter_vehicle(iVar0, iLocal_1311, 30000, 0, 1f, 1, 0);
					}
				}
				else if (iParam0 == 2) {
					if (vehicle::is_vehicle_driveable(iLocal_1312, 0)) {
						if (!ped::is_ped_in_vehicle(iVar0, iLocal_1312, 0)) {
							ai::task_enter_vehicle(iVar0, iLocal_1312, 30000, 1, 1f, 1, 0);
						}
					}
				}
			}
			iLocal_1032[iParam0] = 5;
		}
		else {
			iLocal_1032[iParam0] = 10;
		}
		break;

	case 5:
		if (!ped::is_ped_injured(iVar0)) {
			ped::set_ped_reset_flag(iVar0, 60, 1);
		}
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (ai::get_script_task_status(iVar0, 150319005) != 1) {
				if (iParam0 == 0) {
					ai::task_look_at_entity(uLocal_1049[iParam0], uLocal_1049[1], -1, 2048, 4);
				}
				else if (iParam0 == 1) {
					ai::task_look_at_entity(uLocal_1049[iParam0], uLocal_1049[0], -1, 2048, 4);
				}
			}
		}
		if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
			if (!func_127()) {
				if (iLocal_1133) {
					if (!ped::is_ped_injured(iVar0)) {
						if (ai::get_script_task_status(iVar0, 780511057) != 1) {
							if (func_126(uLocal_1049[0])) {
								ai::task_clear_look_at(uLocal_1049[0]);
							}
							if (func_126(uLocal_1049[1])) {
								ai::task_clear_look_at(uLocal_1049[1]);
							}
							ai::task_combat_ped(iVar0, iLocal_1044, 0, 16);
						}
					}
				}
			}
			else {
				iLocal_1032[iParam0] = 6;
			}
		}
		else {
			iLocal_1032[iParam0] = 10;
		}
		if (bLocal_1149) {
			if (iLocal_1032[iParam0] != 10 && iLocal_1032[iParam0] != 11) {
				iLocal_1032[iParam0] = 10;
			}
		}
		break;

	case 6:
		if (!iLocal_1133) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
				if (vehicle::get_ped_in_vehicle_seat(iLocal_1311, -1, 0) == iVar0) {
					if (!ped::is_ped_injured(iVar0)) {
						vehicle::set_vehicle_engine_on(iLocal_1311, 1, 1, 0);
						if (func_125()) {
							ai::task_vehicle_follow_waypoint_recording(iVar0, iLocal_1311, "OJASva_101a", 181, 0, 16,
																	   -1, 10f, 0, 1073741824);
						}
						else {
							ai::task_vehicle_follow_waypoint_recording(iVar0, iLocal_1311, "OJASva_101", 181, 0, 0, -1,
																	   -1f, 0, 1073741824);
						}
					}
				}
				iLocal_1032[iParam0] = 7;
			}
		}
		else {
			if (func_126(uLocal_1049[0])) {
				ai::task_clear_look_at(uLocal_1049[0]);
			}
			if (func_126(uLocal_1049[1])) {
				ai::task_clear_look_at(uLocal_1049[1]);
			}
			iLocal_1032[iParam0] = 7;
		}
		break;

	case 7:
		if (iLocal_1133) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0) &&
				vehicle::get_ped_in_vehicle_seat(iLocal_1311, -1, 0) == iVar0 &&
				vehicle::get_ped_in_vehicle_seat(iLocal_1311, 1, 0) == iLocal_1045) {
				if (!ped::is_ped_injured(iVar0)) {
					if (iLocal_1148 || iLocal_1162 && !ai::is_waypoint_playback_going_on_for_vehicle(iLocal_1311)) {
						ai::clear_ped_tasks(iVar0);
						if (!ped::is_ped_injured(player::player_ped_id())) {
							if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
								if (ai::get_script_task_status(iVar0, -1273030092) != 1) {
									ai::task_vehicle_mission(iVar0, iLocal_1311,
															 ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), 8,
															 35f, 786469, -1f, -1f, 1);
								}
							}
							else if (ai::get_script_task_status(iVar0, -1273030092) != 1) {
								ai::task_vehicle_mission_ped_target(iVar0, iLocal_1311, player::player_ped_id(), 8, 35f,
																	786469, -1f, -1f, 1);
							}
						}
					}
				}
			}
			else if (!ped::is_ped_injured(iVar0)) {
				if (ai::get_script_task_status(iVar0, 780511057) != 1) {
					ai::task_combat_ped(iVar0, iLocal_1044, 0, 16);
				}
			}
		}
		else if (iLocal_1148 || iLocal_1162 && !ai::is_waypoint_playback_going_on_for_vehicle(iLocal_1311)) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
				if (vehicle::get_ped_in_vehicle_seat(iLocal_1311, -1, 0) == iVar0) {
					if (!entity::is_entity_dead(iVar0, 0)) {
						if (ai::get_script_task_status(iVar0, -1273030092) != 1) {
							ai::task_vehicle_mission_coors_target(iVar0, iLocal_1311, vLocal_1289, 8, 25f, 786603, -1f,
																  -1f, 1);
						}
					}
				}
			}
		}
		break;

	case 8:
		if (bLocal_1158) {
			ai::open_sequence_task(&iLocal_1323);
			ai::task_leave_any_vehicle(0, 0, 0);
			ai::task_look_at_coord(0, func_115(), gameplay::get_random_int_in_range(1000, 1500), 2048, 4);
			ai::task_go_to_entity(0, player::player_ped_id(), gameplay::get_random_int_in_range(15000, 16000), 30f, 1f,
								  1073741824, 0);
			ai::task_go_to_entity_while_aiming_at_coord(0, player::player_ped_id(), func_115(), 1f, 0, 1056964608,
														1082130432, 1, 0, -957453492);
			ai::close_sequence_task(iLocal_1323);
			if (!entity::is_entity_dead(uLocal_1049[iParam0], 0)) {
				ai::task_perform_sequence(uLocal_1049[iParam0], iLocal_1323);
			}
			ai::clear_sequence_task(&iLocal_1323);
		}
		else {
			ai::open_sequence_task(&iLocal_1323);
			ai::task_leave_any_vehicle(0, 0, 0);
			ai::task_aim_gun_at_coord(0, func_115(), gameplay::get_random_int_in_range(3000, 3500), 1, 0);
			ai::task_go_to_entity_while_aiming_at_coord(0, player::player_ped_id(), func_115(), 1f, 0, 1056964608,
														1082130432, 1, 0, -957453492);
			ai::close_sequence_task(iLocal_1323);
			if (!entity::is_entity_dead(uLocal_1049[iParam0], 0)) {
				ai::task_perform_sequence(uLocal_1049[iParam0], iLocal_1323);
			}
			ai::clear_sequence_task(&iLocal_1323);
		}
		iLocal_1032[iParam0] = 9;
		break;

	case 9:
		if (!ped::is_ped_injured(uLocal_1049[iParam0])) {
			if (ai::get_script_task_status(uLocal_1049[iParam0], 1435919172) != 1) {
				ai::task_go_to_entity_while_aiming_at_entity(uLocal_1049[iParam0], iLocal_1044, iLocal_1044, 1f, 0, -1f,
															 1082130432, 1, 0, -957453492);
			}
		}
		break;

	case 10:
		if (iLocal_1043 == 4 || iLocal_1043 == 5) {
			func_113(iVar0);
		}
		else if (iLocal_1043 != 8) {
			func_114(iVar0);
			iLocal_1032[iParam0] = 11;
		}
		break;

	case 11:
		if (iParam0 == 0) {
			func_112(iLocal_1311, iVar0, 1112014848, 1112014848, 1092616192);
		}
		func_2(iVar0);
		func_87(iVar0);
		break;
	}
	if (iLocal_1030 < 10) {
		fVar1 = 5f;
	}
	else {
		fVar1 = fLocal_1233;
	}
	if (!iLocal_1133) {
		if (iLocal_1157) {
			if (iLocal_1032[iParam0] != 8 && iLocal_1032[iParam0] != 9) {
				iLocal_1032[iParam0] = 8;
			}
		}
		else if (func_124(iVar0)) {
			iVar2 = func_30(1116471296, 1);
			if (iVar2 != 0) {
				func_103(entity::get_entity_coords(iVar2, 1), 1097859072, 1116471296);
			}
			if (!func_102()) {
				iLocal_1133 = 1;
			}
		}
		else if (!iLocal_1136) {
			if (func_101(iVar0, fVar1)) {
				if (iLocal_1032[iParam0] != 3 && iLocal_1032[iParam0] != 2 && !bLocal_1160) {
					if (!iLocal_1134) {
						func_99(&Local_360, 4);
						iLocal_1032[iParam0] = 3;
					}
					else if (!func_86(iLocal_1044)) {
						iLocal_1133 = 1;
						if (!entity::does_entity_exist(iLocal_1045)) {
							iLocal_1043 = 5;
						}
					}
				}
			}
		}
	}
	else if (iLocal_1032[iParam0] != 10 && iLocal_1032[iParam0] != 11 && iLocal_1032[iParam0] != 7) {
		iLocal_1032[iParam0] = 10;
	}
	func_98(iVar0, uLocal_1120[iParam0]);
}

// Position - 0x638A
bool func_124(int iParam0) {
	int iVar0;

	if (!iLocal_1133) {
		if (entity::does_entity_exist(iParam0)) {
			if (!ped::is_ped_injured(iParam0)) {
				if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
					iVar0 = ped::get_vehicle_ped_is_in(iParam0, 0);
				}
				else {
					iVar0 = 0;
				}
			}
			if (func_105(iParam0, iVar0, &Local_360, &iLocal_371, 0, 0, 0, 1, 1) ||
				ped::is_ped_ragdoll(iParam0) && func_23(iParam0, 1) < 1.5f) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x63FE
bool func_125() {
	int iVar0;
	int iVar1[10];

	uLocal_1211 = ped::get_ped_nearby_vehicles(player::player_ped_id(), &iVar1);
	uLocal_1211 = uLocal_1211;
	uLocal_1211 = iVar1;
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (entity::does_entity_exist(iVar1[iVar0]) && !entity::is_entity_dead(iVar1[iVar0], 0)) {
			if (entity::is_entity_in_angled_area(iVar1[iVar0], -1218.844f, -278.623f, 36.8196f, -1248.403f, -225.8467f,
												 43.15606f, 8.5f, 0, 1, 0)) {
				iLocal_1210++;
			}
		}
		iVar0++;
	}
	if (iLocal_1210 >= 1) {
		iLocal_1162 = 1;
		return true;
	}
	return false;
}

// Position - 0x64A3
bool func_126(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (!entity::is_entity_dead(iParam0, 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x64C4
bool func_127() {
	if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
		if (!ped::is_ped_injured(iLocal_1045)) {
			if (!iLocal_1133) {
				if (ped::is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0) && func_128()) {
					return true;
				}
			}
			else if (ped::is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x651A
int func_128() {
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 <= 1) {
		if (!ped::is_ped_injured(uLocal_1046[iVar0])) {
			if (!ped::is_ped_in_any_vehicle(uLocal_1046[iVar0], 0)) {
				iVar1 = 0;
			}
		}
		iVar0++;
	}
	return iVar1;
}

// Position - 0x655B
void func_129(int iParam0) {
	switch (iLocal_1207) {
	case 0:
		if (!entity::is_entity_dead(iParam0, 0)) {
			if (ai::get_script_task_status(iParam0, 1630799643) != 1) {
				ai::task_aim_gun_at_entity(iParam0, player::player_ped_id(), -1, 0);
			}
			func_28(iParam0, 3, "OJAvaGUARD");
			func_6(&uLocal_1363, "OJASAUD", "OJASva_FWARN", 9, 0, 0, 0);
			iLocal_1137 = 1;
			iLocal_1207 = 1;
		}
		break;

	case 1: func_130(iParam0); break;
	}
}

// Position - 0x65CF
void func_130(int iParam0) {
	if (!ped::is_ped_injured(iParam0)) {
		if (func_23(iParam0, 1) < 5f) {
			if (ai::get_script_task_status(iParam0, -1207174364) != 1 &&
				ai::get_script_task_status(iParam0, 1630799643) != 1) {
				ai::task_aim_gun_at_entity(iParam0, iLocal_1044, -1, 0);
			}
		}
		else if (ai::get_script_task_status(iParam0, -1207174364) != 1) {
			if (iParam0 == iLocal_1056) {
				ai::task_go_to_entity_while_aiming_at_entity(iParam0, iLocal_1044, iLocal_1044, 1f, 0, -1f, 1082130432,
															 1, 0, -957453492);
			}
			else if (ai::get_script_task_status(iParam0, 1630799643) != 1) {
				ai::task_aim_gun_at_entity(iParam0, iLocal_1044, -1, 0);
			}
		}
	}
}

// Position - 0x666C
void func_131(int iParam0, int *iParam1, int iParam2) {
	if (!ped::is_ped_injured(iParam0)) {
		if (iParam2) {
			func_132(iParam0, iParam1);
		}
	}
}

// Position - 0x668B
void func_132(int iParam0, int *iParam1) {
	int iVar0;

	iVar0 = func_133(0, 3, *iParam1);
	if (iVar0 == 0) {
		ai::task_play_anim(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_a", 8f, -8f, -1, 1,
						   gameplay::get_random_float_in_range(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 1) {
		ai::task_play_anim(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_earpiece_b", 8f, -8f, -1, 1,
						   gameplay::get_random_float_in_range(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 2) {
		ai::task_play_anim(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_fold_arms", 8f, -8f, -1, 1,
						   gameplay::get_random_float_in_range(0f, 1f), 1, 0, 0);
	}
	else if (iVar0 == 3) {
		ai::task_play_anim(iParam0, "ODDJOBS@ASSASSINATE@GUARD", "unarmed_look", 8f, -8f, -1, 1,
						   gameplay::get_random_float_in_range(0f, 1f), 1, 0, 0);
	}
	*iParam1 = iVar0;
}

// Position - 0x6760
int func_133(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam0 == iParam1) {
		return 0;
	}
	iVar0 = gameplay::get_random_int_in_range(iParam0, iParam1);
	while (iVar0 == iParam2 || iVar1 < 50) {
		iVar1++;
		iVar0 = gameplay::get_random_int_in_range(iParam0, iParam1);
	}
	return iVar0;
}

// Position - 0x67A8
void func_134(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	vector3 vVar4;
	vector3 vVar7;

	if (!entity::does_entity_exist(uLocal_1046[iParam0])) {
		return;
	}
	switch (iLocal_1040[iParam0]) {
	case 0:
		if (!entity::is_entity_dead(iLocal_1045, 0)) {
			if (!ped::is_ped_in_any_vehicle(iLocal_1045, 0)) {
				if (!ped::is_ped_injured(uLocal_1046[iParam0])) {
					if (iParam0 == 0) {
						ai::task_follow_to_offset_of_entity(uLocal_1046[iParam0], iLocal_1045, 1.5f, 0f, 0f, 1f, -1,
															1036831949, 1);
					}
					else if (iParam0 == 1) {
						if (vehicle::is_vehicle_driveable(iLocal_1312, 0)) {
							ai::open_sequence_task(&iVar2);
							ai::task_go_to_coord_any_means(0, -1222.992f, -191.0932f, 38.17538f, 1f, 0, 0, 786603,
														   -1082130432);
							ai::task_start_scenario_in_place(0, "WORLD_HUMAN_GUARD_STAND", 0, 0);
							ai::task_enter_vehicle(0, iLocal_1312, 30000, 2, 1f, 1, 0);
							ai::close_sequence_task(iVar2);
							ai::task_perform_sequence(uLocal_1046[iParam0], iVar2);
							ai::clear_sequence_task(&iVar2);
						}
					}
					iLocal_1040[iParam0] = 1;
				}
			}
		}
		break;

	case 1:
		if (iParam0 == 0) {
			iVar0 = iLocal_1311;
			iVar1 = 2;
		}
		else if (iParam0 == 1) {
			iVar0 = iLocal_1312;
			iVar1 = 2;
		}
		if (!entity::is_entity_dead(uLocal_1046[iParam0], 0)) {
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (!entity::is_entity_dead(uLocal_1046[iParam0], 0)) {
					if (!ped::is_ped_in_vehicle(uLocal_1046[iParam0], iVar0, 0)) {
						if (ped::is_ped_in_any_vehicle(iLocal_1045, 0)) {
							if (ai::get_script_task_status(uLocal_1046[iParam0], -1794415470) != 1) {
								ai::task_enter_vehicle(uLocal_1046[iParam0], iVar0, 30000, iVar1, 1f, 1, 0);
							}
						}
					}
					else {
						iLocal_1040[iParam0] = 2;
					}
				}
			}
		}
		break;

	case 2:
		if (iParam0 == 0) {
			iVar0 = iLocal_1311;
		}
		else if (iParam0 == 1) {
			iVar0 = iLocal_1312;
		}
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			if (!entity::is_entity_dead(uLocal_1046[iParam0], 0)) {
				if (ped::is_ped_in_vehicle(uLocal_1046[iParam0], iVar0, 0) &&
					vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
					if (iLocal_1133) {
						if (!bLocal_1163) {
							if (ai::get_script_task_status(uLocal_1046[iParam0], 780511057) != 1) {
								if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
									if (entity::get_entity_speed(iVar0) < 5f) {
										iLocal_1040[iParam0] = 5;
									}
								}
								ai::task_combat_ped(uLocal_1046[iParam0], player::player_ped_id(), 0, 16);
							}
						}
						else if (ai::get_script_task_status(uLocal_1046[iParam0], 780511057) != 1) {
							ai::task_combat_ped(uLocal_1046[iParam0], player::player_ped_id(), 0, 16);
						}
					}
				}
				else if (!iLocal_1157) {
					iLocal_1040[iParam0] = 5;
				}
			}
		}
		break;

	case 3:
		if (!ped::is_ped_injured(uLocal_1046[iParam0])) {
			if (ped::is_ped_using_any_scenario(uLocal_1046[iParam0])) {
				ped::_0xF1C03A5352243A30(uLocal_1046[iParam0]);
			}
		}
		if (bLocal_1158) {
			ai::open_sequence_task(&iLocal_1323);
			ai::task_leave_any_vehicle(0, 0, 0);
			ai::task_look_at_coord(0, func_115(), gameplay::get_random_int_in_range(2000, 2500), 2048, 4);
			ai::task_go_to_entity(0, player::player_ped_id(), gameplay::get_random_int_in_range(15000, 16000), 30f, 1f,
								  1073741824, 0);
			ai::task_go_to_entity_while_aiming_at_coord(0, player::player_ped_id(), func_115(), 1f, 0, 1056964608,
														1082130432, 1, 0, -957453492);
			ai::close_sequence_task(iLocal_1323);
			ai::task_perform_sequence(uLocal_1046[iParam0], iLocal_1323);
			ai::clear_sequence_task(&iLocal_1323);
		}
		else if (!ped::is_ped_injured(uLocal_1046[iParam0])) {
			ped::set_ped_sphere_defensive_area(uLocal_1046[iParam0], vLocal_1304, 15f, 0, 0);
			ped::set_ped_combat_movement(uLocal_1046[iParam0], 1);
			ped::set_ped_combat_attributes(uLocal_1046[iParam0], 0, 1);
			ped::set_ped_max_move_blend_ratio(uLocal_1046[iParam0], 2f);
			if (!iLocal_1130 && !ped::is_ped_in_any_vehicle(uLocal_1046[iParam0], 0)) {
				ai::open_sequence_task(&iLocal_1323);
				if (ped::is_ped_injured(iLocal_1045)) {
					ai::task_play_anim(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1250, 0, 0, 0, 0, 0);
					ai::task_aim_gun_at_coord(0, func_115(), 3000, 0, 1);
					ai::task_aim_gun_at_entity(0, player::player_ped_id(), -1, 0);
				}
				else {
					ai::task_play_anim(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 700, 0, 0, 0, 0, 0);
					ai::task_follow_to_offset_of_entity(0, iLocal_1045, 1.5f, 0f, 0f, 2f, -1, 1036831949, 1);
				}
				ai::close_sequence_task(iLocal_1323);
				iLocal_1130 = 1;
			}
			else {
				if (entity::does_entity_exist(iLocal_1311) && vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
					vVar4 = {entity::get_world_position_of_entity_bone(
						iLocal_1311, entity::get_entity_bone_index_by_name(iLocal_1311, "wheel_lr"))};
					vVar7 = {entity::get_entity_coords(iLocal_1311, 1)};
					vVar7 = {vVar4 - vVar7};
					ped::_0xE4723DB6E736CCFF(uLocal_1046[iParam0], iLocal_1311, vVar7, 1.5f, 0);
				}
				ai::open_sequence_task(&iLocal_1323);
				ai::task_leave_any_vehicle(0, 0, 0);
				if (ped::is_ped_injured(iLocal_1045) && !func_44(func_135(), vVar4, 0)) {
					ai::task_go_to_coord_while_aiming_at_coord(0, vVar4, func_115(), 2f, 0, 0.5f, 4f, 1, 0, 0,
															   -957453492);
					ai::task_put_ped_directly_into_cover(0, vVar4, -1, 0, 0.25f, 0, 0, 0, 1);
				}
				else {
					ai::task_aim_gun_at_coord(0, func_115(), 1500, 1, 0);
					if (!entity::is_entity_dead(iLocal_1045, 0)) {
						ai::task_follow_to_offset_of_entity(0, iLocal_1045, 0f, -1.5f, 0f, 2f, -1, 1036831949, 1);
					}
				}
				ai::close_sequence_task(iLocal_1323);
			}
			if (!entity::is_entity_dead(uLocal_1046[iParam0], 0)) {
				ai::task_perform_sequence(uLocal_1046[iParam0], iLocal_1323);
			}
			ai::clear_sequence_task(&iLocal_1323);
		}
		iLocal_1040[iParam0] = 4;
		break;

	case 4:
		if (!entity::is_entity_dead(uLocal_1046[iParam0], 0)) {
			if (entity::is_entity_playing_anim(uLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter", 3)) {
				fVar3 =
					entity::get_entity_anim_current_time(uLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter");
				if (fVar3 < 0.5f) {
					entity::set_entity_anim_speed(uLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter", 3.5f);
				}
				else {
					entity::set_entity_anim_speed(uLocal_1046[iParam0], "oddjobs@assassinate@hotel@", "enter", 1f);
				}
			}
		}
		break;

	case 5:
		if (iParam0 == 0) {
			iVar0 = iLocal_1311;
		}
		else if (iParam0 == 1) {
			iVar0 = iLocal_1312;
		}
		if (!ped::is_ped_injured(iLocal_1045)) {
			if (!ped::is_ped_injured(uLocal_1046[iParam0])) {
				if (ped::is_ped_in_any_vehicle(iLocal_1045, 0)) {
					ai::task_combat_ped(uLocal_1046[iParam0], iLocal_1044, 0, 16);
				}
				else {
					ai::task_go_to_entity_while_aiming_at_entity(uLocal_1046[iParam0], iLocal_1045,
																 player::player_ped_id(), 3f, 1, 0.005f, 1082130432, 1,
																 0, -957453492);
				}
			}
			iLocal_1040[iParam0] = 6;
		}
		else if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			if (entity::get_entity_speed(iVar0) < 5f) {
				func_114(uLocal_1046[iParam0]);
				iLocal_1040[iParam0] = 6;
			}
			else if (ai::get_script_task_status(uLocal_1046[iParam0], 780511057) != 1) {
				ai::task_combat_ped(uLocal_1046[iParam0], iLocal_1044, 0, 16);
			}
		}
		else {
			func_114(uLocal_1046[iParam0]);
			iLocal_1040[iParam0] = 6;
		}
		break;

	case 6:
		func_2(uLocal_1046[iParam0]);
		func_87(uLocal_1046[iParam0]);
		break;
	}
	if (!iLocal_1133) {
		if (iLocal_1157) {
			if (iLocal_1040[iParam0] != 3 && iLocal_1040[iParam0] != 4) {
				iLocal_1040[iParam0] = 3;
			}
		}
		else if (func_124(uLocal_1046[iParam0])) {
			iLocal_1133 = 1;
		}
	}
	else if (iLocal_1040[iParam0] < 5) {
		if (!ped::is_ped_injured(uLocal_1046[iParam0])) {
			if (ped::is_ped_using_any_scenario(uLocal_1046[iParam0])) {
				ped::_0xF1C03A5352243A30(uLocal_1046[iParam0]);
			}
			ai::task_clear_defensive_area(uLocal_1046[iParam0]);
			ped::set_ped_combat_movement(uLocal_1046[iParam0], 2);
			ped::set_ped_combat_attributes(uLocal_1046[iParam0], 13, 1);
		}
		iLocal_1040[iParam0] = 5;
	}
}

// Position - 0x6F2E
Vector3 func_135() {
	vector3 vVar0;

	return vVar0;
}

// Position - 0x6F3A
int func_136(int iParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6,
			 char *sParam7, int iParam8, int iParam9, int iParam10) {
	if (iParam3 == 0) {
		iParam3 = player::get_player_index();
	}
	if (fParam6 < 0f) {
		fParam6 = 100f;
	}
	if (!ped::is_ped_injured(iParam0)) {
		if (!ui::does_ped_have_ai_blip(iParam0)) {
			if (iParam8 == -1) {
				ui::_set_ped_enemy_ai_blip(iParam0, 1);
			}
			else {
				unk_0xB13DCB4C6FAAD238(iParam0, 1, iParam8);
			}
			uParam1->f_7 = iParam0;
			ui::_0xE52B8E7F85D39A08(iParam0, iParam2);
			ui::_set_ai_blip_max_distance(iParam0, fParam6);
			if (ui::does_blip_exist(*uParam1)) {
				ui::set_blip_priority(*uParam1, 7);
			}
		}
		if (iParam9 != -1) {
			unk_0xFCFACD0DB9D7A57D(iParam0, iParam9);
		}
		ui::_0x0C4BBF625CA98C4E(iParam0, iParam4);
		ui::hide_special_ability_lockon_operation(iParam0, iParam5);
		*uParam1 = ui::_0x7CD934010E115C2C(iParam0);
		if (iParam9 != -1) {
			if (ui::does_blip_exist(*uParam1)) {
				if (iParam8 != -1) {
					ui::set_blip_colour(*uParam1, iParam8);
				}
				ui::begin_text_command_set_blip_name("STRING");
				if (iParam10) {
					ui::add_text_component_substring_player_name(sParam7);
				}
				else {
					ui::add_text_component_substring_text_label(sParam7);
				}
				ui::end_text_command_set_blip_name(*uParam1);
				ui::set_blip_priority(*uParam1, 7);
			}
		}
		if (!gameplay::is_bit_set(uParam1->f_6, 2)) {
			if (ui::does_blip_exist(*uParam1)) {
				if (!gameplay::is_string_null_or_empty(sParam7)) {
					ui::begin_text_command_set_blip_name("STRING");
					if (iParam10) {
						ui::add_text_component_substring_player_name(sParam7);
					}
					else {
						ui::add_text_component_substring_text_label(sParam7);
					}
					ui::end_text_command_set_blip_name(*uParam1);
				}
				gameplay::set_bit(&uParam1->f_6, 2);
			}
		}
		if (ped::is_ped_in_any_vehicle(iParam0, 0)) {
			uParam1->f_1 = ui::_0x56176892826A4FE8(iParam0);
			if (!gameplay::is_bit_set(uParam1->f_6, 3)) {
				if (ui::does_blip_exist(uParam1->f_1)) {
					ui::set_blip_priority(uParam1->f_1, 7);
					gameplay::set_bit(&uParam1->f_6, 3);
				}
			}
		}
		else if (ui::does_blip_exist(uParam1->f_1)) {
			uParam1->f_1 = 0;
			gameplay::clear_bit(&uParam1->f_6, 3);
		}
	}
	else {
		return 1;
	}
	return 0;
}

// Position - 0x70D7
void func_137() {
	int iVar0;
	int iVar1;

	if (entity::does_entity_exist(iLocal_1045)) {
		vLocal_1304 = {entity::get_entity_coords(iLocal_1045, 0)};
	}
	switch (iLocal_1039) {
	case 0:
		if (!entity::is_entity_dead(iLocal_1045, 0)) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0) && !entity::is_entity_dead(uLocal_1049[0], 0)) {
				if (!ped::is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0)) {
					if (ai::get_script_task_status(iLocal_1045, -1794415470) != 1) {
						if (!iLocal_1133 && !iLocal_1157) {
							ai::task_enter_vehicle(iLocal_1045, iLocal_1311, 30000, 1, 1f, 1, 0);
						}
						else {
							ai::task_enter_vehicle(iLocal_1045, iLocal_1311, 30000, 1, 2f, 1, 0);
						}
						if (!func_52(&uLocal_1341)) {
							func_49(&uLocal_1341);
						}
						else {
							func_50(&uLocal_1341);
						}
					}
					if (!iLocal_1159) {
						if (func_52(&uLocal_1341)) {
							if (func_46(&uLocal_1341) > 3.5f) {
								if (!ped::is_ped_injured(iLocal_1045)) {
									func_29(&uLocal_1363, 4, iLocal_1045, "OJAva_TARGET", 0, 1);
									if (func_6(&uLocal_1363, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0)) {
										iLocal_1159 = 1;
									}
								}
							}
						}
					}
					if (func_140(iLocal_1045)) {
						func_3();
						iLocal_1039 = 4;
					}
				}
				else {
					iLocal_1136 = 1;
					iLocal_1039 = 1;
				}
			}
			else {
				iLocal_1039 = 4;
			}
		}
		break;

	case 1:
		if (!iLocal_1159) {
			if (!ped::is_ped_injured(iLocal_1045)) {
				func_29(&uLocal_1363, 4, iLocal_1045, "OJAva_TARGET", 0, 1);
				if (func_6(&uLocal_1363, "OJASAUD", "OJASva_TARG", 8, 0, 0, 0)) {
					iLocal_1159 = 1;
				}
			}
		}
		if (!iLocal_1178) {
			if (func_139()) {
				if (func_24(iLocal_1045, player::player_ped_id(), 1) <= 5f && !func_22()) {
					if (func_30(25f, 1) == 0) {
						if (func_138()) {
							iLocal_1178 = 1;
						}
					}
				}
			}
		}
		break;

	case 4:
		if (!entity::is_entity_dead(iLocal_1045, 0)) {
			if (ped::is_ped_in_vehicle(iLocal_1045, iLocal_1311, 0)) {
				if (ai::get_script_task_status(iLocal_1045, -828834893) != 1) {
					ai::task_leave_any_vehicle(iLocal_1045, 0, 256);
				}
			}
			else if (!bLocal_1163) {
				ped::set_ped_max_move_blend_ratio(iLocal_1045, 2f);
				ai::clear_sequence_task(&iVar0);
				ai::open_sequence_task(&iVar0);
				ai::task_play_anim(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
				ai::task_smart_flee_ped(0, iLocal_1044, 200f, -1, 0, 0);
				ai::close_sequence_task(iVar0);
				if (!entity::is_entity_dead(iLocal_1045, 0)) {
					ai::task_perform_sequence(iLocal_1045, iVar0);
				}
				ai::clear_sequence_task(&iVar0);
				bLocal_1163 = true;
			}
			else if (ai::get_script_task_status(iLocal_1045, 1435919172) != 1) {
				ai::task_smart_flee_ped(iLocal_1045, iLocal_1044, 200f, -1, 0, 0);
			}
			if (!iLocal_1178) {
				if (!func_22() && !ui::is_message_being_displayed()) {
					func_6(&uLocal_1363, "OJASAUD", "OJASva_TARG2", 9, 0, 0, 0);
					iLocal_1178 = 1;
				}
			}
		}
		break;
	}
	if (!iLocal_1133) {
		if (iLocal_1157) {
		}
		else if (func_124(iLocal_1045) || iLocal_1187) {
			iVar1 = func_30(1116471296, 1);
			if (iVar1 != 0) {
				func_103(entity::get_entity_coords(iVar1, 1), 1097859072, 1116471296);
			}
			if (!func_102()) {
				iLocal_1133 = 1;
			}
		}
	}
}

// Position - 0x73FE
bool func_138() {
	switch (iLocal_1213) {
	case 0:
		if (!func_22()) {
			func_27(&uLocal_1363, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_1", 8, 0, 0);
			func_50(&uLocal_1341);
			iLocal_1213++;
		}
		break;

	case 1:
		if (!func_22() && func_46(&uLocal_1341) > 7f) {
			func_27(&uLocal_1363, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_2", 8, 0, 0);
			func_50(&uLocal_1341);
			iLocal_1213++;
		}
		break;

	case 2:
		if (!func_22() && func_46(&uLocal_1341) > 8f) {
			func_27(&uLocal_1363, "OJASAUD", "OJASva_PANIC", "OJASva_PANIC_3", 8, 0, 0);
			return true;
		}
		break;
	}
	return false;
}

// Position - 0x74C9
bool func_139() {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
		iVar0 = vehicle::get_ped_in_vehicle_seat(iLocal_1311, -1, 0);
		if (iVar0 == 0 || iVar0 != 0 && ped::is_ped_injured(iVar0)) {
			iVar0 = vehicle::get_ped_in_vehicle_seat(iLocal_1311, 0, 0);
			if (iVar0 == 0 || iVar0 != 0 && ped::is_ped_injured(iVar0)) {
				iVar0 = vehicle::get_ped_in_vehicle_seat(iLocal_1311, 2, 0);
				if (iVar0 == 0 || iVar0 != 0 && ped::is_ped_injured(iVar0)) {
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x7556
bool func_140(int iParam0) {
	int iVar0;

	if (iLocal_1133 || iLocal_1157 || bLocal_1158) {
		if (!ped::is_ped_injured(iParam0)) {
			if (func_22()) {
				audio::stop_scripted_conversation(0);
			}
			if (!ped::is_ped_in_any_vehicle(iParam0, 0)) {
				if (!bLocal_1163) {
					ai::clear_sequence_task(&iVar0);
					ai::open_sequence_task(&iVar0);
					ai::task_play_anim(0, "oddjobs@assassinate@hotel@", "alert_gunshot", 8f, -4f, 1000, 0, 0, 0, 0, 0);
					ai::task_smart_flee_ped(0, iLocal_1044, 200f, -1, 0, 0);
					ai::close_sequence_task(iVar0);
					if (!entity::is_entity_dead(iLocal_1045, 0)) {
						ai::task_perform_sequence(iLocal_1045, iVar0);
					}
					ai::clear_sequence_task(&iVar0);
					bLocal_1163 = true;
					return true;
				}
			}
		}
	}
	return false;
}

// Position - 0x7607
void func_141() {
	if (!iLocal_1164) {
		if (iLocal_1030 > 15) {
			audio::trigger_music_event("ASS1_ALERT");
			iLocal_1164 = 1;
		}
	}
	if (!iLocal_1165) {
		if (iLocal_1133 && !func_22()) {
			func_418();
			iLocal_1165 = 1;
			if (!iLocal_1164) {
				audio::trigger_music_event("ASS1_ALERT");
				iLocal_1164 = 1;
			}
		}
	}
	func_417();
	switch (iLocal_1030) {
	case 3:
		if (func_482()) {
			iLocal_1030 = 4;
			break;
		}
		func_416();
		func_414();
		break;

	case 4:
		if (func_482()) {
			if (func_481()) {
				iLocal_1152 = 1;
			}
			bLocal_1141 = true;
		}
		func_413();
		func_412();
		func_411();
		func_410(1);
		func_409();
		func_490(&Local_360, 2);
		iLocal_1030 = 5;
		break;

	case 5:
		if (func_408()) {
			iLocal_1030 = 6;
		}
		break;

	case 6:
		func_407();
		func_406();
		if (bLocal_1141) {
			if (Global_101700.f_18922.f_5 != 0f) {
				func_51(&uLocal_1335, Global_101700.f_18922.f_5);
			}
			iLocal_1208 = func_476();
			if (Global_86001) {
				if (iLocal_1208 <= 2) {
					iLocal_1208++;
				}
			}
			if (iLocal_1208 == 0) {
				func_405();
			}
			else if (iLocal_1208 == 1) {
				func_404();
			}
			else if (iLocal_1208 == 2) {
				func_400();
			}
		}
		else {
			if (!func_52(&uLocal_1335)) {
				func_49(&uLocal_1335);
				Global_101700.f_18922.f_5 = 0f;
			}
			iLocal_1030 = 7;
		}
		break;

	case 7:
		func_394();
		func_379();
		break;

	case 8: func_345(); break;

	case 9:
		func_394();
		func_344();
		func_263();
		break;

	case 10:
		func_344();
		func_259();
		break;

	case 11:
		func_245();
		func_244();
		break;

	case 12:
		func_243();
		func_244();
		break;

	case 13:
		func_239();
		func_244();
		break;

	case 15: func_237(); break;

	case 16: func_234(); break;

	case 17: func_228(); break;

	case 18: func_142(); break;
	}
}

// Position - 0x7827
void func_142() {
	player::clear_player_wanted_level(player::player_id());
	func_143();
}

// Position - 0x783B
void func_143() {
	func_227();
	switch (iLocal_1214) {
	case 0:
		if (!iLocal_377) {
			if (iLocal_1031 == 1) {
				bLocal_375 = true;
				func_226();
			}
			Global_101700.f_18922.f_5 = func_46(&uLocal_1335);
			fLocal_372 = Global_101700.f_18922.f_5;
			func_219();
			iLocal_377 = 1;
			iLocal_1214 = 1;
		}
		break;

	case 1:
		if (!iLocal_1186) {
			audio::play_mission_complete_audio("FRANKLIN_BIG_01");
			iLocal_1186 = 1;
		}
		if (func_215(&uLocal_388, 1, 0) && audio::_0x6F259F82D873B8B8()) {
			func_214(&uLocal_1540, 0, 0, 0, 1);
			func_213(&uLocal_1540, "ASS_VA_CONT", 2, 215, 1, 1, 0);
			func_213(&uLocal_1540, "ES_XPAND", 2, 216, 1, 1, 0);
			system::settimera(0);
			iLocal_1214 = 2;
		}
		break;

	case 2:
		if (func_189(&uLocal_388, 0, 1065353216, 0, 0, 0)) {
			bLocal_1184 = true;
		}
		if (!bLocal_1184) {
			func_181(&uLocal_1540, 1128792064, 1, 0, 1, 1065353216);
		}
		if (controls::is_control_just_pressed(2, 215) || controls::is_disabled_control_just_pressed(2, 200)) {
			if (!bLocal_1184) {
				bLocal_1184 = true;
				func_180(&uLocal_388);
			}
		}
		if (bLocal_1184) {
			if (func_189(&uLocal_388, 0, 1065353216, 0, 0, 0)) {
				func_178(&uLocal_388);
				Global_101700.f_18922++;
				func_177();
				func_148(Local_57);
				func_146(0, 0);
				func_144();
				func_483();
			}
		}
		break;
	}
}

// Position - 0x79AE
void func_144() { func_145(); }

// Position - 0x79BB
int func_145() {
	if (func_40(0)) {
		return 0;
	}
	if (Global_91530.f_8) {
		if (Global_91530.f_10 > 0) {
			return 0;
		}
	}
	else if (Global_91530.f_10 > 1) {
		return 0;
	}
	Global_91530.f_10++;
	return 1;
}

// Position - 0x7A06
void func_146(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Global_55824) {
		Global_55824 = iParam1;
	}
	if (iParam0) {
		if (func_40(0) && Global_69948.f_1 == 1 && func_147(Global_69948)) {
		}
		else {
			Global_55822 = 1;
		}
	}
	if (Global_101700.f_8044 || func_40(0)) {
		iVar0 = func_39();
		iVar1 = Global_82576[iVar0 /*5*/];
		uVar2 = Global_69971.f_109[iVar1 /*4*/];
		if (iVar0 == -1) {
			if (Global_101700.f_8044) {
			}
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 4)) {
			return;
		}
		if (gameplay::is_bit_set(Global_82576[iVar0 /*5*/].f_1, 5)) {
			return;
		}
		gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 4);
		gameplay::set_bit(&Global_69950, 1);
		Global_69966 = uVar2;
		Global_69967 = gameplay::get_game_timer();
	}
}

// Position - 0x7ADC
int func_147(int iParam0) {
	switch (iParam0) {
	case 71: return 1;

	case 86: return 1;

	case 91: return 1;

	default: return 0;
	}
	return 0;
}

// Position - 0x7B1A
void func_148(struct<25> Param0, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30,
			  var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37,
			  var uParam38) {
	float fVar0;

	fVar0 = 1f + func_176();
	fVar0 *= Param0.f_23;
	if (func_111(Global_101700.f_18922.f_1, 4194304)) {
		fVar0 += Param0.f_24;
	}
	func_149(func_13(), 96, system::round(fVar0), 0, 0);
}

// Position - 0x7B65
void func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	int iVar0;
	int iVar1;

	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 3) {
		return;
	}
	if (Global_101700.f_27009[iParam0 /*29*/].f_17 == 4) {
		return;
	}
	func_150(Global_101700.f_27009[iParam0 /*29*/].f_17, 1, iParam1, iParam2, 0);
	if (iParam3) {
		iVar0 = 0;
		if (iParam4) {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_random_peds"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_random_peds"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_random_peds"); break;

			default: return;
			}
		}
		else {
			switch (iParam0) {
			case 0: iVar1 = joaat("sp0_money_made_from_missions"); break;

			case 1: iVar1 = joaat("sp1_money_made_from_missions"); break;

			case 2: iVar1 = joaat("sp2_money_made_from_missions"); break;

			default: return;
			}
		}
		stats::stat_get_int(iVar1, &iVar0, -1);
		iVar0 += iParam2;
		stats::stat_set_int(iVar1, iVar0, 1);
	}
}

// Position - 0x7C4C
int func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	func_175();
	if (iParam3 < 1) {
		return 0;
	}
	fVar0 = 1f;
	switch (iParam1) {
	case 0:
		switch (iParam0) {
		case 0:
			func_174(99, 1);
			func_173(joaat("sp0_money_total_spent"), iParam3);
			break;

		case 1: func_173(joaat("sp1_money_total_spent"), iParam3); break;

		case 2: func_173(joaat("sp2_money_total_spent"), iParam3); break;
		}
		func_158(0);
		switch (iParam2) {
		case 126:
		case 128:
		case 124:
		case 125:
		case 127:
			if (func_157(5)) {
				fVar0 = 0.9f;
				iVar1 = 5;
			}
			break;

		case 63:
		case 64:
		case 65:
		case 66:
		case 67:
		case 68:
			switch (iParam0) {
			case 0: func_173(joaat("sp0_money_spent_on_tattoos"), iParam3); break;

			case 1: func_173(joaat("sp1_money_spent_on_tattoos"), iParam3); break;

			case 2: func_173(joaat("sp2_money_spent_on_tattoos"), iParam3); break;
			}
			if (func_157(1)) {
				fVar0 = 0f;
				iVar1 = 1;
			}
			break;

		case 21:
			switch (iParam0) {
			case 0: func_173(joaat("sp0_money_spent_on_taxis"), iParam3); break;

			case 1: func_173(joaat("sp1_money_spent_on_taxis"), iParam3); break;

			case 2: func_173(joaat("sp2_money_spent_on_taxis"), iParam3); break;
			}
			break;

		case 25:
			switch (iParam0) {
			case 0: func_173(joaat("sp0_money_spent_in_strip_clubs"), iParam3); break;

			case 1: func_173(joaat("sp1_money_spent_in_strip_clubs"), iParam3); break;

			case 2: func_173(joaat("sp2_money_spent_in_strip_clubs"), iParam3); break;
			}
			break;

		case 98:
		case 99:
		case 100:
		case 101:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			switch (iParam0) {
			case 0: func_173(joaat("sp0_money_spent_property"), iParam3); break;

			case 1: func_173(joaat("sp1_money_spent_property"), iParam3); break;

			case 2: func_173(joaat("sp2_money_spent_property"), iParam3); break;
			}
			break;

		default:
			switch (script::get_hash_of_this_script_name()) {
			case joaat("clothes_shop_sp"):
				switch (iParam0) {
				case 0: func_173(joaat("sp0_money_spent_in_clothes"), iParam3); break;

				case 1: func_173(joaat("sp1_money_spent_in_clothes"), iParam3); break;

				case 2: func_173(joaat("sp2_money_spent_in_clothes"), iParam3); break;
				}
				break;

			case joaat("hairdo_shop_sp"):
				switch (iParam0) {
				case 0: func_173(joaat("sp0_money_spent_on_hairdos"), iParam3); break;

				case 1: func_173(joaat("sp1_money_spent_on_hairdos"), iParam3); break;

				case 2: func_173(joaat("sp2_money_spent_on_hairdos"), iParam3); break;
				}
				if (func_157(0)) {
					fVar0 = 0f;
					iVar1 = 0;
				}
				break;

			case joaat("gunclub_shop"):
				switch (iParam0) {
				case 0: func_173(joaat("sp0_money_spent_in_buying_guns"), iParam3); break;

				case 1: func_173(joaat("sp1_money_spent_in_buying_guns"), iParam3); break;

				case 2: func_173(joaat("sp2_money_spent_in_buying_guns"), iParam3); break;
				}
				break;

			case joaat("carmod_shop"):
				switch (iParam0) {
				case 0: func_173(joaat("sp0_money_spent_car_mods"), iParam3); break;

				case 1: func_173(joaat("sp1_money_spent_car_mods"), iParam3); break;

				case 2: func_173(joaat("sp2_money_spent_car_mods"), iParam3); break;
				}
				func_156(iParam3);
				break;
			}
			break;
		}
		break;

	case 1:
		switch (iParam0) {
		case 0: func_174(95, iParam3); break;

		case 1: func_174(97, iParam3); break;

		case 2: func_174(96, iParam3); break;
		}
		func_174(98, iParam3);
		break;
	}
	iVar2 = iParam0;
	iParam3 = system::floor(fVar0 * system::to_float(iParam3));
	iVar3 = 0;
	iVar4 = iParam3;
	if (fVar0 == 0f) {
		func_153(iVar1);
		return 1;
	}
	else if (fVar0 != 1f) {
		func_153(iVar1);
	}
	iVar5 = Global_52996[iVar2] + iParam3;
	switch (iParam1) {
	case 1:
		if (Global_52996[iVar2] >= 0 && iParam3 > 0) {
			if (iVar5 <= 0) {
				Global_52996[iVar2] = 2147483647;
			}
			else {
				Global_52996[iVar2] += iParam3;
			}
		}
		switch (iParam0) {
		case 0: func_173(joaat("sp0_total_cash_earned"), iParam3); break;

		case 1: func_173(joaat("sp1_total_cash_earned"), iParam3); break;

		case 2: func_173(joaat("sp2_total_cash_earned"), iParam3); break;
		}
		break;

	case 0:
		if (!iParam4) {
			if (Global_52996[iVar2] - iParam3 < 0) {
				return 0;
			}
		}
		iVar3 = Global_52996[iVar2];
		Global_52996[iVar2] -= iParam3;
		if (iParam4) {
			iVar4 = iVar3;
		}
		break;
	}
	if (iParam2 == 1) {
		if (iVar4 > 20) {
		}
	}
	else {
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/] = iParam1;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_1 =
			iParam2;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_2[Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 /*6*/].f_2 =
			iParam3;
		Global_101700.f_19523.f_233[iVar2 /*69*/]++;
		Global_101700.f_19523.f_233[iVar2 /*69*/].f_1++;
		if (Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 > 10) {
			Global_101700.f_19523.f_233[iVar2 /*69*/].f_1 = 0;
		}
	}
	func_152(iParam0);
	if (Global_35781 == 15) {
		func_151(0);
	}
	return 1;
}

// Position - 0x824D
void func_151(int iParam0) {
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		iVar1 = 0;
		while (iVar1 < 11) {
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
			Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5 =
				Global_101700.f_19523.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
			iVar1++;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10) {
		Global_53004[iVar0 /*3*/][0] = Global_101700.f_19523[iVar0];
		Global_53004.f_31[iVar0 /*3*/][0] = Global_101700.f_19523.f_11[iVar0];
		Global_53004.f_62[iVar0 /*3*/][0] = Global_101700.f_19523.f_22[iVar0];
		Global_53004.f_93[iVar0 /*3*/][0] = Global_101700.f_19523.f_33[iVar0];
		Global_53004.f_124[iVar0 /*3*/][0] = Global_101700.f_19523.f_44[iVar0];
		Global_53004.f_155[iVar0 /*3*/][0] = Global_101700.f_19523.f_55[iVar0];
		Global_53004.f_186[iVar0 /*3*/][0] = Global_101700.f_19523.f_66[iVar0];
		Global_53004.f_217[iVar0 /*3*/][0] = Global_101700.f_19523.f_77[iVar0];
		Global_53004.f_248[iVar0 /*3*/][0] = Global_101700.f_19523.f_88[iVar0];
		if (!iParam0) {
			Global_53004[iVar0 /*3*/][1] = Global_101700.f_19523[iVar0];
			Global_53004.f_31[iVar0 /*3*/][1] = Global_101700.f_19523.f_11[iVar0];
			Global_53004.f_62[iVar0 /*3*/][1] = Global_101700.f_19523.f_22[iVar0];
			Global_53004.f_93[iVar0 /*3*/][1] = Global_101700.f_19523.f_33[iVar0];
			Global_53004.f_124[iVar0 /*3*/][1] = Global_101700.f_19523.f_44[iVar0];
			Global_53004.f_155[iVar0 /*3*/][1] = Global_101700.f_19523.f_55[iVar0];
			Global_53004.f_186[iVar0 /*3*/][1] = Global_101700.f_19523.f_66[iVar0];
			Global_53004.f_217[iVar0 /*3*/][1] = Global_101700.f_19523.f_77[iVar0];
			Global_53004.f_248[iVar0 /*3*/][1] = Global_101700.f_19523.f_88[iVar0];
		}
		iVar0++;
	}
}

// Position - 0x84CF
void func_152(int iParam0) {
	int iVar0;

	iVar0 = Global_52996[iParam0];
	switch (iParam0) {
	case 0: stats::stat_set_int(joaat("sp0_total_cash"), iVar0, 1); break;

	case 1: stats::stat_set_int(joaat("sp1_total_cash"), iVar0, 1); break;

	case 2: stats::stat_set_int(joaat("sp2_total_cash"), iVar0, 1); break;
	}
}

// Position - 0x8529
void func_153(int iParam0) {
	bool bVar0;
	char cVar1[64];

	bVar0 = false;
	if (!network::network_is_game_in_progress()) {
		if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0)) {
			bVar0 = true;
			gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		}
	}
	else if (gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0) ||
			 gameplay::is_bit_set(Global_2097152[func_155() /*10758*/].f_7546.f_10, iParam0)) {
		bVar0 = true;
		gameplay::clear_bit(&Global_101700.f_19523.f_471, iParam0);
		gameplay::clear_bit(&Global_2097152[func_155() /*10758*/].f_7546.f_10, iParam0);
	}
	if (bVar0) {
		StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
		ui::_set_notification_text_entry("COUP_RED");
		ui::add_text_component_substring_text_label(func_154(iParam0));
		ui::_set_notification_message(&cVar1, &cVar1, 1, 0, "", 0);
	}
}

// Position - 0x85EB
char *func_154(int iParam0) {
	switch (iParam0) {
	case 0: return "COUP_HAIRC";

	case 1: return "COUP_TATTOO";

	case 2: return "COUP_WARSTOCK";

	case 3: return "COUP_MOSPORT";

	case 4: return "COUP_ELITAS";

	case 5: return "COUP_MEDSPENS";

	case 6: return "COUP_SPRUNK";

	case 7: return "COUP_RESPRAY";

	default:
	}
	return "";
}

// Position - 0x8665
int func_155() {
	int iVar0;

	iVar0 = 0;
	return iVar0;
}

// Position - 0x8672
void func_156(int iParam0) {
	func_174(93, iParam0);
	func_174(29, iParam0);
	func_174(30, iParam0);
}

// Position - 0x8692
bool func_157(int iParam0) {
	if (!network::network_is_game_in_progress()) {
		return gameplay::is_bit_set(Global_101700.f_19523.f_471, iParam0);
	}
	return gameplay::is_bit_set(Global_2097152[func_155() /*10758*/].f_7546.f_10, iParam0);
}

// Position - 0x86CE
int func_158(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	if (player::has_achievement_been_passed(27)) {
		return 0;
	}
	if (stats::stat_get_int(joaat("sp0_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp1_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (stats::stat_get_int(joaat("sp2_money_total_spent"), &iVar0, -1)) {
		iVar1 += iVar0;
	}
	if (iParam0) {
	}
	iVar2 = 0;
	stats::stat_get_int(joaat("num_cash_spent"), &iVar2, -1);
	if (iVar1 > 0 && iVar2 / 2000000 != iVar1 / 2000000) {
		stats::stat_set_int(joaat("num_cash_spent"), iVar1, 1);
		func_172(27, iVar1);
	}
	if (iVar1 < 200000000) {
		return 0;
	}
	func_159(27, 1);
	return 1;
}

// Position - 0x8785
int func_159(int iParam0, int iParam1) {
	if (iParam0 >= 70) {
		return 0;
	}
	return func_160(iParam0, iParam1);
}

// Position - 0x87A0
int func_160(int iParam0, int iParam1) {
	if (func_18(14) && !func_171(iParam0)) {
		return 0;
	}
	if (player::has_achievement_been_passed(iParam0) && iParam1 == 1) {
		return 0;
	}
	if (Global_25436 != 0 && !Global_69702) {
		return 0;
	}
	if (func_170(&Global_2595550)) {
		if (func_168(&Global_2595550, iParam0)) {
			return 0;
		}
		if (func_161(&Global_2595550, iParam0)) {
			return 1;
		}
	}
	else {
		if (!player::give_achievement_to_player(iParam0)) {
			return 0;
		}
		if (player::has_achievement_been_passed(iParam0)) {
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x883D
bool func_161(var *uParam0, int iParam1) {
	int iVar0;
	var *uVar1[70];

	if (player::has_achievement_been_passed(iParam1)) {
		return false;
	}
	if (func_18(14) && !func_171(iParam1)) {
		return false;
	}
	if (func_168(uParam0, iParam1)) {
		return false;
	}
	if (func_167(uParam0) < 0f) {
		func_166(uParam0, 0);
	}
	func_164(&uVar1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0 - 1) {
		uVar1[iVar0 + 1] = (*uParam0)[iVar0];
		iVar0++;
	}
	func_162(&uVar1, iParam1);
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		(*uParam0)[iVar0] = uVar1[iVar0];
		iVar0++;
	}
	return true;
}

// Position - 0x88EE
int func_162(var *uParam0, int iParam1) {
	int iVar0;

	if (player::has_achievement_been_passed(iParam1)) {
		return 0;
	}
	if (func_18(14) && !func_171(iParam1)) {
		return 0;
	}
	if (func_168(uParam0, iParam1)) {
		return 0;
	}
	if (func_167(uParam0) < 0f) {
		func_166(uParam0, 0);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if (func_163(uParam0, iVar0)) {
			(*uParam0)[iVar0] = iParam1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x8969
bool func_163(var *uParam0, int iParam1) { return (*uParam0)[iParam1] == 70; }

// Position - 0x897A
void func_164(var *uParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		func_165(uParam0, iVar0);
		iVar0++;
	}
	func_166(uParam0, Global_2595549 - 0.5f);
}

// Position - 0x89AE
void func_165(var *uParam0, int iParam1) { (*uParam0)[iParam1] = 70; }

// Position - 0x89BE
void func_166(var *uParam0, float fParam1) {
	if (fParam1 == 0f) {
		uParam0->f_72 = 0f;
	}
	else {
		uParam0->f_72 = fParam1;
	}
}

// Position - 0x89DB
float func_167(var *uParam0) { return uParam0->f_72; }

// Position - 0x89E7
bool func_168(var *uParam0, int iParam1) { return func_169(uParam0, iParam1) != -1; }

// Position - 0x89F9
int func_169(var *uParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0) {
		if ((*uParam0)[iVar0] == iParam1) {
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x8A26
bool func_170(var *uParam0) { return uParam0->f_71 == 1; }

// Position - 0x8A34
int func_171(int iParam0) {
	switch (iParam0) {
	case 60:
	case 61:
	case 62:
	case 63:
	case 64:
	case 65:
	case 66:
	case 67:
	case 68:
	case 69: return 1;

	default:
	}
	return 0;
}

// Position - 0x8A84
int func_172(int iParam0, int iParam1) {
	int iVar0;

	if (iParam0 < 0) {
		return 0;
	}
	if (iParam0 > 70) {
		return 0;
	}
	if (iParam1 <= 0 || iParam1 > 100) {
		return 0;
	}
	iVar0 = player::_0x1C186837D0619335(iParam0);
	if (iParam1 > iVar0) {
		return player::_0xC2AFFFDABBDC2C5C(iParam0, iParam1);
	}
	return 0;
}

// Position - 0x8AD5
void func_173(int iParam0, int iParam1) {
	int iVar0;

	stats::stat_get_int(iParam0, &iVar0, -1);
	iVar0 += iParam1;
	stats::stat_set_int(iParam0, iVar0, 1);
}

// Position - 0x8AF8
void func_174(int iParam0, int iParam1) {
	int iVar0;

	if (iParam1 < 1) {
		return;
	}
	if (Global_51564[iParam0 /*7*/].f_2) {
		return;
	}
	if (network::network_is_game_in_progress()) {
		return;
	}
	if (Global_51564[iParam0 /*7*/]) {
		stats::stat_get_int(Global_51564[iParam0 /*7*/].f_1, &iVar0, -1);
		iVar0 += iParam1;
		stats::stat_set_int(Global_51564[iParam0 /*7*/].f_1, iVar0, 1);
	}
}

// Position - 0x8B55
void func_175() {
	int iVar0;

	if (network::network_is_signed_in()) {
		stats::stat_get_int(joaat("sp0_total_cash"), &iVar0, -1);
		if (Global_52996[0] != iVar0) {
			Global_52996[0] = iVar0;
		}
		stats::stat_get_int(joaat("sp1_total_cash"), &iVar0, -1);
		if (Global_52996[1] != iVar0) {
			Global_52996[1] = iVar0;
		}
		stats::stat_get_int(joaat("sp2_total_cash"), &iVar0, -1);
		if (Global_52996[2] != iVar0) {
			Global_52996[2] = iVar0;
		}
	}
}

// Position - 0x8BCA
float func_176() {
	float fVar0;

	fVar0 = 0f;
	if (func_111(Global_101700.f_18922.f_1, 8192)) {
		fVar0 += 0.2f;
	}
	if (func_111(Global_101700.f_18922.f_1, 16384)) {
		fVar0 += 0.2f;
	}
	if (func_111(Global_101700.f_18922.f_1, 32768)) {
		fVar0 += 0.2f;
	}
	if (func_111(Global_101700.f_18922.f_1, 65536)) {
		fVar0 += 0.1f;
	}
	if (func_111(Global_101700.f_18922.f_1, 131072)) {
		fVar0 += 0.1f;
	}
	if (func_111(Global_101700.f_18922.f_1, 262144)) {
		fVar0 += 0.1f;
	}
	if (func_111(Global_101700.f_18922.f_1, 524288)) {
		fVar0 += 0.333f;
	}
	if (func_111(Global_101700.f_18922.f_1, 1048576)) {
		fVar0 += 0.333f;
	}
	if (func_111(Global_101700.f_18922.f_1, 2097152)) {
		fVar0 += 0.333f;
	}
	return fVar0;
}

// Position - 0x8CE3
void func_177() { func_490(&Global_101700.f_18922.f_1, 2048); }

// Position - 0x8CFB
void func_178(var *uParam0) {
	if (uParam0->f_1 != 0) {
		graphics::set_scaleform_movie_as_no_longer_needed(&uParam0->f_1);
		uParam0->f_1 = 0;
	}
	if (uParam0->f_562 && uParam0->f_4 != 0) {
		if (gameplay::is_pc_version()) {
			graphics::_push_scaleform_movie_function(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
			graphics::_push_scaleform_movie_function_parameter_bool(0);
			graphics::_pop_scaleform_movie_function_void();
		}
		graphics::set_scaleform_movie_as_no_longer_needed(&uParam0->f_4);
		uParam0->f_4 = 0;
	}
	if (uParam0->f_564) {
		script::set_no_loading_screen(0);
		uParam0->f_564 = 0;
	}
	if (!Global_69970) {
		if (!player::is_player_dead(player::get_player_index())) {
			if (!Global_69971) {
				if (cam::is_screen_faded_out() && !func_40(0)) {
					cam::do_screen_fade_in(800);
				}
			}
		}
	}
	func_179(0);
}

// Position - 0x8DA2
void func_179(int iParam0) {
	Global_69962 = iParam0;
	Global_69963 = iParam0;
}

// Position - 0x8DB6
void func_180(var *uParam0) {
	if (uParam0->f_561 || uParam0->f_572 <= uParam0->f_558) {
		uParam0->f_561 = 0;
		uParam0->f_558 = uParam0->f_572 - 1;
	}
}

// Position - 0x8DE9
void func_181(var *uParam0, float fParam1, int iParam2, int iParam3, int iParam4, float fParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	char *sVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;

	if (cam::is_screen_fading_out() || cam::is_screen_fading_in() || cam::is_screen_faded_out() ||
		gameplay::is_frontend_fading()) {
		if (!iParam3) {
			return;
		}
	}
	if (!func_188(uParam0)) {
		return;
	}
	ui::hide_loading_on_fade_this_frame();
	graphics::_set_2d_layer(iParam2);
	if (!func_187(uParam0->f_1, 256) || func_187(uParam0->f_1, 8192) && controls::_0x6CD79468A1E595C6(2)) {
		graphics::_push_scaleform_movie_function(*uParam0, "SET_CLEAR_SPACE");
		graphics::_push_scaleform_movie_function_parameter_float(fParam1);
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(*uParam0, "SET_MAX_WIDTH");
		graphics::_push_scaleform_movie_function_parameter_float(fParam5);
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(*uParam0, "SET_DATA_SLOT_EMPTY");
		graphics::_pop_scaleform_movie_function_void();
		if (gameplay::is_pc_version()) {
			graphics::_push_scaleform_movie_function(*uParam0, "TOGGLE_MOUSE_BUTTONS");
			graphics::_push_scaleform_movie_function_parameter_bool(func_187(uParam0->f_1, 4096));
			graphics::_pop_scaleform_movie_function_void();
		}
		iVar5 = 0;
		iVar6 = 0;
		while (iVar6 < uParam0->f_123) {
			switch (uParam0->f_2[iVar6 /*15*/].f_2) {
			case 0: bVar4 = true; break;

			case 1: bVar4 = controls::_is_input_disabled(2); break;

			case 2: bVar4 = !controls::_is_input_disabled(2); break;

			default: bVar4 = false; break;
			}
			if (bVar4) {
				if (graphics::_push_scaleform_movie_function(*uParam0, "SET_DATA_SLOT")) {
					graphics::_push_scaleform_movie_function_parameter_int(iVar5);
					iVar5++;
					iVar7 = 0;
					while (iVar7 < uParam0->f_2[iVar6 /*15*/].f_14) {
						iVar0 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/];
						iVar1 = uParam0->f_2[iVar6 /*15*/].f_3[iVar7 /*2*/].f_1;
						iVar2 = gameplay::is_bit_set(uParam0->f_2[iVar6 /*15*/].f_13, iVar7);
						if (!gameplay::is_bit_set(uParam0->f_2[iVar6 /*15*/].f_12, iVar7)) {
							sVar3 = controls::get_control_instructional_button(iVar0, iVar1, iVar2);
						}
						else {
							sVar3 = controls::_0x80C2FD58D720C801(iVar0, iVar1, iVar2);
						}
						if (!gameplay::is_string_null_or_empty(sVar3)) {
							func_186(sVar3);
						}
						iVar7++;
					}
					if (!gameplay::is_string_null_or_empty(uParam0->f_2[iVar6 /*15*/])) {
						func_185(uParam0->f_2[iVar6 /*15*/]);
					}
					if (gameplay::is_pc_version()) {
						if (func_187(uParam0->f_1, 4096)) {
							if (uParam0->f_2[iVar6 /*15*/].f_1) {
								graphics::_push_scaleform_movie_function_parameter_bool(1);
								graphics::_push_scaleform_movie_function_parameter_int(
									uParam0->f_2[iVar6 /*15*/].f_3[0 /*2*/].f_1);
							}
							else {
								graphics::_push_scaleform_movie_function_parameter_bool(0);
								graphics::_push_scaleform_movie_function_parameter_int(-1);
							}
						}
					}
					graphics::_pop_scaleform_movie_function_void();
				}
			}
			iVar6++;
		}
		fVar8 = func_184(iParam4, func_184(func_187(uParam0->f_1, 32), 1f, 0f), -1f);
		graphics::_push_scaleform_movie_function(*uParam0, "DRAW_INSTRUCTIONAL_BUTTONS");
		graphics::_push_scaleform_movie_function_parameter_float(fVar8);
		graphics::_pop_scaleform_movie_function_void();
		graphics::_push_scaleform_movie_function(*uParam0, "SET_BACKGROUND_COLOUR");
		graphics::_push_scaleform_movie_function_parameter_float(0f);
		graphics::_push_scaleform_movie_function_parameter_float(0f);
		graphics::_push_scaleform_movie_function_parameter_float(0f);
		graphics::_push_scaleform_movie_function_parameter_float(80f);
		graphics::_pop_scaleform_movie_function_void();
		func_183(&uParam0->f_1, 256);
		func_182(&uParam0->f_1, 128);
	}
	graphics::draw_scaleform_movie_fullscreen(*uParam0, 255, 255, 255, 0, 0);
}

// Position - 0x90A9
void func_182(int *iParam0, int iParam1) { *iParam0 -= (*iParam0 & iParam1); }

// Position - 0x90BE
void func_183(var *uParam0, int iParam1) { *uParam0 |= iParam1; }

// Position - 0x90CF
float func_184(bool bParam0, float fParam1, float fParam2) {
	if (bParam0) {
		return fParam1;
	}
	return fParam2;
}

// Position - 0x90E6
void func_185(char *sParam0) {
	graphics::begin_text_command_scaleform_string(sParam0);
	graphics::end_text_command_scaleform_string();
}

// Position - 0x90F8
void func_186(char *sParam0) { graphics::_0xE83A3E3557A56640(sParam0); }

// Position - 0x9106
bool func_187(var uParam0, int iParam1) { return (uParam0 & iParam1) != 0; }

// Position - 0x9115
int func_188(var *uParam0) {
	if (*uParam0 != 0) {
		if (graphics::has_scaleform_movie_loaded(*uParam0)) {
			func_183(&uParam0->f_1, 1);
			return 1;
		}
	}
	return 0;
}

// Position - 0x913C
bool func_189(var *uParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (gameplay::get_frame_count() == uParam0->f_574) {
		return uParam0->f_575;
	}
	uParam0->f_574 = gameplay::get_frame_count();
	if (!network::network_is_game_in_progress()) {
		if (ped::is_ped_dead_or_dying(player::get_player_ped(player::get_player_index()), 1)) {
			uParam0->f_575 = 1;
			return true;
		}
		if (ai::is_ped_being_arrested(player::get_player_ped(player::get_player_index()))) {
			uParam0->f_575 = 1;
			return true;
		}
	}
	if (!uParam0->f_564) {
		if (cam::is_screen_faded_out() || cam::is_screen_fading_out()) {
			script::set_no_loading_screen(1);
			uParam0->f_564 = 1;
		}
	}
	if (player::is_player_playing(player::player_id())) {
		if (!network::network_is_game_in_progress()) {
			if (player::is_special_ability_active(player::player_id())) {
				player::special_ability_deactivate(player::player_id());
			}
		}
	}
	ui::hide_hud_component_this_frame(7);
	ui::hide_hud_component_this_frame(8);
	ui::hide_hud_component_this_frame(9);
	ui::hide_hud_component_this_frame(6);
	ui::hide_hud_component_this_frame(19);
	controls::disable_control_action(2, 19, 1);
	controls::disable_control_action(0, 37, 1);
	controls::disable_control_action(0, 21, 1);
	controls::disable_control_action(0, 28, 1);
	controls::disable_control_action(0, 29, 1);
	controls::disable_control_action(0, 171, 1);
	func_210();
	if (controls::_is_input_disabled(2)) {
		if (player::_is_player_cam_control_disabled() || cam::is_screen_faded_out() && !cam::is_screen_fading_in()) {
			ui::_show_cursor_this_frame();
		}
	}
	Global_36331 = 1;
	if (!uParam0->f_563) {
		switch (func_16(player::get_player_ped(player::get_player_index()))) {
		case 1: graphics::_start_screen_effect("SuccessFranklin", 1000, 0); break;

		case 2: graphics::_start_screen_effect("SuccessTrevor", 1000, 0); break;

		default: graphics::_start_screen_effect("SuccessMichael", 1000, 0); break;
		}
		uParam0->f_563 = 1;
	}
	if (uParam0->f_558 == 0) {
		uParam0->f_558 = uParam0->f_572 + system::floor(15000f * fParam2);
	}
	if (iParam4 && uParam0->f_572 >= uParam0->f_558 - 1500) {
		uParam0->f_558 = uParam0->f_572 + 3000;
	}
	if (uParam0->f_560 == 0f) {
		uParam0->f_560 += func_209(30f);
		uParam0->f_560 += IntToFloat(uParam0->f_56) * func_209(25f);
		if (uParam0->f_56 > 0) {
			uParam0->f_560 += func_209(25f * 0.5f);
		}
		if (uParam0->f_549) {
			uParam0->f_560 += func_209(30f) - func_209(2f);
		}
	}
	iVar0 = 1;
	while (iVar0) {
		func_179(1);
		uParam0->f_572 += system::round(0f + 1000f * system::timestep());
		func_192(uParam0, fParam2, iParam3);
		if (IntToFloat(uParam0->f_572) > IntToFloat(uParam0->f_558 + 666) - 15000f * fParam2) {
			if (uParam0->f_30 < 1f) {
				uParam0->f_30 += 0f + 1f / 0.225f * system::timestep();
			}
		}
		uParam0->f_30 = func_191(uParam0->f_30, 0f, 1f);
		if (uParam0->f_572 > uParam0->f_558 - 333) {
			if (!uParam0->f_561) {
				if (uParam0->f_565) {
					uParam0->f_565 = 0;
					uParam0->f_566 = 0;
					uParam0->f_573 = 0.75f;
					graphics::_push_scaleform_movie_function(uParam0->f_1, "ROLL_UP_BACKGROUND");
					graphics::_pop_scaleform_movie_function_void();
				}
				uParam0->f_547 -= (0f + 1f / 1.215f * system::timestep());
			}
		}
		uParam0->f_547 = func_191(uParam0->f_547, 0f, 1f);
		if (uParam0->f_547 <= 0.7f && !uParam0->f_545 && uParam0->f_1 != 0) {
			graphics::_push_scaleform_movie_function(uParam0->f_1, "TRANSITION_OUT");
			graphics::_pop_scaleform_movie_function_void();
			uParam0->f_546 = uParam0->f_572;
			uParam0->f_545 = 1;
		}
		if (uParam0->f_572 > uParam0->f_558 - 333) {
			if (!uParam0->f_561) {
				if (uParam0->f_548 < 1f) {
					uParam0->f_548 += 0f + 1f / 0.3f * system::timestep();
				}
			}
		}
		uParam0->f_548 = func_191(uParam0->f_548, 0f, 1f);
		if (uParam0->f_562) {
			if (controls::_0x6CD79468A1E595C6(2)) {
				if (graphics::has_scaleform_movie_loaded(uParam0->f_4)) {
					if (!uParam0->f_567) {
						func_190(uParam0, !uParam0->f_565 && uParam0->f_56 > 0);
					}
				}
			}
		}
		if (controls::is_control_just_pressed(2, 216) && uParam0->f_558 > uParam0->f_572 + 333) {
			if (!uParam0->f_566 && uParam0->f_56 != 0 && graphics::has_scaleform_movie_loaded(uParam0->f_4) &&
				IntToFloat(uParam0->f_572) > IntToFloat(uParam0->f_558 + 1165) - 15000f * fParam2) {
				if (!uParam0->f_565) {
					graphics::_push_scaleform_movie_function(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					graphics::_pop_scaleform_movie_function_void();
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					if (uParam0->f_572 > uParam0->f_558 - 5000) {
						uParam0->f_558 = uParam0->f_572 + 5000;
					}
				}
				else if (iParam5) {
					graphics::_push_scaleform_movie_function(uParam0->f_1, "ROLL_UP_BACKGROUND");
					graphics::_pop_scaleform_movie_function_void();
					uParam0->f_565 = 0;
					uParam0->f_573 = 0.75f;
				}
				func_190(uParam0, !uParam0->f_565 && uParam0->f_56 > 0);
			}
		}
		if ((uParam0->f_565 || uParam0->f_566) && uParam0->f_56 != 0) {
			if (IntToFloat(uParam0->f_572) > IntToFloat(uParam0->f_558 + 1165) - 15000f * fParam2) {
				if (uParam0->f_566 && !uParam0->f_565) {
					uParam0->f_565 = 1;
					uParam0->f_573 = 0.75f;
					graphics::_push_scaleform_movie_function(uParam0->f_1, "ROLL_DOWN_BACKGROUND");
					graphics::_pop_scaleform_movie_function_void();
				}
				uParam0->f_559 = func_191(uParam0->f_559 + 1f / 0.3f * uParam0->f_573 * system::timestep(), 0f, 1f);
				uParam0->f_573 = func_191(uParam0->f_573 + 0.07f, 0.75f, 1.15f);
			}
		}
		else {
			uParam0->f_559 = func_191(uParam0->f_559 - 1f / 0.3f * uParam0->f_573 * 0.01f * system::timestep(), 0f, 1f);
			uParam0->f_573 = func_191(uParam0->f_573 + 0.07f, 0.75f, 1.15f);
		}
		if (uParam0->f_572 > uParam0->f_558) {
			if (uParam0->f_561) {
				if (!uParam0->f_567) {
					if (controls::is_control_just_pressed(2, 215)) {
						uParam0->f_561 = 0;
					}
				}
			}
			else if (uParam0->f_572 - uParam0->f_546 > 1000 && uParam0->f_545) {
				iVar0 = 0;
			}
		}
		uParam0->f_575 = !iVar0;
		if (iParam1) {
			system::wait(0);
		}
		else {
			if (!iVar0) {
				func_179(0);
			}
			return !iVar0;
		}
	}
	func_179(0);
	return true;
}

// Position - 0x9794
void func_190(var *uParam0, int iParam1) {
	graphics::_push_scaleform_movie_function(uParam0->f_4, "CLEAR_ALL");
	graphics::_pop_scaleform_movie_function_void();
	if (gameplay::is_pc_version()) {
		graphics::_push_scaleform_movie_function(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_pop_scaleform_movie_function_void();
	}
	graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(0);
	func_186(controls::get_control_instructional_button(2, 215, 1));
	func_185("ES_HELP");
	if (gameplay::is_pc_version()) {
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_push_scaleform_movie_function_parameter_int(215);
	}
	graphics::_pop_scaleform_movie_function_void();
	if (iParam1) {
		graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
		graphics::_push_scaleform_movie_function_parameter_int(1);
		func_186(controls::get_control_instructional_button(2, 216, 1));
		func_185("ES_XPAND");
		if (gameplay::is_pc_version()) {
			graphics::_push_scaleform_movie_function_parameter_bool(1);
			graphics::_push_scaleform_movie_function_parameter_int(216);
		}
		graphics::_pop_scaleform_movie_function_void();
	}
	graphics::_push_scaleform_movie_function(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0x9858
float func_191(float fParam0, float fParam1, float fParam2) {
	if (fParam0 > fParam2) {
		return fParam2;
	}
	else if (fParam0 < fParam1) {
		return fParam1;
	}
	return fParam0;
}

// Position - 0x987F
void func_192(var *uParam0, float fParam1, int iParam2) {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	float fVar18;
	float *fVar19;
	float fVar20;
	float fVar21;
	float fVar22;
	char cVar23[16];
	char cVar27[32];
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;
	float fVar41;
	float fVar42;
	float fVar43;

	iVar0 = system::round(uParam0->f_547 * 255f);
	fVar1 = func_208() * 0.25f;
	if (graphics::has_scaleform_movie_loaded(uParam0->f_1)) {
		if (uParam0->f_30 >= 0f) {
			if (!uParam0->f_2) {
				graphics::_push_scaleform_movie_function(uParam0->f_1, "SHOW_MISSION_PASSED_MESSAGE");
				func_185(&uParam0->f_5);
				func_185(&uParam0->f_13);
				if (network::network_is_game_in_progress()) {
					graphics::_push_scaleform_movie_function_parameter_int(150);
				}
				else {
					graphics::_push_scaleform_movie_function_parameter_int(100);
				}
				graphics::_push_scaleform_movie_function_parameter_bool(1);
				graphics::_push_scaleform_movie_function_parameter_int(uParam0->f_56);
				graphics::_push_scaleform_movie_function_parameter_bool(iParam2);
				graphics::_push_scaleform_movie_function_parameter_int(69);
				graphics::_pop_scaleform_movie_function_void();
				uParam0->f_2 = 1;
			}
			if (uParam0->f_56 > 0 && !uParam0->f_3 && uParam0->f_572 > 600) {
				graphics::_push_scaleform_movie_function(uParam0->f_1, "TRANSITION_UP");
				graphics::_push_scaleform_movie_function_parameter_float(0.15f);
				graphics::_push_scaleform_movie_function_parameter_bool(1);
				graphics::_pop_scaleform_movie_function_void();
				uParam0->f_3 = 1;
			}
		}
		func_207();
		graphics::draw_scaleform_movie_fullscreen(uParam0->f_1, 255, 255, 255, 255, 0);
	}
	fVar2 = uParam0->f_560 * uParam0->f_559 * (1f - uParam0->f_548);
	fVar3 = 0f;
	if (uParam0->f_567) {
		fVar3 = (0.1388889f + func_209(2f * 2f)) * uParam0->f_568 * (1f - uParam0->f_548);
		fVar2 += 3f * fVar3;
	}
	if (uParam0->f_548 != 0f) {
		fVar4 = 0f;
		if (fVar2 < fVar4) {
			fVar2 = fVar4;
		}
	}
	else {
		fVar5 = 0f;
		if (uParam0->f_30 >= 0.975f) {
			if (fVar2 < fVar5) {
				fVar2 = fVar5;
			}
		}
	}
	fVar1 = 0.3f * func_208();
	if (uParam0->f_12) {
		fVar1 = 0.5f;
	}
	fVar6 = *uParam0 * 2f;
	fVar7 = func_206(&uParam0->f_13);
	if (fVar6 < fVar7) {
		fVar6 = fVar7 + 3f * 0.006f;
	}
	if (graphics::_get_aspect_ratio(0) < 1.4f) {
		fVar6 *= 1.3f;
	}
	fVar7 = func_206(&uParam0->f_550);
	fVar8 = (0.119f + 0.05f) / func_208() / 2.5f;
	if ((uParam0->f_556 == 1 || uParam0->f_556 == 0) && uParam0->f_557 != 0) {
		if (fVar6 < fVar7 + 2.6f * fVar8) {
			fVar6 = fVar7 + 2.6f * fVar8;
		}
	}
	else if (uParam0->f_556 == 3) {
		if (fVar6 < fVar7 + 2.6f * fVar8) {
			fVar6 = fVar7 + 2.6f * fVar8;
		}
	}
	else if (fVar6 < fVar7 + 1.9f * fVar8) {
		fVar6 = fVar7 + 2f * fVar8;
	}
	fVar9 = 0.499f - fVar6 / 2f + 0.006f;
	fVar10 = 0.499f + fVar6 / 2f - 0.006f;
	controls::set_input_exclusive(2, 215);
	controls::set_input_exclusive(2, 216);
	controls::set_input_exclusive(2, 200);
	controls::disable_control_action(2, 200, 1);
	if (uParam0->f_562 || uParam0->f_567) {
		if (IntToFloat(uParam0->f_558) - 14000f * fParam1 < IntToFloat(uParam0->f_572) ||
			uParam0->f_567 && uParam0->f_559 > 0.95f && uParam0->f_558 - 10000 < uParam0->f_572) {
			if (uParam0->f_567) {
				if (uParam0->f_570 < 0) {
					uParam0->f_570 *= -1;
					uParam0->f_570 = uParam0->f_572 + uParam0->f_570;
				}
				if (uParam0->f_570 > 0) {
					if (uParam0->f_570 - uParam0->f_572 > 0) {
						func_81(uParam0->f_570 - uParam0->f_572, "TIMER_TIME", 0, 0, -1, 0, 2, 0, 1, 0, 0, 0, 0, 0, 0,
								0, 0);
					}
					else {
						uParam0->f_570 = 0;
						uParam0->f_569 = 1;
						uParam0->f_567 = 0;
						uParam0->f_561 = 0;
						uParam0->f_562 = 0;
						uParam0->f_558 = uParam0->f_572 + 500;
						uParam0->f_570 = 0;
					}
				}
				if (uParam0->f_568 < 1f) {
					uParam0->f_568 += 0f + 1f / 0.166f * system::timestep();
					if (uParam0->f_568 > 1f) {
						uParam0->f_568 = 1f;
					}
				}
			}
			if (cam::is_screen_faded_out()) {
				ui::hide_loading_on_fade_this_frame();
			}
			if (uParam0->f_4 != 0 && uParam0->f_548 < 0.1f && uParam0->f_572 <= uParam0->f_558) {
				ui::hide_hud_component_this_frame(7);
				ui::hide_hud_component_this_frame(8);
				ui::hide_hud_component_this_frame(9);
				ui::hide_hud_component_this_frame(6);
				graphics::draw_scaleform_movie_fullscreen(uParam0->f_4, 255, 255, 255, iVar0, 0);
			}
			if (uParam0->f_567) {
				controls::disable_control_action(0, 140, 1);
				controls::disable_control_action(0, 141, 1);
				controls::disable_control_action(0, 142, 1);
				controls::disable_control_action(2, 188, 1);
				if (controls::is_disabled_control_just_pressed(2, 188)) {
					audio::play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 3;
					uParam0->f_570 = 0;
					audio::play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				controls::disable_control_action(2, 187, 1);
				if (controls::is_disabled_control_just_pressed(2, 187)) {
					audio::play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 4;
					uParam0->f_570 = 0;
					audio::play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
				controls::disable_control_action(2, 202, 1);
				if (controls::is_disabled_control_just_pressed(2, 202)) {
					audio::play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_567 = 0;
					uParam0->f_561 = 0;
					uParam0->f_562 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					uParam0->f_569 = 2;
					uParam0->f_570 = 0;
					audio::play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
			else if (uParam0->f_562) {
				ui::hide_hud_component_this_frame(7);
				ui::hide_hud_component_this_frame(8);
				ui::hide_hud_component_this_frame(9);
				ui::hide_hud_component_this_frame(6);
				controls::disable_control_action(0, 140, 1);
				controls::disable_control_action(0, 141, 1);
				controls::disable_control_action(0, 142, 1);
				if (controls::is_control_just_pressed(2, 215) || controls::is_disabled_control_just_pressed(2, 200)) {
					audio::play_sound_frontend(-1, "CONTINUE", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
					uParam0->f_562 = 0;
					uParam0->f_561 = 0;
					uParam0->f_558 = uParam0->f_572 + 500;
					audio::play_sound_frontend(-1, "continue", "HUD_FRONTEND_DEFAULT_SOUNDSET", 0);
				}
			}
		}
	}
	ui::get_hud_colour(1, &iVar13, &iVar14, &iVar15, &iVar16);
	ui::set_text_colour(iVar13, iVar14, iVar15, iVar0);
	ui::set_text_wrap(fVar9, fVar10);
	ui::set_text_justification(0);
	ui::set_text_scale(1f, 0.4f);
	fVar1 -= func_209(6f);
	fVar1 += func_209(30f) - func_209(2f * 2f);
	fVar11 = fVar2 - func_209(2f * 14f);
	if (fVar11 >= 0f) {
		fVar12 = func_191(fVar11 / (0.6f * func_209(25f)), 0f, 1f);
		func_207();
		graphics::draw_rect(0.5f, fVar1 - (func_209(2f - 0.5f) - 0.001388889f), fVar6, func_205(1f), iVar13, iVar14,
							iVar15, system::round(fVar12 * IntToFloat(iVar16)), 0);
	}
	else {
		return;
	}
	fVar1 += func_209(2f * 0.3f);
	if (uParam0->f_56 > 0) {
		fVar1 += func_209(25f * 0.2f);
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 < uParam0->f_56) {
		fVar11 = fVar2 - (fVar1 - 0.3f * func_208());
		if (fVar11 >= 0f) {
			fVar12 = func_191(fVar11 / (0.8f * func_209(25f)), 0f, 1f);
			func_202(uParam0, iVar17, fVar1 + func_209(2f), fVar9, fVar10, system::round(IntToFloat(iVar0) * fVar12));
		}
		else {
			return;
		}
		fVar1 += func_209(25f);
		iVar17++;
	}
	if (uParam0->f_56 > 0) {
		fVar1 += func_209(25f * 0.2f);
		fVar11 = fVar2 - (fVar1 - 0.3f * func_208());
		if (fVar11 >= 0f) {
			fVar1 += func_209(2f);
			fVar12 = func_191(fVar11 / (0.6f * func_209(25f)), 0f, 1f);
			func_207();
			graphics::draw_rect(0.5f, fVar1 + func_209(2f * 0.5f), fVar6, func_205(1f), iVar13, iVar14, iVar15,
								system::round(fVar12 * IntToFloat(iVar16)), 0);
		}
	}
	if (uParam0->f_549) {
		fVar1 += func_209(25f * 0.2f);
		fVar11 = fVar2 - (fVar1 - 0.3f * func_208());
		if (fVar11 >= 0f) {
			fVar12 = func_191(fVar11 / (0.8f * func_209(25f)), 0f, 1f);
			ui::set_text_colour(iVar13, iVar14, iVar15, system::round(fVar12 * IntToFloat(iVar0)));
			func_195(7, 0, 1, &fVar18, &fVar19, 0);
			fVar20 = fVar9;
			fVar21 = fVar10;
			if (unk::_get_current_language_id() == 0) {
				fVar20 = fVar9 + 0.119f / func_208() / 2.5f;
				fVar21 = fVar10 - 0.119f / func_208() / 2.5f;
				if (uParam0->f_556 == 1) {
					fVar20 = fVar9 + (0.119f + 0.05f) / func_208() / 2.5f;
					fVar21 = fVar10 - (0.119f + 0.05f) / func_208() / 2.5f;
				}
			}
			if (uParam0->f_557 == 0) {
				fVar20 += (fVar18 * 0.28f + 0.006f) / 2f;
				fVar21 += (fVar18 * 0.28f + 0.006f) / 2f;
			}
			ui::set_text_wrap(fVar20, fVar21);
			ui::set_text_justification(1);
			ui::set_text_scale(1f, 0.4f);
			func_194(&uParam0->f_550, fVar20, fVar1 + func_209(2f * 2f), 0, 0, 0);
			ui::set_text_wrap(fVar20, fVar21);
			ui::set_text_justification(2);
			ui::set_text_scale(1f, 0.4f);
			ui::set_text_centre(0);
			func_207();
			fVar22 = fVar21;
			StringCopy(&cVar23, "MPHud", 16);
			StringCopy(&cVar27, "MissionPassedMedal", 32);
			fVar22 -= (fVar18 * 0.28f + 0.006f);
			ui::set_text_wrap(fVar20, fVar22);
			ui::set_text_colour(iVar13, iVar14, iVar15, system::round(fVar12 * IntToFloat(iVar0)));
			switch (uParam0->f_556) {
			case 0:
				ui::begin_text_command_display_text("PERCENTAGE");
				ui::add_text_component_integer(uParam0->f_554);
				ui::end_text_command_display_text(fVar20, fVar1 + func_209(2f * 2f), 0);
				break;

			case 1:
				ui::begin_text_command_display_text("FO_TWO_NUM");
				ui::add_text_component_integer(uParam0->f_554);
				ui::add_text_component_integer(uParam0->f_555);
				ui::end_text_command_display_text(fVar20, fVar1 + func_209(2f * 2f), 0);
				break;

			case 2:
				ui::begin_text_command_display_text("MTPHPER_XPNO");
				ui::add_text_component_integer(uParam0->f_554);
				ui::end_text_command_display_text(fVar20, fVar1 + func_209(2f * 2f), 0);
				break;

			case 3:
				ui::begin_text_command_display_text("ESDOLLA");
				ui::add_text_component_formatted_integer(uParam0->f_554, 1);
				ui::end_text_command_display_text(fVar20, fVar1 + func_209(2f * 2f), 0);
				break;
			}
			if (uParam0->f_557 != 0) {
				iVar35 = 255;
				iVar36 = 255;
				iVar37 = 255;
				iVar38 = iVar0;
				switch (uParam0->f_557) {
				case 1: ui::get_hud_colour(107, &iVar35, &iVar36, &iVar37, &iVar38); break;

				case 3: ui::get_hud_colour(109, &iVar35, &iVar36, &iVar37, &iVar38); break;

				case 2: ui::get_hud_colour(108, &iVar35, &iVar36, &iVar37, &iVar38); break;
				}
				fVar39 = 0.001388889f * 5f;
				fVar40 = 0.00078125f * 16f * 2f;
				fVar41 = 0.001388889f * 16f * 2f;
				fVar42 = fVar21 + func_193(4f) - 0.006f;
				fVar43 = fVar1 + func_209(10f) + fVar39;
				if (uParam0->f_556 == -1) {
					fVar42 -= 0.006f * 6f;
				}
				fVar40 *= 0.65f;
				fVar41 *= 0.65f;
				graphics::draw_sprite(&cVar23, &cVar27, fVar42, fVar43, fVar40, fVar41, 0f, iVar35, iVar36, iVar37,
									  system::round(fVar12 * IntToFloat(iVar0)), 0);
			}
			fVar1 += func_209(30f) - 2f;
		}
	}
}

// Position - 0xA3D1
float func_193(float fParam0) { return fParam0 * 0.00078125f; }

// Position - 0xA3E1
void func_194(char *sParam0, float fParam1, float fParam2, int iParam3, int iParam4, int iParam5) {
	ui::set_text_centre(iParam3);
	ui::set_text_font(iParam5);
	func_207();
	if (iParam4) {
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_player_name(sParam0);
	}
	else {
		ui::begin_text_command_display_text(sParam0);
	}
	ui::end_text_command_display_text(fParam1, fParam2, 0);
}

// Position - 0xA41E
int func_195(int iParam0, int iParam1, int iParam2, float fParam3, float *fParam4, int iParam5) {
	char cVar0[64];
	char cVar16[64];
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	vector3 vVar37;

	StringCopy(&cVar0, func_201(iParam0), 64);
	StringCopy(&cVar16, func_198(iParam0, iParam1), 64);
	if (gameplay::get_hash_key(&cVar16) != 0) {
		fVar34 = 1f;
		if (iParam5) {
			graphics::_get_active_screen_resolution(&iVar32, &iVar33);
			fVar35 = graphics::_get_aspect_ratio(0);
			if (func_197()) {
				iVar32 = system::round(system::to_float(iVar33) * fVar35);
			}
			fVar36 = system::to_float(iVar32) / system::to_float(iVar33);
			fVar34 = fVar36 / fVar35;
			if (func_197()) {
				fVar34 = 1f;
			}
			if (script::_get_number_of_instances_of_script_with_name_hash(joaat("director_mode")) > 0) {
				graphics::get_screen_resolution(&iVar32, &iVar33);
			}
			iVar32 = system::round(system::to_float(iVar32) / fVar34);
			iVar33 = system::round(system::to_float(iVar33) / fVar34);
		}
		else {
			graphics::get_screen_resolution(&iVar32, &iVar33);
		}
		vVar37 = {graphics::get_texture_resolution(&cVar0, &cVar16)};
		vVar37.x *= func_196(iParam0) / fVar34;
		vVar37.y *= func_196(iParam0) / fVar34;
		if (!iParam2) {
			vVar37.x -= 2f;
			vVar37.y -= 2f;
		}
		if (iParam0 == 30) {
			vVar37.x = 288f;
			vVar37.y = 106f;
		}
		if (iParam0 == 29 && gameplay::get_hash_key(&Global_17290.f_6703[29 /*16*/]) == -1487683087) {
			vVar37.x = 106f;
			vVar37.y = 106f;
		}
		*fParam3 = vVar37.x / IntToFloat(iVar32) * IntToFloat(iVar32 / iVar33);
		*fParam4 = vVar37.y / IntToFloat(iVar33) / (vVar37.x / IntToFloat(iVar32)) * *fParam3;
		if (!iParam5) {
			if (!graphics::get_is_widescreen() && iParam0 != 30) {
				*fParam3 *= 1.33f;
			}
		}
		if (iParam0 == 29) {
			if (*fParam3 > Global_17289) {
				*fParam4 *= Global_17289 / *fParam3;
				*fParam3 = Global_17289;
			}
		}
		return 1;
	}
	return 0;
}

// Position - 0xA5CF
float func_196(int iParam0) {
	switch (iParam0) {
	case 33:
	case 4:
	case 11:
	case 31:
	case 20:
	case 15:
	case 10:
	case 12:
	case 13:
	case 32:
	case 9:
	case 5:
	case 6:
	case 7:
	case 14:
	case 18:
	case 19:
	case 17:
	case 28:
	case 26:
	case 27:
	case 49: return 0.5f;
	}
	return 1f;
}

// Position - 0xA66E
bool func_197() {
	int iVar0;
	int iVar1;
	float fVar2;

	graphics::_get_active_screen_resolution(&iVar0, &iVar1);
	fVar2 = system::to_float(iVar0) / system::to_float(iVar1);
	if (fVar2 > 3.5f) {
		return true;
	}
	return false;
}

// Position - 0xA6A0
var func_198(int iParam0, int iParam1) {
	char *sVar0[2];
	var uVar3;
	struct<13> Var19;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_6703[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_6703[iParam0 /*16*/]) == -1487683087) {
			Var19 = {func_200(player::player_id())};
			if (network::_0x5835D9CD92E83184(&Var19, &uVar3)) {
				return func_199(&uVar3);
			}
		}
		else {
			return func_199(&Global_17290.f_6703[iParam0 /*16*/]);
		}
	}
	switch (iParam0) {
	case 3:
		sVar0[0] = "MP_hostCrown";
		sVar0[1] = "MP_hostCrown";
		break;

	case 21:
		sVar0[0] = "MP_SpecItem_Coke";
		sVar0[1] = "MP_SpecItem_Coke";
		break;

	case 22:
		sVar0[0] = "MP_SpecItem_Heroin";
		sVar0[1] = "MP_SpecItem_Heroin";
		break;

	case 23:
		sVar0[0] = "MP_SpecItem_Weed";
		sVar0[1] = "MP_SpecItem_Weed";
		break;

	case 24:
		sVar0[0] = "MP_SpecItem_Meth";
		sVar0[1] = "MP_SpecItem_Meth";
		break;

	case 25:
		sVar0[0] = "MP_SpecItem_Cash";
		sVar0[1] = "MP_SpecItem_Cash";
		break;

	case 1:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 2:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 4:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 6:
		sVar0[0] = "Shop_Box_CrossB";
		sVar0[1] = "Shop_Box_Cross";
		break;

	case 7:
		sVar0[0] = "Shop_Box_BlankB";
		sVar0[1] = "Shop_Box_Blank";
		break;

	case 5:
		sVar0[0] = "Shop_Box_TickB";
		sVar0[1] = "Shop_Box_Tick";
		break;

	case 8:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 9:
		sVar0[0] = "Shop_Clothing_Icon_B";
		sVar0[1] = "Shop_Clothing_Icon_A";
		break;

	case 10:
		sVar0[0] = "Shop_GunClub_Icon_B";
		sVar0[1] = "Shop_GunClub_Icon_A";
		break;

	case 17:
		sVar0[0] = "Shop_Ammo_Icon_B";
		sVar0[1] = "Shop_Ammo_Icon_A";
		break;

	case 18:
		sVar0[0] = "Shop_Armour_Icon_B";
		sVar0[1] = "Shop_Armour_Icon_A";
		break;

	case 19:
		sVar0[0] = "Shop_Health_Icon_B";
		sVar0[1] = "Shop_Health_Icon_A";
		break;

	case 20:
		sVar0[0] = "Shop_MakeUp_Icon_B";
		sVar0[1] = "Shop_MakeUp_Icon_A";
		break;

	case 11:
		sVar0[0] = "Shop_Tattoos_Icon_B";
		sVar0[1] = "Shop_Tattoos_Icon_A";
		break;

	case 12:
		sVar0[0] = "Shop_Garage_Icon_B";
		sVar0[1] = "Shop_Garage_Icon_A";
		break;

	case 13:
		sVar0[0] = "Shop_Garage_Bike_Icon_B";
		sVar0[1] = "Shop_Garage_Bike_Icon_A";
		break;

	case 14:
		sVar0[0] = "Shop_Barber_Icon_B";
		sVar0[1] = "Shop_Barber_Icon_A";
		break;

	case 15:
		sVar0[0] = "shop_Lock";
		sVar0[1] = "shop_Lock";
		break;

	case 16:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 26:
		sVar0[0] = "arrowleft";
		sVar0[1] = "arrowleft";
		break;

	case 27:
		sVar0[0] = "arrowright";
		sVar0[1] = "arrowright";
		break;

	case 28:
		sVar0[0] = "MP_AlertTriangle";
		sVar0[1] = "MP_AlertTriangle";
		break;

	case 29:
		sVar0[0] = "shop_NEW_Star";
		sVar0[1] = "shop_NEW_Star";
		break;

	case 31:
		sVar0[0] = "Shop_Michael_Icon_B";
		sVar0[1] = "Shop_Michael_Icon_A";
		break;

	case 32:
		sVar0[0] = "Shop_Franklin_Icon_B";
		sVar0[1] = "Shop_Franklin_Icon_A";
		break;

	case 33:
		sVar0[0] = "Shop_Trevor_Icon_B";
		sVar0[1] = "Shop_Trevor_Icon_A";
		break;

	case 48:
		sVar0[0] = "SaleIcon";
		sVar0[1] = "SaleIcon";
		break;

	case 49:
		sVar0[0] = "Shop_Tick_Icon";
		sVar0[1] = "Shop_Tick_Icon";
		break;

	case 0:
		sVar0[0] = "";
		sVar0[1] = "";
		break;
	}
	if (iParam1) {
		return sVar0[0];
	}
	return sVar0[1];
}

// Position - 0xAAD5
var func_199(var uParam0) { return uParam0; }

// Position - 0xAADF
struct<13> func_200(int iParam0) {
	struct<13> Var0;

	network::network_handle_from_player(iParam0, &Var0, 13);
	return Var0;
}

// Position - 0xAAF6
char *
func_201(int iParam0) {
	var uVar0;
	struct<13> Var16;

	if (!gameplay::is_string_null_or_empty(&Global_17290.f_5886[iParam0 /*16*/])) {
		if (gameplay::get_hash_key(&Global_17290.f_5886[iParam0 /*16*/]) == -1487683087) {
			Var16 = {func_200(player::player_id())};
			network::_0x5835D9CD92E83184(&Var16, &uVar0);
			return func_199(&uVar0);
		}
		else {
			return func_199(&Global_17290.f_5886[iParam0 /*16*/]);
		}
	}
	if (iParam0 == 48) {
		return "MPShopSale";
	}
	return "CommonMenu";
}

// Position - 0xAB6B
void func_202(var *uParam0, int iParam1, float fParam2, float fParam3, float fParam4, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	ui::get_hud_colour(1, &iVar0, &iVar1, &iVar2, &uVar3);
	ui::set_text_colour(iVar0, iVar1, iVar2, iParam5);
	ui::set_text_wrap(fParam3, fParam4);
	ui::set_text_justification(1);
	ui::set_text_scale(1f, func_204(14f));
	ui::set_text_centre(0);
	ui::set_text_font(0);
	func_207();
	if (uParam0->f_531[iParam1]) {
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_player_name(&uParam0->f_71[iParam1 /*16*/]);
	}
	else {
		ui::begin_text_command_display_text(&uParam0->f_71[iParam1 /*16*/]);
		if (uParam0->f_57[iParam1] == 16 || uParam0->f_57[iParam1] == 17) {
			ui::add_text_component_integer(uParam0->f_489[iParam1]);
		}
	}
	ui::end_text_command_display_text(fParam3, fParam2, 0);
	fVar4 = fParam4;
	switch (uParam0->f_517[iParam1]) {
	case 0: break;

	case 1:
		func_195(7, 0, 1, &fVar5, &fVar6, 0);
		graphics::draw_sprite("CommonMenu", func_198(7, 0), fParam4 - 0.006f, fParam2 + func_209(2f) + 0.25f * fVar6,
							  fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
		fVar4 -= (fVar5 * 0.38f + 0.006f);
		break;

	case 2:
		func_195(5, 0, 1, &fVar5, &fVar6, 0);
		graphics::draw_sprite("CommonMenu", func_198(5, 0), fParam4 - 0.006f, fParam2 + func_209(2f) + 0.25f * fVar6,
							  fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
		fVar4 -= (fVar5 * 0.38f + 0.006f);
		break;

	case 3:
		func_195(6, 0, 1, &fVar5, &fVar6, 0);
		graphics::draw_sprite("CommonMenu", func_198(6, 0), fParam4 - 0.006f, fParam2 + func_209(2f) + 0.25f * fVar6,
							  fVar5, fVar6, 0f, 255, 255, 255, iParam5, 0);
		fVar4 -= (fVar5 * 0.38f + 0.006f);
		break;
	}
	if (uParam0->f_57[iParam1] == 0) {
		return;
	}
	if (uParam0->f_57[iParam1] == 15) {
		ui::set_text_justification(1);
	}
	else {
		ui::set_text_justification(2);
	}
	ui::set_text_scale(1f, func_204(14f));
	if (uParam0->f_57[iParam1] == 5 || uParam0->f_57[iParam1] == 4) {
		ui::set_text_wrap(fParam3, fVar4 - 0.00078125f * 3f);
	}
	else {
		ui::set_text_wrap(fParam3, fVar4 + 0.00078125f * 2f);
	}
	ui::set_text_colour(iVar0, iVar1, iVar2, iParam5);
	func_203(uParam0->f_489[iParam1], uParam0->f_503[iParam1], fParam4, fParam2, &uParam0->f_280[iParam1 /*16*/],
			 uParam0->f_57[iParam1]);
}

// Position - 0xADF6
void func_203(int iParam0, int iParam1, float fParam2, float fParam3, char *sParam4, int iParam5) {
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = 1;
	ui::set_text_centre(0);
	ui::set_text_font(0);
	func_207();
	fVar1 = 0f;
	fVar2 = 8f * 0.00078125f;
	fVar3 = 16f * 0.001388889f;
	iVar4 = 93;
	iVar5 = 182;
	iVar6 = 229;
	if (iParam5 == 4) {
		iVar4 = 194;
		iVar5 = 80;
		iVar6 = 80;
	}
	switch (iParam5) {
	case 4:
	case 5:
		ui::set_text_scale(1f, func_204(18f));
		ui::set_text_font(4);
		if (iParam0 < 0) {
			ui::_begin_text_command_width("ESMINDOLLA");
			ui::add_text_component_formatted_integer(-1 * iParam0, 1);
			fVar1 = ui::_end_text_command_get_width(0);
		}
		else {
			ui::_begin_text_command_width("ESDOLLA");
			ui::add_text_component_formatted_integer(iParam0, 1);
			fVar1 = ui::_end_text_command_get_width(0);
		}
		fVar1 -= fVar1 % 0.00078125f;
		graphics::draw_sprite("CommonMenu", "BettingBox_Left", fParam2 - fVar1,
							  fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255,
							  0);
		graphics::draw_sprite("CommonMenu", "BettingBox_Centre", fParam2 - fVar1 * 0.5f - 0.00078125f * 2f,
							  fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar1 - fVar2 * 0.5f, fVar3, 0f, iVar4, iVar5,
							  iVar6, 255, 0);
		graphics::draw_sprite("CommonMenu", "BettingBox_Right", fParam2 - 0.00078125f * 4f,
							  fParam3 + fVar3 * 0.6f + 0.001388889f * 2f, fVar2, fVar3, 0f, iVar4, iVar5, iVar6, 255,
							  0);
		ui::set_text_scale(1f, func_204(14f));
		break;
	}
	ui::_set_notification_color_next(iVar0);
	switch (iParam5) {
	case 11:
		ui::begin_text_command_display_text("PERCENTAGE");
		ui::add_text_component_integer(iParam0);
		break;

	case 1:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("FO_NUM");
		ui::add_text_component_integer(iParam0);
		break;

	case 2:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("FO_TWO_NUM");
		ui::add_text_component_integer(iParam0);
		ui::add_text_component_integer(iParam1);
		break;

	case 4:
	case 5: ui::set_text_scale(1f, func_204(18f));

	case 3:
		if (iParam0 < 0) {
			ui::begin_text_command_display_text("ESMINDOLLA");
			ui::add_text_component_formatted_integer(-1 * iParam0, 1);
		}
		else {
			ui::begin_text_command_display_text("ESDOLLA");
			ui::add_text_component_formatted_integer(iParam0, 1);
		}
		break;

	case 6: ui::begin_text_command_display_text(sParam4); break;

	case 7:
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_player_name(sParam4);
		break;

	case 8:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_time(iParam0, 14);
		break;

	case 9:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_time(iParam0, 6);
		break;

	case 10:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_time(iParam0, 2055);
		break;

	case 18:
		ui::set_text_font(5);
		ui::begin_text_command_display_text("STRING");
		ui::add_text_component_substring_time(iParam0, 2055);
		break;

	case 12:
		ui::begin_text_command_display_text("AHD_DIST");
		ui::add_text_component_integer(iParam0);
		break;

	case 13:
		ui::begin_text_command_display_text(sParam4);
		ui::add_text_component_integer(iParam0);
		ui::add_text_component_integer(iParam1);
		break;

	case 15:
	case 14:
		ui::begin_text_command_display_text(sParam4);
		ui::add_text_component_integer(iParam0);
		ui::add_text_component_integer(iParam1);
		break;

	case 16:
		ui::begin_text_command_display_text(sParam4);
		ui::add_text_component_integer(iParam1);
		break;
	}
	if (iParam5 != 17) {
		if (iParam5 == 4 || iParam5 == 5) {
			ui::end_text_command_display_text(fParam2 - 0.00078125f * 4f, fParam3, 0);
			ui::set_text_scale(1f, func_204(14f));
		}
		else {
			ui::end_text_command_display_text(fParam2, fParam3, 0);
		}
	}
}

// Position - 0xB16F
float func_204(float fParam0) { return fParam0 * 0.025f; }

// Position - 0xB17F
float func_205(float fParam0) { return fParam0 * 0.0009259259f; }

// Position - 0xB18F
float func_206(char *sParam0) {
	ui::_begin_text_command_width(sParam0);
	return ui::_end_text_command_get_width(1) / 2f;
}

// Position - 0xB1A4
void func_207() {
	graphics::_set_2d_layer(1);
	if (cam::is_screen_fading_out() || cam::is_screen_faded_out()) {
		graphics::_set_2d_layer(7);
	}
	graphics::_0xC6372ECD45D73BCD(0);
}

// Position - 0xB1CC
float func_208() {
	float fVar0;

	fVar0 = 1f;
	if (gameplay::is_pc_version()) {
	}
	return fVar0;
}

// Position - 0xB1E0
float func_209(float fParam0) { return fParam0 * 0.001388889f; }

// Position - 0xB1F0
void func_210() {
	if (Global_14443.f_1 != 1) {
		if (func_67(0)) {
			func_211(0);
		}
		gameplay::set_bit(&Global_2314, 2);
	}
}

// Position - 0xB218
void func_211(int iParam0) {
	if (Global_14604) {
		func_212(0, 0);
	}
	if (Global_14443.f_1 == 10 || Global_14443.f_1 == 9) {
		gameplay::set_bit(&Global_2314, 16);
	}
	if (audio::is_mobile_phone_call_ongoing()) {
		audio::stop_scripted_conversation(0);
	}
	Global_15745 = 5;
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 30);
	}
	else {
		gameplay::clear_bit(&Global_2313, 30);
	}
	if (!func_10()) {
		Global_14443.f_1 = 3;
	}
}

// Position - 0xB288
void func_212(int iParam0, int iParam1) {
	if (iParam0) {
		if (func_67(0)) {
			Global_14604 = 1;
			if (iParam1) {
				mobile::get_mobile_phone_position(&Global_14380);
			}
			Global_14371 = {Global_14389[Global_14388 /*3*/]};
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
	else if (Global_14604 == 1) {
		Global_14604 = 0;
		Global_14371 = {Global_14396[Global_14388 /*3*/]};
		if (iParam1) {
			mobile::set_mobile_phone_position(Global_14380);
		}
		else {
			mobile::set_mobile_phone_position(Global_14371);
		}
	}
}

// Position - 0xB2FC
int func_213(var *uParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	int iVar0;
	int iVar1;

	if (*uParam0 == 0) {
		return 0;
	}
	iVar0 = 0;
	if (iParam5 == 1) {
		iVar0 = 1;
	}
	iVar1 = uParam0->f_123;
	if (iVar1 < 8) {
		uParam0->f_2[iVar1 /*15*/] = sParam1;
		uParam0->f_2[iVar1 /*15*/].f_1 = iVar0;
		uParam0->f_2[iVar1 /*15*/].f_2 = iParam6;
		uParam0->f_2[iVar1 /*15*/].f_12 = 0;
		uParam0->f_2[iVar1 /*15*/].f_13 = 0;
		uParam0->f_2[iVar1 /*15*/].f_14 = 0;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/] = iParam2;
		uParam0->f_2[iVar1 /*15*/].f_3[0 /*2*/].f_1 = iParam3;
		if (iParam4 == 1) {
			gameplay::set_bit(&uParam0->f_2[iVar1 /*15*/].f_13, 0);
		}
		uParam0->f_2[iVar1 /*15*/].f_14++;
		uParam0->f_123++;
		return 1;
	}
	return 0;
}

// Position - 0xB3C5
void func_214(var *uParam0, int iParam1, int iParam2, int iParam3, int iParam4) {
	if (*uParam0 == 0) {
		*uParam0 = graphics::request_scaleform_movie_instance("instructional_buttons");
	}
	uParam0->f_1 = 0;
	uParam0->f_123 = 0;
	if (iParam1) {
		func_183(&uParam0->f_1, 32);
	}
	if (graphics::has_scaleform_movie_loaded(*uParam0)) {
		func_183(&uParam0->f_1, 1);
		if (iParam2) {
			graphics::set_scaleform_movie_to_use_system_time(*uParam0, 1);
		}
	}
	if (gameplay::is_pc_version()) {
		if (iParam3) {
			func_183(&uParam0->f_1, 4096);
		}
	}
	if (iParam4) {
		func_183(&uParam0->f_1, 8192);
	}
}

// Position - 0xB43F
int func_215(var *uParam0, int iParam1, int iParam2) {
	uParam0->f_12 = iParam2;
	func_218(uParam0);
	func_217(uParam0);
	if (gameplay::are_strings_equal(&uParam0->f_550, "SPR_RESULT") ||
		gameplay::are_strings_equal(&uParam0->f_550, "") && uParam0->f_56 > 0) {
		uParam0->f_566 = 1;
	}
	if (network::network_is_game_in_progress()) {
		graphics::request_streamed_texture_dict("MPHud", 0);
	}
	if (uParam0->f_1 == 0) {
		graphics::request_streamed_texture_dict("CommonMenu", 0);
		graphics::request_streamed_texture_dict("MPLeaderboard", 0);
		graphics::request_streamed_texture_dict("MPHud", 0);
		uParam0->f_1 = unk_0x67D02A194A2FC2BD("MP_BIG_MESSAGE_FREEMODE");
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
	}
	uParam0->f_4 = graphics::request_scaleform_movie_instance("INSTRUCTIONAL_BUTTONS");
	if (iParam1) {
		while (!graphics::has_scaleform_movie_loaded(uParam0->f_1) ||
			   !graphics::has_streamed_texture_dict_loaded("CommonMenu") ||
			   !graphics::has_streamed_texture_dict_loaded("MPLeaderboard") ||
			   !graphics::has_streamed_texture_dict_loaded("MPHud")) {
			system::wait(0);
		}
		if (uParam0->f_562 || uParam0->f_567) {
			while (!graphics::has_scaleform_movie_loaded(uParam0->f_4)) {
				system::wait(0);
			}
		}
	}
	else {
		if (!graphics::has_scaleform_movie_loaded(uParam0->f_1) ||
			!graphics::has_streamed_texture_dict_loaded("CommonMenu") ||
			!graphics::has_streamed_texture_dict_loaded("MPLeaderboard") ||
			!graphics::has_streamed_texture_dict_loaded("MPHud")) {
			return 0;
		}
		if (uParam0->f_562) {
			if (!graphics::has_scaleform_movie_loaded(uParam0->f_4)) {
				return 0;
			}
		}
	}
	if (uParam0->f_562) {
		if (uParam0->f_567) {
			func_216(uParam0);
		}
		else if (uParam0->f_56 != 0) {
			func_190(uParam0, 1);
		}
		else {
			func_190(uParam0, 0);
		}
	}
	Global_69963 = 1;
	return 1;
}

// Position - 0xB5DE
void func_216(var *uParam0) {
	graphics::_push_scaleform_movie_function(uParam0->f_4, "CLEAR_ALL");
	graphics::_pop_scaleform_movie_function_void();
	if (gameplay::is_pc_version()) {
		graphics::_push_scaleform_movie_function(uParam0->f_4, "TOGGLE_MOUSE_BUTTONS");
		graphics::_push_scaleform_movie_function_parameter_bool(1);
		graphics::_pop_scaleform_movie_function_void();
	}
	graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(2);
	func_186(controls::get_control_instructional_button(2, 188, 1));
	func_185("ES_HELP_TU");
	graphics::_pop_scaleform_movie_function_void();
	graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(1);
	func_186(controls::get_control_instructional_button(2, 187, 1));
	func_185("ES_HELP_TD");
	graphics::_pop_scaleform_movie_function_void();
	graphics::_push_scaleform_movie_function(uParam0->f_4, "SET_DATA_SLOT");
	graphics::_push_scaleform_movie_function_parameter_int(0);
	func_186(controls::get_control_instructional_button(2, 202, 1));
	func_185("ES_HELP_AB");
	graphics::_pop_scaleform_movie_function_void();
	graphics::_push_scaleform_movie_function(uParam0->f_4, "DRAW_INSTRUCTIONAL_BUTTONS");
	graphics::_pop_scaleform_movie_function_void();
}

// Position - 0xB6A3
void func_217(float *fParam0) {
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	fVar0 = 0f;
	ui::set_text_justification(0);
	ui::set_text_scale(1f, func_204(16f));
	if (fParam0->f_31 == 0) {
		if (fParam0->f_29) {
			ui::_begin_text_command_width("STRING");
			ui::add_text_component_substring_player_name(&fParam0->f_13);
			fVar0 = ui::_end_text_command_get_width(1);
		}
		else {
			ui::_begin_text_command_width(&fParam0->f_13);
			fVar0 = ui::_end_text_command_get_width(1);
		}
	}
	else {
		ui::_begin_text_command_width("STRING");
		iVar1 = 0;
		iVar2 = 0;
		iVar3 = 0;
		iVar3 = 0;
		while (iVar3 < fParam0->f_31) {
			switch (fParam0->f_32[iVar3]) {
			case 0:
				ui::add_text_component_integer(fParam0->f_53[iVar1]);
				iVar1++;
				break;

			case 1:
				ui::add_text_component_substring_text_label(&fParam0->f_36[iVar2 /*16*/]);
				iVar2++;
				break;

			case 2:
				ui::add_text_component_substring_player_name(&fParam0->f_36[iVar2 /*16*/]);
				iVar2++;
				break;
			}
			iVar3++;
		}
		fVar0 = ui::_end_text_command_get_width(1);
	}
	if (fVar0 > 0.1125f * 2f - 0.006f * 2f) {
		*fParam0 = fVar0 / 2f + 0.006f * 2f;
	}
}

// Position - 0xB7AB
void func_218(var *uParam0) {
	uParam0->f_547 = 1f;
	uParam0->f_546 = 0;
	uParam0->f_568 = 0f;
	uParam0->f_558 = 0;
	uParam0->f_30 = 0f;
	uParam0->f_548 = 0f;
	uParam0->f_559 = 0f;
	uParam0->f_560 = 0f;
	uParam0->f_545 = 0;
	uParam0->f_563 = 0;
	uParam0->f_572 = 0;
	uParam0->f_564 = 0;
	uParam0->f_565 = 0;
	uParam0->f_566 = 0;
	*uParam0 = 0.1125f;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_574 = 0;
	uParam0->f_575 = 0;
	uParam0->f_573 = 1f;
}

// Position - 0xB82A
void func_219() {
	int iVar0;
	int iVar1;

	if (!iLocal_377) {
		func_225(&uLocal_388, &Local_964, &Global_55837, 0);
		fLocal_372 *= 1000f;
		if (Global_86001) {
			func_224(&uLocal_388, 6, &Local_964.f_12, "MTPHPERSKI", system::floor(fLocal_372), 0, 3, 0);
			func_224(&uLocal_388, 6, &Local_964.f_24, "MTPHPERSKI", 0, 0, 3, 0);
			func_224(&uLocal_388, 6, &Local_964.f_30, "MTPHPERSKI", system::round(fLocal_374 + fLocal_373), 0, 3, 0);
			func_223();
		}
		else {
			if (bLocal_376) {
				func_224(&uLocal_388, 6, &Local_964.f_12, "MTPHPERRET", system::floor(fLocal_372), 0, 3, 0);
			}
			else {
				func_224(&uLocal_388, 9, &Local_964.f_12, "", system::floor(fLocal_372), 0, 0, 0);
			}
			if (!gameplay::is_string_null_or_empty(&Local_964.f_18)) {
				if (bLocal_375) {
					func_224(&uLocal_388, 6, &Local_964.f_24, "", 0, 0, 2, 0);
					func_224(&uLocal_388, 3, &Local_964.f_30, "", system::round(fLocal_374 + fLocal_373), 0, 2, 0);
				}
				else {
					func_224(&uLocal_388, 6, &Local_964.f_24, "", 0, 0, 1, 0);
					func_224(&uLocal_388, 3, &Local_964.f_30, "", system::round(fLocal_373), 0, 0, 0);
				}
			}
			else {
				func_224(&uLocal_388, 3, &Local_964.f_30, "", system::round(fLocal_373), 0, 0, 0);
			}
		}
		iVar0 = 0;
		if (Global_86001) {
			iVar1 = 0;
			while (iVar1 < Global_67917) {
				if (Global_67918[iVar1 /*9*/] >= 0 && !Global_56047[Global_67918[iVar1 /*9*/] /*13*/].f_7) {
					if (Global_67918[iVar1 /*9*/].f_3 == 2) {
						iVar0 = 1;
					}
				}
				iVar1++;
			}
		}
		if (iVar0 == 1) {
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_222(&uLocal_388, 1, &Local_964.f_48, iLocal_383, 0, 0, 1);
		}
		else if (bLocal_375) {
			if (bLocal_376) {
				iLocal_383 = 75;
				iLocal_384 = 2;
				func_222(&uLocal_388, 1, &Local_964.f_42, iLocal_383, 0, 0, 2);
			}
			else {
				iLocal_383 = 100;
				iLocal_384 = 3;
				func_222(&uLocal_388, 1, &Local_964.f_36, iLocal_383, 0, 0, 3);
			}
		}
		else if (!bLocal_375 && !bLocal_376) {
			iLocal_383 = 75;
			iLocal_384 = 2;
			func_222(&uLocal_388, 1, &Local_964.f_42, iLocal_383, 0, 0, 2);
		}
		else {
			iLocal_383 = 50;
			iLocal_384 = 1;
			func_222(&uLocal_388, 1, &Local_964.f_48, iLocal_383, 0, 0, 1);
		}
		func_220();
		iLocal_377 = 1;
	}
}

// Position - 0xBA96
void func_220() {
	if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_valet")) == 1) {
		func_221(38, system::floor(fLocal_372), 1);
		if (bLocal_375) {
			func_221(39, 1, 1);
		}
		else {
			func_221(39, 0, 1);
		}
		if (bLocal_375) {
			func_221(40, system::round(fLocal_374 + fLocal_373), 1);
		}
		else {
			func_221(40, system::round(fLocal_373), 1);
		}
		func_221(41, iLocal_383, 1);
		func_221(42, iLocal_384, 1);
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_multi")) == 1) {
		func_221(52, system::floor(fLocal_372), 1);
		if (bLocal_375) {
			func_221(53, 1, 1);
		}
		else {
			func_221(53, 0, 1);
		}
		if (bLocal_375) {
			func_221(56, system::round(fLocal_374 + fLocal_373), 1);
		}
		else {
			func_221(56, system::round(fLocal_373), 1);
		}
		func_221(54, iLocal_383, 1);
		func_221(55, iLocal_384, 1);
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_hooker")) == 1) {
		func_221(66, system::floor(fLocal_372), 1);
		if (bLocal_375) {
			func_221(67, 1, 1);
		}
		else {
			func_221(67, 0, 1);
		}
		if (bLocal_375) {
			func_221(68, system::round(fLocal_374 + fLocal_373), 1);
		}
		else {
			func_221(68, system::round(fLocal_373), 1);
		}
		func_221(69, iLocal_383, 1);
		func_221(70, iLocal_384, 1);
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_bus")) == 1) {
		func_221(81, system::floor(fLocal_372), 1);
		if (bLocal_375) {
			func_221(82, 1, 1);
		}
		else {
			func_221(82, 0, 1);
		}
		if (bLocal_375) {
			func_221(83, system::round(fLocal_374 + fLocal_373), 1);
		}
		else {
			func_221(83, system::round(fLocal_373), 1);
		}
		func_221(84, iLocal_383, 1);
		func_221(85, iLocal_384, 1);
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("assassin_construction")) == 1) {
		func_221(97, system::floor(fLocal_372), 1);
		if (bLocal_375) {
			func_221(98, 1, 1);
		}
		else {
			func_221(98, 0, 1);
		}
		if (bLocal_375) {
			func_221(99, system::round(fLocal_374 + fLocal_373), 1);
		}
		else {
			func_221(99, system::round(fLocal_373), 1);
		}
		func_221(100, iLocal_383, 1);
		func_221(101, iLocal_384, 1);
	}
}

// Position - 0xBCE2
void func_221(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_67917) {
		if (Global_67918[iVar0 /*9*/] == iParam0) {
			if (iParam2) {
				Global_67918[iVar0 /*9*/].f_1 = iParam1;
			}
			else {
				Global_67918[iVar0 /*9*/].f_1 += iParam1;
			}
			return;
		}
		iVar0++;
	}
	if (Global_67918[iVar0 /*9*/] != -1) {
		if (Global_56047[Global_67918[iVar0 /*9*/] /*13*/] == 3) {
			if (Global_67918[iVar0 /*9*/].f_1 > 1) {
				Global_67918[iVar0 /*9*/].f_1 = 1;
			}
			if (Global_67918[iVar0 /*9*/].f_1 < 0) {
				Global_67918[iVar0 /*9*/].f_1 = 0;
			}
		}
	}
}

// Position - 0xBD8C
void func_222(var *uParam0, int iParam1, char *sParam2, int iParam3, int iParam4, int iParam5, int iParam6) {
	uParam0->f_549 = iParam1;
	StringCopy(&uParam0->f_550, sParam2, 16);
	uParam0->f_554 = iParam3;
	uParam0->f_555 = iParam4;
	uParam0->f_556 = iParam5;
	uParam0->f_557 = iParam6;
}

// Position - 0xBDC0
void func_223() {
	Global_86000 = 0;
	Global_86001 = 0;
}

// Position - 0xBDD2
void func_224(var *uParam0, int iParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6,
			  int iParam7) {
	int iVar0;

	if (uParam0->f_56 == 13) {
		return;
	}
	iVar0 = uParam0->f_56;
	uParam0->f_57[iVar0] = iParam1;
	StringCopy(&uParam0->f_71[iVar0 /*16*/], sParam2, 64);
	StringCopy(&uParam0->f_280[iVar0 /*16*/], sParam3, 64);
	uParam0->f_489[iVar0] = iParam4;
	uParam0->f_503[iVar0] = iParam5;
	uParam0->f_517[iVar0] = iParam6;
	uParam0->f_531[iVar0] = iParam7;
	uParam0->f_56++;
}

// Position - 0xBE45
void func_225(var *uParam0, char *sParam1, char *sParam2, int iParam3) {
	StringCopy(&uParam0->f_5, sParam1, 16);
	StringCopy(&uParam0->f_13, sParam2, 64);
	uParam0->f_29 = iParam3;
	uParam0->f_11 = 0;
}

// Position - 0xBE68
void func_226() { func_490(&Global_101700.f_18922.f_1, 4194304); }

// Position - 0xBE81
void func_227() {
	int iVar0;

	if (!bLocal_1174) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
				if (entity::does_entity_exist(iVar0) && !entity::is_entity_dead(iVar0, 0)) {
					if (vehicle::get_is_vehicle_engine_running(iVar0)) {
						if (audio::prepare_music_event("ASS1_LOST")) {
							bLocal_1174 = true;
						}
					}
				}
			}
		}
	}
}

// Position - 0xBEE2
void func_228() {
	float fVar0;

	if (!iLocal_1171) {
		if (!ui::is_message_being_displayed()) {
			if (!func_22()) {
				func_233("ASS_VA_GO", 7500, -1);
				iLocal_1171 = 1;
			}
		}
	}
	func_232(&iLocal_1183, &uLocal_1363, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1192) {
	case 0: iLocal_1192++; break;

	case 1:
		if (!ped::is_ped_injured(player::player_ped_id())) {
			fVar0 = func_26(player::player_ped_id(), vLocal_1298, 1);
			if (fVar0 > 155f && func_30(1116471296, 1) == 0) {
				iLocal_1166 = 1;
				func_230();
				iLocal_1192++;
			}
			else {
				player::_0x4669B3ED80F24B4E(player::player_id());
			}
		}
		break;

	case 2:
		if (!player::is_player_wanted_level_greater(player::player_id(), 0)) {
			if (func_30(1116471296, 1) == 0) {
				func_227();
				if (func_229()) {
					iLocal_1030 = 18;
				}
			}
		}
		else if (!iLocal_1182) {
			if (!func_22()) {
				if (!ui::is_message_being_displayed()) {
					func_233("ASS_VA_LOSECOPS", 7500, 1);
					iLocal_1192++;
					iLocal_1182 = 1;
				}
			}
		}
		break;

	case 3:
		if (!player::is_player_wanted_level_greater(player::player_id(), 0)) {
			iLocal_1192 = 2;
		}
		break;
	}
}

// Position - 0xC01E
bool func_229() {
	if (bLocal_1174) {
		audio::trigger_music_event("ASS1_LOST");
		iLocal_1175 = 1;
	}
	func_230();
	return true;
}

// Position - 0xC041
void func_230() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2) {
		if (entity::does_entity_exist(uLocal_1046[iVar0])) {
			if (!ped::is_ped_injured(uLocal_1046[iVar0])) {
				func_231(&Local_1101[iVar0 /*8*/]);
				ai::clear_ped_tasks(uLocal_1046[iVar0]);
				entity::set_ped_as_no_longer_needed(&uLocal_1046[iVar0]);
			}
		}
		iVar0++;
	}
	if (entity::does_entity_exist(iLocal_1045)) {
		if (!ped::is_ped_injured(iLocal_1045)) {
			ai::clear_ped_tasks(iLocal_1045);
			entity::set_ped_as_no_longer_needed(&iLocal_1045);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(uLocal_1049[iVar0])) {
			if (!ped::is_ped_injured(uLocal_1049[iVar0])) {
				func_231(&Local_1059[iVar0 /*8*/]);
				ai::clear_ped_tasks(uLocal_1049[iVar0]);
				entity::set_ped_as_no_longer_needed(&uLocal_1049[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (entity::does_entity_exist(uLocal_1053[iVar0])) {
			if (!ped::is_ped_injured(uLocal_1053[iVar0])) {
				func_231(&Local_1084[iVar0 /*8*/]);
				ai::clear_ped_tasks(uLocal_1053[iVar0]);
				entity::set_ped_as_no_longer_needed(&uLocal_1053[iVar0]);
			}
		}
		iVar0++;
	}
	streaming::set_model_as_no_longer_needed(iLocal_1324);
}

// Position - 0xC163
void func_231(int *iParam0) {
	bool bVar0;
	struct<8> Var1;

	if (ui::does_blip_exist(*uParam0)) {
		ui::remove_blip(uParam0);
		bVar0 = true;
	}
	if (ui::does_blip_exist(iParam0->f_1)) {
		ui::remove_blip(&iParam0->f_1);
		bVar0 = true;
	}
	if (entity::does_entity_exist(iParam0->f_7)) {
		if (!ped::is_ped_injured(iParam0->f_7)) {
			if (ui::does_ped_have_ai_blip(iParam0->f_7)) {
				ui::_set_ped_enemy_ai_blip(iParam0->f_7, 0);
			}
		}
		bVar0 = true;
	}
	if (bVar0) {
		*iParam0 = {Var1};
	}
}

// Position - 0xC1D1
int func_232(int *iParam0, var *uParam1, char *sParam2, char *sParam3, int iParam4, int iParam5, int iParam6,
			 int iParam7) {
	if (!*iParam0) {
		if (func_6(uParam1, sParam2, sParam3, iParam4, iParam5, iParam6, iParam7)) {
			*iParam0 = 1;
			return 1;
		}
	}
	return 0;
}

// Position - 0xC1FE
void func_233(char *sParam0, int iParam1, int iParam2) {
	iParam2 = iParam2;
	ui::begin_text_command_print(sParam0);
	ui::end_text_command_print(iParam1, 1);
}

// Position - 0xC217
void func_234() {
	func_232(&iLocal_1183, &uLocal_1363, "OJASAUD", "OJAS_HOCOM", 9, 1, 0, 0);
	switch (iLocal_1192) {
	case 0:
		if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
			if (!iLocal_1182) {
				if (!func_22()) {
					if (!ui::is_message_being_displayed()) {
						func_233("ASS_VA_LOSECOPS", 7500, 1);
						iLocal_1192++;
						iLocal_1182 = 1;
					}
				}
			}
		}
		else if (func_30(1116471296, 1) != 0) {
			if (!iLocal_1171) {
				if (!func_22()) {
					if (!ui::is_message_being_displayed()) {
						func_233("ASS_VA_GO", 7500, -1);
						iLocal_1192++;
						iLocal_1171 = 1;
					}
				}
			}
		}
		else if (!player::is_player_wanted_level_greater(player::player_id(), 0) && func_30(125f, 1) == 0) {
			iLocal_1192++;
		}
		break;

	case 1:
		if (!player::is_player_wanted_level_greater(player::player_id(), 0) && func_30(125f, 1) == 0) {
			func_227();
			func_230();
			func_236(1);
			func_235();
			iLocal_1192++;
		}
		break;

	case 2:
		func_227();
		iLocal_1030 = 18;
		break;
	}
}

// Position - 0xC33D
void func_235() {
	if (entity::does_entity_exist(iLocal_1311)) {
		if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
			vehicle::set_vehicle_doors_locked(iLocal_1311, 1);
		}
		entity::set_vehicle_as_no_longer_needed(&iLocal_1311);
	}
	if (entity::does_entity_exist(iLocal_1312)) {
		if (!entity::is_entity_dead(iLocal_1312, 0)) {
			if (entity::is_entity_on_screen(iLocal_1312) && !entity::is_entity_occluded(iLocal_1312) &&
				!cam::is_screen_faded_out()) {
				entity::set_vehicle_as_no_longer_needed(&iLocal_1312);
			}
			else {
				if (entity::does_entity_exist(uLocal_1053[0]) && !entity::is_entity_dead(uLocal_1053[0], 0)) {
					if (!entity::is_entity_dead(iLocal_1312, 0)) {
						if (ped::is_ped_in_vehicle(uLocal_1053[0], iLocal_1312, 0)) {
							ai::clear_ped_tasks_immediately(uLocal_1053[0]);
						}
					}
				}
				if (entity::does_entity_exist(uLocal_1053[1]) && !entity::is_entity_dead(uLocal_1053[1], 0)) {
					if (!entity::is_entity_dead(iLocal_1312, 0)) {
						if (ped::is_ped_in_vehicle(uLocal_1053[1], iLocal_1312, 0)) {
							ai::clear_ped_tasks_immediately(uLocal_1053[1]);
						}
					}
				}
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), iLocal_1312, 0)) {
						ai::clear_ped_tasks_immediately(player::player_ped_id());
					}
				}
				entity::set_vehicle_as_no_longer_needed(&iLocal_1312);
			}
		}
	}
	if (entity::does_entity_exist(uLocal_1315[0])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_1315[0]);
	}
	if (entity::does_entity_exist(uLocal_1315[1])) {
		entity::set_vehicle_as_no_longer_needed(&uLocal_1315[1]);
	}
	if (entity::does_entity_exist(iLocal_1318) && !entity::is_entity_dead(iLocal_1318, 0)) {
		if (entity::is_entity_a_mission_entity(iLocal_1318) &&
			entity::does_entity_belong_to_this_script(iLocal_1318, 1)) {
			entity::set_vehicle_as_no_longer_needed(&iLocal_1318);
		}
	}
}

// Position - 0xC4C3
void func_236(int iParam0) {
	int iVar0;

	if (iParam0) {
		if (ui::does_blip_exist(iLocal_1119)) {
			ui::remove_blip(&iLocal_1119);
		}
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		if (ui::does_blip_exist(uLocal_1120[iVar0])) {
			ui::remove_blip(&uLocal_1120[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (ui::does_blip_exist(uLocal_1124[iVar0])) {
			ui::remove_blip(&uLocal_1124[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		if (ui::does_blip_exist(uLocal_1124[iVar0])) {
			ui::remove_blip(&uLocal_1124[iVar0]);
		}
		iVar0++;
	}
}

// Position - 0xC562
void func_237() {
	if (entity::is_entity_in_angled_area(player::player_ped_id(), vLocal_1292, vLocal_1295, fLocal_1242, 1, 0, 0)) {
		bLocal_1151 = true;
	}
	else {
		bLocal_1151 = false;
	}
	if (ui::does_blip_exist(iLocal_1119)) {
		ui::remove_blip(&iLocal_1119);
	}
	player::set_wanted_level_multiplier(0.5f);
	if (bLocal_1151) {
		func_238();
		iLocal_1030 = 17;
	}
	else {
		func_238();
		iLocal_1030 = 16;
	}
	func_79(&iLocal_1528, 0, 0);
}

// Position - 0xC5CE
void func_238() { iLocal_1192 = 0; }

// Position - 0xC5DA
void func_239() {
	if (!iLocal_1148) {
		if (entity::does_entity_exist(iLocal_1311)) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
				vehicle::set_vehicle_doors_locked(iLocal_1311, 3);
				if (func_241(iLocal_1311, 5f)) {
					iLocal_1148 = 1;
				}
			}
		}
	}
	if (!iLocal_1145) {
		if (func_240(iLocal_1311, 10000)) {
			iLocal_1145 = 1;
		}
	}
}

// Position - 0xC62D
bool func_240(int iParam0, int iParam1) {
	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (vehicle::is_vehicle_stuck_timer_up(iParam0, 0, iParam1) ||
			vehicle::is_vehicle_stuck_timer_up(iParam0, 2, iParam1) ||
			vehicle::is_vehicle_stuck_timer_up(iParam0, 3, iParam1) ||
			vehicle::is_vehicle_stuck_timer_up(iParam0, 1, iParam1)) {
			return true;
		}
	}
	return false;
}

// Position - 0xC67D
bool func_241(int iParam0, float fParam1) {
	if (entity::does_entity_exist(iParam0)) {
		if (func_242(iParam0, -1217.442f, -281.5099f, 36.7495f, 1) <= fParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0xC6AF
float func_242(int iParam0, vector3 vParam1, int iParam4) {
	vector3 vVar0;

	if (!entity::is_entity_dead(iParam0, 0)) {
		vVar0 = {entity::get_entity_coords(iParam0, 1)};
	}
	else {
		vVar0 = {entity::get_entity_coords(iParam0, 0)};
	}
	return gameplay::get_distance_between_coords(vVar0, vParam1, iParam4);
}

// Position - 0xC6E9
void func_243() {
	switch (iLocal_1192) {
	case 0:
		if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
			if (func_127()) {
				if (!ped::is_ped_injured(uLocal_1049[0])) {
					if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
						if (ped::is_ped_in_vehicle(uLocal_1049[0], iLocal_1311, 0)) {
							bLocal_1144 = true;
							func_238();
							iLocal_1030 = 13;
						}
					}
				}
			}
		}
		break;
	}
}

// Position - 0xC74B
void func_244() {
	if (entity::does_entity_exist(iLocal_1045)) {
		if (ped::is_ped_injured(iLocal_1045)) {
			if (entity::is_entity_dead(iLocal_1045, 0)) {
				bLocal_1149 = true;
				if (ui::does_blip_exist(iLocal_1119)) {
					ui::remove_blip(&iLocal_1119);
				}
				func_103(vLocal_1304, 1097859072, 1116471296);
			}
			unk1::_0x293220DA1B46CEBC(3f, 1073741824, 3);
			func_238();
			iLocal_1030 = 15;
		}
	}
}

// Position - 0xC7AE
void func_245() {
	func_236(0);
	func_252();
	func_250();
	func_247();
	func_246();
	func_233("ASS_VA_KILL", 7500, -1);
	system::settimera(0);
	bLocal_1160 = true;
	func_238();
	iLocal_1030 = 12;
}

// Position - 0xC7E9
void func_246() {
	streaming::set_model_as_no_longer_needed(iLocal_1326);
	streaming::set_model_as_no_longer_needed(iLocal_1327);
}

// Position - 0xC7FF
void func_247() {
	func_249(&Local_1690.f_4);
	func_248(&Local_1690[0]);
	func_248(&Local_1690[1]);
	func_248(&Local_1690.f_8[0]);
	func_248(&Local_1690.f_8[1]);
	func_248(&Local_1690.f_5[0]);
	func_248(&Local_1690.f_5[1]);
	func_248(&Local_1690.f_3);
}

// Position - 0xC85D
void func_248(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_occluded(*iParam0)) {
			ped::delete_ped(iParam0);
		}
		else {
			entity::set_ped_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0xC888
void func_249(int iParam0) {
	if (entity::does_entity_exist(*iParam0)) {
		if (entity::is_entity_occluded(*iParam0)) {
			entity::set_vehicle_as_no_longer_needed(iParam0);
		}
	}
}

// Position - 0xC8AA
void func_250() {
	vector3 vVar0[2];
	vector3 vVar7;
	float fVar10;
	int iVar11;

	if (entity::does_entity_exist(iLocal_1045) && !entity::is_entity_dead(iLocal_1045, 0)) {
		vVar7 = {entity::get_entity_coords(iLocal_1045, 1)};
		fVar10 = entity::get_entity_heading(iLocal_1045);
	}
	vVar0[0 /*3*/] = {object::_get_object_offset_from_coords(vVar7, fVar10, 1f, -1f, 0f)};
	vVar0[1 /*3*/] = {object::_get_object_offset_from_coords(vVar7, fVar10, -1f, -1f, 0f)};
	iVar11 = 0;
	while (iVar11 < 2) {
		if (iVar11 == 0) {
			uLocal_1046[iVar11] = ped::create_ped(26, iLocal_1326, vVar0[0 /*3*/], vVar0[0 /*3*/].f_1, 38.3253f,
												  uLocal_1238[iLocal_1201], 1, 1);
		}
		else {
			uLocal_1046[iVar11] = ped::create_ped(26, iLocal_1327, vVar0[1 /*3*/], vVar0[1 /*3*/].f_1, 38.3253f,
												  uLocal_1238[iLocal_1201], 1, 1);
		}
		entity::set_entity_load_collision_flag(uLocal_1046[iVar11], 1);
		ped::set_ped_default_component_variation(uLocal_1046[iVar11]);
		ped::set_ped_combat_attributes(uLocal_1046[iVar11], 3, 0);
		ped::set_ped_combat_attributes(uLocal_1046[iVar11], 23, 1);
		ped::set_ped_combat_attributes(uLocal_1046[iVar11], 30, 0);
		ped::set_ped_combat_attributes(uLocal_1046[iVar11], 13, 1);
		ped::set_ped_target_loss_response(uLocal_1046[iVar11], 2);
		ped::set_ped_keep_task(uLocal_1046[iVar11], 1);
		func_251(uLocal_1046[iVar11], 1);
		ped::set_ped_to_load_cover(uLocal_1046[iVar11], 1);
		iVar11++;
	}
}

// Position - 0xC9FE
void func_251(int iParam0, int iParam1) {
	if (iParam0 != iLocal_1045) {
		weapon::give_weapon_to_ped(iParam0, joaat("weapon_pistol"), -1, 0, 1);
	}
	if (!iParam1) {
		ped::set_ped_combat_movement(iParam0, 1);
		ped::set_ped_combat_attributes(iParam0, 0, 1);
	}
	else {
		ped::set_ped_combat_movement(iParam0, 2);
		ped::set_ped_combat_attributes(iParam0, 13, 1);
	}
	ped::set_ped_accuracy(iParam0, 60);
	ped::set_ped_combat_ability(iParam0, 2);
	ped::set_blocking_of_non_temporary_events(iParam0, 1);
	ped::set_ped_as_enemy(iParam0, 1);
	ped::set_ped_relationship_group_hash(iParam0, iLocal_1331);
}

// Position - 0xCA6A
void func_252() {
	func_254();
	iLocal_1201 = gameplay::get_random_int_in_range(0, iLocal_1194);
	iLocal_1045 = ped::create_ped(26, iLocal_1324, vLocal_1257[iLocal_1201 /*3*/], uLocal_1238[iLocal_1201], 1, 1);
	entity::set_entity_load_collision_flag(iLocal_1045, 1);
	ped::set_ped_default_component_variation(iLocal_1045);
	func_251(iLocal_1045, 1);
	streaming::set_model_as_no_longer_needed(iLocal_1324);
	if (!ui::does_blip_exist(iLocal_1119)) {
		iLocal_1119 = func_253(iLocal_1045, 0, 0);
	}
	ui::set_blip_scale(iLocal_1119, 1f);
}

// Position - 0xCADE
int func_253(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	iVar0 = ui::add_blip_for_entity(iParam0);
	if (entity::is_entity_a_vehicle(iParam0)) {
		ui::set_blip_scale(iVar0, func_184(network::network_is_game_in_progress(), 1f, 1f));
		if (!iParam2) {
			ui::set_blip_as_friendly(iVar0, iParam1);
		}
		else {
			ui::set_blip_colour(iVar0, 2);
		}
	}
	else if (entity::is_entity_a_ped(iParam0)) {
		ui::set_blip_scale(iVar0, func_184(network::network_is_game_in_progress(), 0.7f, 0.7f));
		ui::set_blip_as_friendly(iVar0, iParam1);
	}
	else if (entity::is_entity_an_object(iParam0)) {
		ui::set_blip_scale(iVar0, func_184(network::network_is_game_in_progress(), 0.7f, 0.7f));
	}
	return iVar0;
}

// Position - 0xCB82
void func_254() {
	int iVar0;

	iLocal_1194 = 0;
	iVar0 = 0;
	while (iVar0 < 3) {
		if (!cam::is_sphere_visible(vLocal_1247[iVar0 /*3*/], 5f) && !func_258(iVar0, 6f)) {
			vLocal_1257[iLocal_1194 /*3*/] = {vLocal_1247[iVar0 /*3*/]};
			uLocal_1238[iLocal_1194] = fLocal_1234[iVar0];
			iLocal_1194++;
		}
		iVar0++;
	}
	if (iLocal_1194 == 0) {
		if (func_91()) {
			vLocal_1257[0 /*3*/] = {vLocal_1247[1 /*3*/]};
			uLocal_1238[0] = fLocal_1234[1];
			iLocal_1194++;
		}
		else if (func_257()) {
			vLocal_1257[0 /*3*/] = {vLocal_1247[0 /*3*/]};
			uLocal_1238[0] = fLocal_1234[0];
			iLocal_1194++;
		}
		else {
			iVar0 = 0;
			while (iVar0 < 3) {
				if (func_256(vLocal_1247[iVar0 /*3*/], 1) > 30f && !func_258(iVar0, 6f)) {
					vLocal_1257[iLocal_1194 /*3*/] = {vLocal_1247[iVar0 /*3*/]};
					uLocal_1238[iLocal_1194] = fLocal_1234[iVar0];
					iLocal_1194++;
				}
				iVar0++;
			}
		}
	}
	if (iLocal_1194 == 0) {
		func_255();
	}
}

// Position - 0xCCBA
void func_255() {
	int iVar0;
	vector3 vVar1;
	float fVar4;

	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vVar1 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	iVar0 = 0;
	while (iVar0 < 3) {
		fVar4 = system::vdist(vVar1, vLocal_1247[iVar0 /*3*/]);
		if (fVar4 > fLocal_1246) {
			fLocal_1246 = fVar4;
			iLocal_1245 = iVar0;
		}
		iVar0++;
	}
	vLocal_1257[0 /*3*/] = {vLocal_1247[iLocal_1245 /*3*/]};
	uLocal_1238[0] = fLocal_1234[iLocal_1245];
}

// Position - 0xCD34
float func_256(vector3 vParam0, int iParam3) {
	return func_26(player::get_player_ped(player::get_player_index()), vParam0, iParam3);
}

// Position - 0xCD4E
bool func_257() {
	if (func_26(player::player_ped_id(), -1237.566f, -156.8824f, 39.41317f, 1) < 13f) {
		return true;
	}
	return false;
}

// Position - 0xCD7C
int func_258(int iParam0, float fParam1) {
	if (vehicle::is_any_vehicle_near_point(vLocal_1247[iParam0 /*3*/], fParam1)) {
		return 1;
	}
	return 0;
}

// Position - 0xCD9B
void func_259() {
	switch (iLocal_1192) {
	case 0:
		if (!iLocal_1161) {
			func_99(&Local_360, 4);
			func_262();
			system::settimera(0);
			iLocal_1192++;
		}
		break;

	case 1:
		if (iLocal_1140 && !iLocal_1138 && func_261() && func_260()) {
			func_238();
			iLocal_1030 = 11;
		}
		break;
	}
}

// Position - 0xCE07
int func_260() {
	int iVar0;

	streaming::request_model(iLocal_1324);
	if (streaming::has_model_loaded(iLocal_1324)) {
		iVar0 = 1;
	}
	else {
		iVar0 = 0;
	}
	return iVar0;
}

// Position - 0xCE2B
int func_261() {
	if (entity::does_entity_exist(uLocal_1049[0]) && entity::does_entity_exist(uLocal_1049[1]) &&
		!ped::is_ped_injured(uLocal_1049[0]) && !ped::is_ped_injured(uLocal_1049[1])) {
		if (ped::is_ped_in_vehicle(uLocal_1049[0], iLocal_1311, 0) &&
			ped::is_ped_in_vehicle(uLocal_1049[1], iLocal_1311, 0)) {
			return 1;
		}
	}
	return 0;
}

// Position - 0xCE9E
void func_262() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		iLocal_1032[iVar0] = 4;
		iVar0++;
	}
	iLocal_1154 = 1;
}

// Position - 0xCEC4
void func_263() {
	switch (iLocal_1192) {
	case 0:
		func_284(1, "assassin_hotel_plan_attack", 0, 0, 0, 1);
		func_99(&Local_360, 2);
		if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
			vehicle::set_vehicle_engine_on(iLocal_1311, 0, 1, 0);
		}
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				if (entity::does_entity_exist(iLocal_1318) && !entity::is_entity_dead(iLocal_1318, 0)) {
					func_271(iLocal_1318);
				}
			}
		}
		func_268();
		func_267();
		audio::trigger_music_event("ASS1_START");
		gameplay::set_bit(&Local_360, 4);
		func_233("ASS_VA_PLANT", 7500, 1);
		iLocal_1192++;
		break;

	case 1:
		if (iLocal_1167) {
			if (!func_266(&iLocal_1313) && !func_265(&iLocal_1319[0], &iLocal_1188) &&
				!func_265(&iLocal_1319[1], &iLocal_1188) && !func_265(&iLocal_1319[2], &iLocal_1188)) {
				system::settimera(0);
				func_238();
				iLocal_1030 = 10;
			}
			else {
				func_264();
			}
		}
		break;
	}
}

// Position - 0xCFD5
void func_264() {
	iLocal_1043 = 1;
	iLocal_1138 = 1;
}

// Position - 0xCFE5
int func_265(var *uParam0, int *iParam1) {
	if (!entity::does_entity_exist(*uParam0)) {
		return 0;
	}
	if (!entity::does_entity_exist(iLocal_1312)) {
		return 0;
	}
	if (func_24(*uParam0, iLocal_1312, 1) <= 5f) {
		iLocal_1313 = *uParam0;
		*iParam1 = 1;
		return 1;
	}
	return 0;
}

// Position - 0xD02A
int func_266(var *uParam0) {
	vector3 vVar0;

	*uParam0 = vehicle::get_closest_vehicle(-1221.954f, -210.746f, 38.638f, 27f, 0, 4);
	if (*uParam0 != 0 && *uParam0 != iLocal_1311 && *uParam0 != iLocal_1312 && *uParam0 != Local_1690.f_4) {
		if (entity::does_entity_exist(*uParam0) && !entity::is_entity_dead(*uParam0, 0)) {
			if (vehicle::get_ped_in_vehicle_seat(*uParam0, -1, 0) == 0) {
				vVar0 = {entity::get_entity_coords(*uParam0, 1)};
				vVar0 = {vVar0};
				return 1;
			}
		}
	}
	if (iLocal_1318 != 0) {
		if (entity::does_entity_exist(iLocal_1318) && !entity::is_entity_dead(iLocal_1318, 0)) {
			if (!func_86(iLocal_1318)) {
				vVar0 = {entity::get_entity_coords(iLocal_1318, 1)};
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0xD0F5
void func_267() {
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3) {
		if (!entity::does_entity_exist(uLocal_1049[iVar1])) {
			if (iVar1 == 2) {
				iVar0 = iLocal_1327;
			}
			else {
				iVar0 = iLocal_1326;
			}
			uLocal_1049[iVar1] = ped::create_ped(26, iVar0, vLocal_1267[iVar1 /*3*/], fLocal_1220[iVar1], 1, 1);
			if (iVar1 == 0) {
				ped::set_ped_component_variation(uLocal_1049[iVar1], 0, 0, 2, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 3, 0, 0, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 4, 0, 1, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 8, 0, 0, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 11, 0, 0, 0);
			}
			else if (iVar1 == 1) {
				ped::set_ped_component_variation(uLocal_1049[iVar1], 0, 1, 2, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 3, 0, 1, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 4, 0, 0, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 8, 0, 0, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 11, 0, 2, 0);
			}
			else if (iVar1 == 2) {
				ped::set_ped_component_variation(uLocal_1049[iVar1], 0, 1, 2, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 3, 0, 2, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 4, 0, 1, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 8, 0, 0, 0);
				ped::set_ped_component_variation(uLocal_1049[iVar1], 11, 1, 1, 0);
			}
		}
		if (!ped::is_ped_injured(uLocal_1049[iVar1])) {
			ped::set_ped_can_be_targetted(uLocal_1049[iVar1], 0);
			ped::set_ped_keep_task(uLocal_1049[iVar1], 1);
			ped::set_ped_combat_attributes(uLocal_1049[iVar1], 23, 1);
			ped::set_ped_combat_attributes(uLocal_1049[iVar1], 30, 0);
			ped::set_ped_target_loss_response(uLocal_1049[iVar1], 2);
			ped::set_ped_config_flag(uLocal_1049[iVar1], 104, 1);
			func_251(uLocal_1049[iVar1], 1);
		}
		iVar1++;
	}
}

// Position - 0xD2BA
void func_268() {
	func_270();
	func_269();
	streaming::set_model_as_no_longer_needed(iLocal_1328);
}

// Position - 0xD2D1
void func_269() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2) {
		if (!entity::does_entity_exist(uLocal_1053[iVar0])) {
			if (iVar0 == 0) {
				uLocal_1053[iVar0] = ped::create_ped_inside_vehicle(iLocal_1312, 26, iLocal_1326, -1, 1, 1);
			}
			else if (iVar0 == 1) {
				uLocal_1053[iVar0] = ped::create_ped_inside_vehicle(iLocal_1312, 26, iLocal_1327, 0, 1, 1);
			}
			func_251(uLocal_1053[iVar0], 1);
			ped::set_ped_combat_attributes(uLocal_1053[iVar0], 3, 0);
			ped::set_ped_combat_attributes(uLocal_1053[iVar0], 23, 1);
			ped::set_ped_combat_attributes(uLocal_1053[iVar0], 30, 0);
			ped::set_ped_target_loss_response(uLocal_1053[iVar0], 2);
			ped::set_ped_keep_task(uLocal_1053[iVar0], 1);
		}
		iVar0++;
	}
}

// Position - 0xD385
void func_270() {
	if (!entity::does_entity_exist(iLocal_1312)) {
		iLocal_1312 = vehicle::create_vehicle(iLocal_1328, vLocal_1283, fLocal_1232, 1, 1);
		vehicle::set_vehicle_colour_combination(iLocal_1312, 0);
	}
}

// Position - 0xD3B4
void func_271(int iParam0) { func_272(&Global_96040.f_2311, &Global_96040, iParam0, 1); }

// Position - 0xD3CF
int func_272(var *uParam0, var *uParam1, int iParam2, int iParam3) {
	if (vehicle::is_vehicle_driveable(iParam2, 0)) {
		func_274(uParam0, iParam2, iParam3);
		uParam1->f_4 = iParam2;
		if (func_273(iParam2)) {
			uParam1->f_3 = 1;
		}
		else {
			uParam1->f_3 = 0;
		}
		return 1;
	}
	return 0;
}

// Position - 0xD40F
bool func_273(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6) {
		if (Global_91491.f_22[iVar0] == iParam0) {
			return true;
		}
		iVar0++;
	}
	return false;
}

// Position - 0xD43D
void func_274(var *uParam0, int iParam1, int iParam2) {
	func_280(iParam1, &uParam0->f_12);
	uParam0->f_7 = func_277(iParam1, 145, 0);
	uParam0->f_11 = func_276(iParam1);
	if (!uParam0->f_7) {
		if (!uParam0->f_10) {
			uParam0->f_10 = func_275(iParam1);
		}
	}
	if (iParam2 == 1) {
		*uParam0 = {entity::get_entity_coords(iParam1, 1)};
		uParam0->f_6 = entity::get_entity_heading(iParam1);
		uParam0->f_3 = {entity::get_entity_velocity(iParam1)};
		if (entity::is_entity_in_angled_area(iParam1, -1154.326f, -1523.871f, 3.262189f, -1158.453f, -1517.75f,
											 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_6 = 305.6424f;
		}
		if (Global_69436 == iParam1) {
			uParam0->f_9 = 1;
		}
	}
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		uParam0->f_8 = 1;
	}
	else {
		uParam0->f_8 = 0;
	}
}

// Position - 0xD519
int func_275(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iParam0 == Global_68531.f_484[iVar0]) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0xD55B
int func_276(int iParam0) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 145;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 145;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				return Global_89165[iVar0];
			}
		}
		iVar0++;
	}
	return 145;
}

// Position - 0xD5BE
int func_277(int iParam0, int iParam1, int iParam2) {
	int iVar0;

	if (!entity::does_entity_exist(iParam0)) {
		return 0;
	}
	if (!vehicle::is_vehicle_driveable(iParam0, 0)) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (Global_89155[iVar0] == iParam0) {
				if (iParam1 == 145 || iParam1 == Global_89165[iVar0]) {
					if (iParam2 == 0 || entity::get_entity_model(iParam0) == func_278(iParam1, iParam2)) {
						return 1;
					}
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0xD64C
int func_278(int iParam0, int iParam1) {
	struct<82> Var0;

	if (func_15(iParam0)) {
		Var0.f_11 = 12;
		Var0.f_31 = 49;
		Var0.f_81 = 2;
		func_279(iParam0, &Var0, iParam1);
		return Var0;
	}
	else if (iParam0 != 145) {
	}
	return 0;
}

// Position - 0xD68E
void func_279(int iParam0, var *uParam1, int iParam2) {
	int iVar0;

	uParam1->f_88 = 1;
	uParam1->f_84 = 255;
	uParam1->f_85 = 255;
	uParam1->f_86 = 255;
	uParam1->f_97 = 1;
	uParam1->f_3 = 1000;
	uParam1->f_1 = 0;
	switch (iParam0) {
	case 0:
		iVar0 = joaat("tailgater");
		if (Global_101700.f_8044.f_99.f_58[128] && !Global_101700.f_8044.f_99.f_58[131]) {
			iVar0 = joaat("premier");
		}
		switch (iVar0) {
		case joaat("tailgater"):
			*uParam1 = iVar0;
			uParam1->f_2 = 3f;
			uParam1->f_4 = 0;
			uParam1->f_9 = 1;
			uParam1->f_11[0] = 1;
			StringCopy(&uParam1->f_27, "5MDS003", 16);
			break;

		case joaat("premier"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14.9f;
			uParam1->f_5 = 43;
			uParam1->f_6 = 43;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_9 = 0;
			StringCopy(&uParam1->f_27, "880HS955", 16);
			break;
		}
		break;

	case 2:
		iVar0 = joaat("bodhi2");
		switch (iVar0) {
		case joaat("bodhi2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 14f;
			uParam1->f_5 = 32;
			uParam1->f_6 = 0;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "BETTY 32", 16);
			if (Global_101700.f_8044.f_99.f_58[119]) {
				uParam1->f_11[1] = 1;
			}
			break;
		}
		break;

	case 1:
		if (iParam2 == 1) {
			iVar0 = joaat("buffalo2");
		}
		else if (iParam2 == 2) {
			iVar0 = joaat("bagger");
		}
		else if (Global_101700.f_8044.f_99.f_58[118]) {
			iVar0 = joaat("bagger");
		}
		else {
			iVar0 = joaat("buffalo2");
		}
		switch (iVar0) {
		case joaat("bagger"):
			*uParam1 = iVar0;
			uParam1->f_2 = 6f;
			uParam1->f_5 = 53;
			uParam1->f_6 = 0;
			uParam1->f_7 = 59;
			uParam1->f_8 = 156;
			StringCopy(&uParam1->f_27, "FC88", 16);
			break;

		case joaat("buffalo2"):
			*uParam1 = iVar0;
			uParam1->f_2 = 0f;
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 0;
			uParam1->f_8 = 156;
			uParam1->f_10 = 1;
			StringCopy(&uParam1->f_27, "FC1988", 16);
			uParam1->f_11[0] = 1;
			uParam1->f_11[1] = 1;
			uParam1->f_11[2] = 1;
			uParam1->f_11[3] = 1;
			uParam1->f_11[4] = 1;
			uParam1->f_11[5] = 1;
			uParam1->f_11[6] = 1;
			uParam1->f_11[7] = 1;
			uParam1->f_11[8] = 1;
			break;
		}
		break;

	default: break;
	}
}

// Position - 0xD8EA
void func_280(int iParam0, var *uParam1) {
	int iVar0;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		func_283(uParam1);
		uParam1->f_66 = entity::get_entity_model(iParam0);
		StringCopy(&uParam1->f_1, vehicle::get_vehicle_number_plate_text(iParam0), 16);
		*uParam1 = vehicle::get_vehicle_number_plate_text_index(iParam0);
		vehicle::get_vehicle_colours(iParam0, &uParam1->f_5, &uParam1->f_6);
		vehicle::get_vehicle_extra_colours(iParam0, &uParam1->f_7, &uParam1->f_8);
		vehicle::get_vehicle_tyre_smoke_color(iParam0, &uParam1->f_62, &uParam1->f_63, &uParam1->f_64);
		uParam1->f_65 = vehicle::get_vehicle_window_tint(iParam0);
		uParam1->f_67 = vehicle::get_vehicle_livery(iParam0);
		uParam1->f_69 = vehicle::get_vehicle_wheel_type(iParam0);
		uParam1->f_70 = vehicle::get_vehicle_door_lock_status(iParam0);
		vehicle::get_vehicle_custom_secondary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		vehicle::_get_vehicle_neon_lights_colour(iParam0, &uParam1->f_74, &uParam1->f_75, &uParam1->f_76);
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 2)) {
			gameplay::set_bit(&uParam1->f_77, 28);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 3)) {
			gameplay::set_bit(&uParam1->f_77, 29);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 30);
		}
		if (vehicle::_is_vehicle_neon_light_enabled(iParam0, 1)) {
			gameplay::set_bit(&uParam1->f_77, 31);
		}
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			uParam1->f_65 = 0;
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			uParam1->f_68 = vehicle::get_convertible_roof_state(iParam0);
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (vehicle::_vehicle_has_landing_gear(iParam0)) {
				switch (vehicle::get_landing_gear_state(iParam0)) {
				case 2:
				case 0:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::set_bit(&uParam1->f_77, 22);
					break;

				case 3:
				case 1:
					gameplay::clear_bit(&uParam1->f_77, 23);
					gameplay::clear_bit(&uParam1->f_77, 22);
					break;

				case 4: gameplay::set_bit(&uParam1->f_77, 23); break;
				}
			}
			else {
				gameplay::set_bit(&uParam1->f_77, 23);
			}
		}
		if (!vehicle::get_vehicle_tyres_can_burst(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 9);
		}
		if (vehicle::is_vehicle_stolen(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 10);
		}
		if (vehicle::get_is_vehicle_primary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 13);
			vehicle::get_vehicle_custom_primary_colour(iParam0, &uParam1->f_71, &uParam1->f_72, &uParam1->f_73);
		}
		if (vehicle::get_is_vehicle_secondary_colour_custom(iParam0)) {
			gameplay::set_bit(&uParam1->f_77, 12);
		}
		func_282(&iParam0, &uParam1->f_9, &uParam1->f_59);
		iVar0 = 0;
		while (iVar0 <= 11) {
			if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar0 + 1)) {
				gameplay::set_bit(&uParam1->f_77, func_281(iVar0 + 1));
			}
			iVar0++;
		}
		if (graphics::_does_vehicle_have_decal(iParam0, 0)) {
			gameplay::set_bit(&uParam1->f_77, 11);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 11);
		}
		if (decorator::decor_exist_on(iParam0, "IgnoredByQuickSave") &&
			decorator::decor_get_bool(iParam0, "IgnoredByQuickSave")) {
			gameplay::set_bit(&uParam1->f_77, 27);
		}
		else {
			gameplay::clear_bit(&uParam1->f_77, 27);
		}
	}
}

// Position - 0xDB96
int func_281(int iParam0) {
	switch (iParam0) {
	case 1: return 0;

	case 2: return 1;

	case 3: return 2;

	case 4: return 3;

	case 5: return 4;

	case 6: return 5;

	case 7: return 6;

	case 8: return 7;

	case 9: return 8;

	case 10: return 24;

	case 11: return 25;

	case 12: return 26;
	}
	return 0;
}

// Position - 0xDC46
int func_282(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			(*uParam1)[iVar0] = 0;
			if (vehicle::is_toggle_mod_on(*iParam0, iVar1)) {
				(*uParam1)[iVar0] = 1;
			}
		}
		else {
			(*uParam1)[iVar0] = vehicle::get_vehicle_mod(*iParam0, iVar0) + 1;
			if (iVar0 == 23) {
				(*uParam2)[0] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
			else if (iVar0 == 24) {
				(*uParam2)[1] = vehicle::get_vehicle_mod_variation(*iParam0, iVar0);
			}
		}
		iVar0++;
	}
	return 1;
}

// Position - 0xDD20
void func_283(var *uParam0) {
	int iVar0;

	uParam0->f_66 = 0;
	uParam0->f_77 = 0;
	uParam0->f_65 = 0;
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	uParam0->f_64 = 0;
	uParam0->f_74 = 0;
	uParam0->f_75 = 0;
	uParam0->f_76 = 0;
	*uParam0 = 0;
	StringCopy(&uParam0->f_1, "", 16);
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	iVar0 = 0;
	while (iVar0 < 49) {
		uParam0->f_9[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 2) {
		uParam0->f_59[iVar0] = 0;
		iVar0++;
	}
	uParam0->f_67 = 0;
	uParam0->f_68 = 0;
	uParam0->f_69 = 0;
	uParam0->f_70 = 1;
	uParam0->f_71 = 0;
	uParam0->f_72 = 0;
	uParam0->f_73 = 0;
}

// Position - 0xDDD0
void func_284(int iParam0, char *sParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;
	int iVar2;
	char[] cVar3[8];
	int iVar5;
	var uVar6;
	int iVar10;

	if (iParam3 == 1) {
		if (!gameplay::are_strings_equal("FinaleC2", script::get_this_script_name())) {
		}
	}
	iVar0 = 0;
	if (iParam3 == 1) {
		if (iParam0 != Global_91528) {
			iVar0 = 1;
		}
	}
	else if (iParam0 > Global_91528) {
		iVar0 = 1;
	}
	if (iVar0 == 1) {
		func_151(1);
		if (iParam0 <= Global_91528) {
		}
		iVar1 = func_342(script::get_this_script_name(), 1);
		if (iVar1 != -1 && iVar1 != 94) {
			Global_101700.f_8044.f_330[iVar1 /*6*/].f_1 = 0;
			iVar2 = func_340(iVar1);
			cVar3 = {Global_82612[iVar1 /*34*/].f_8};
			if (iVar1 == 90) {
				switch (Global_101700.f_8044.f_99.f_205[7]) {
				case 1: StringConCat(&cVar3, "A", 8); break;

				case 2: StringConCat(&cVar3, "B", 8); break;
				}
			}
			stats::playstats_mission_checkpoint(&cVar3, iVar2, Global_91528, iParam0);
		}
		else {
			iVar5 = func_335(script::get_this_script_name(), 1);
			if (iVar5 != -1) {
				Global_101700.f_17533[iVar5 /*6*/].f_4 = 0;
				MemCopy(&uVar6, {func_334(iVar5)}, 4);
				stats::playstats_mission_checkpoint(&uVar6, 0, Global_91528, iParam0);
			}
			else {
				iVar10 = func_333(&Global_91491.f_3);
				if (iVar10 > -1) {
					Global_101700.f_23945.f_4[iVar10] = 0;
				}
			}
		}
		Global_86002 = iParam2;
		Global_91528 = iParam0;
		func_285(iParam0, sParam1, iParam4, iParam5);
		if (gameplay::are_strings_equal(sParam1, "")) {
		}
	}
	else if (iParam0 < Global_91528) {
	}
}

// Position - 0xDF45
void func_285(int iParam0, var uParam1, int iParam2, int iParam3) {
	func_286(&Global_96040, script::get_this_script_name(), iParam0, uParam1, iParam3, iParam2);
}

// Position - 0xDF61
void func_286(var *uParam0, var uParam1, var uParam2, var uParam3, int iParam4, int iParam5) {
	int iVar0;
	int iVar1;

	*uParam0 = func_13();
	uParam0->f_1 = func_322();
	gameplay::_get_weather_type_transition(&uParam0->f_6, &uParam0->f_7, &uParam0->f_8);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		func_307(&uParam0->f_2305, 0);
		func_306(player::player_ped_id());
		func_300(player::player_ped_id(), 0);
		weapon::get_current_ped_weapon(player::player_ped_id(), &uParam0->f_2, 1);
		if (uParam0->f_2 == 0 || uParam0->f_2 == joaat("object")) {
			uParam0->f_2 = joaat("weapon_unarmed");
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		uParam0->f_17[iVar1] = Global_101700.f_2095.f_539.f_294[iVar1];
		if (iVar1 == func_299()) {
			func_292(player::player_ped_id(), &uParam0->f_616[iVar1 /*65*/], 1);
		}
		else {
			iVar0 = 0;
			while (iVar0 < 12) {
				uParam0->f_616[iVar1 /*65*/][iVar0] = Global_91281[iVar1 /*65*/][iVar0];
				uParam0->f_616[iVar1 /*65*/].f_13[iVar0] = Global_91281[iVar1 /*65*/].f_13[iVar0];
				iVar0++;
			}
			uParam0->f_616[iVar1 /*65*/].f_59 = Global_91281[iVar1 /*65*/].f_59;
			uParam0->f_616[iVar1 /*65*/].f_60 = Global_91281[iVar1 /*65*/].f_60;
			uParam0->f_616[iVar1 /*65*/].f_61 = Global_91281[iVar1 /*65*/].f_61;
			uParam0->f_616[iVar1 /*65*/].f_62 = Global_91281[iVar1 /*65*/].f_62;
			uParam0->f_616[iVar1 /*65*/].f_63 = Global_91281[iVar1 /*65*/].f_63;
			uParam0->f_616[iVar1 /*65*/].f_64 = Global_91281[iVar1 /*65*/].f_64;
			iVar0 = 0;
			while (iVar0 < 9) {
				uParam0->f_616[iVar1 /*65*/].f_39[iVar0] = Global_91281[iVar1 /*65*/].f_39[iVar0];
				uParam0->f_616[iVar1 /*65*/].f_49[iVar0] = Global_91281[iVar1 /*65*/].f_49[iVar0];
				iVar0++;
			}
		}
		iVar0 = 0;
		while (iVar0 < 44) {
			uParam0->f_812[iVar1 /*284*/][iVar0 /*3*/] = {Global_101700.f_2095.f_539.f_298[iVar1 /*284*/][iVar0 /*3*/]};
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			uParam0->f_812[iVar1 /*284*/].f_133[iVar0 /*3*/] = {
				Global_101700.f_2095.f_539.f_298[iVar1 /*284*/].f_133[iVar0 /*3*/]};
			iVar0++;
		}
		switch (iVar1) {
		case 0:
			stats::stat_get_int(joaat("sp0_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp0_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp0_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp0_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 1:
			stats::stat_get_int(joaat("sp1_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp1_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp1_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp1_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;

		case 2:
			stats::stat_get_int(joaat("sp2_weap_purch_0"), &uParam0->f_1665[iVar1 /*32*/][0], -1);
			stats::stat_get_int(joaat("sp2_weap_purch_1"), &uParam0->f_1665[iVar1 /*32*/][1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_5[0], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_5[1], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_5[2], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_5[3], -1);
			stats::stat_get_int(joaat("sp2_weap_addon_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_5[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_0"), &uParam0->f_1665[iVar1 /*32*/].f_16[0], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_1"), &uParam0->f_1665[iVar1 /*32*/].f_16[1], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_2"), &uParam0->f_1665[iVar1 /*32*/].f_16[2], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_3"), &uParam0->f_1665[iVar1 /*32*/].f_16[3], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_4"), &uParam0->f_1665[iVar1 /*32*/].f_16[4], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_5"), &uParam0->f_1665[iVar1 /*32*/].f_16[5], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_6"), &uParam0->f_1665[iVar1 /*32*/].f_16[6], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_7"), &uParam0->f_1665[iVar1 /*32*/].f_16[7], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_8"), &uParam0->f_1665[iVar1 /*32*/].f_16[8], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_9"), &uParam0->f_1665[iVar1 /*32*/].f_16[9], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_10"), &uParam0->f_1665[iVar1 /*32*/].f_16[10], -1);
			stats::stat_get_int(joaat("sp2_weap_tint_purch_11"), &uParam0->f_1665[iVar1 /*32*/].f_16[11], -1);
			break;
		}
		uParam0->f_9[iVar1] = Global_101700.f_19523.f_233[iVar1 /*69*/].f_1;
		uParam0->f_13[iVar1] = Global_52996[iVar1];
		uParam0->f_25[0 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[0 /*295*/][iVar1 /*98*/]};
		uParam0->f_25[1 /*295*/][iVar1 /*98*/] = {Global_101700.f_2095.f_539.f_1635[1 /*295*/][iVar1 /*98*/]};
		iVar0 = 0;
		while (iVar0 <= 3) {
			uParam0->f_2259[iVar1 /*15*/][iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/][iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_5[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_5[iVar0];
			uParam0->f_2259[iVar1 /*15*/].f_10[iVar0] = Global_101700.f_2095.f_493[iVar1 /*15*/].f_10[iVar0];
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 2) {
			uParam0->f_1766[iVar1 /*164*/][iVar0] = Global_101700.f_2095[iVar1 /*164*/][iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_4[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_4[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_8[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_8[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_12[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_12[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_16[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_16[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_20[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_20[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_24[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_24[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_28[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_28[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_32[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_32[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_36[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_36[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_40[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_40[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_44[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_44[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_48[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_48[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_52[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_52[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_56[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_56[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_60[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_60[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_64[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_64[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_68[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_68[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_72[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_72[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_76[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_76[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_80[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_80[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_84[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_84[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_88[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_88[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_92[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_92[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_96[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_96[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_100[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_100[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_104[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_104[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_108[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_108[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_112[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_112[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_116[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_116[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_120[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_120[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_124[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_124[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_128[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_128[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_132[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_132[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_136[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_136[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_140[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_140[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_144[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_144[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_148[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_148[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_152[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_152[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_156[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_156[iVar0];
			uParam0->f_1766[iVar1 /*164*/].f_160[iVar0] = Global_101700.f_2095[iVar1 /*164*/].f_160[iVar0];
			iVar0++;
		}
		iVar1++;
	}
	stats::stat_get_int(joaat("sp0_special_ability"), &uParam0->f_1762[0], -1);
	stats::stat_get_int(joaat("sp1_special_ability"), &uParam0->f_1762[1], -1);
	stats::stat_get_int(joaat("sp2_special_ability"), &uParam0->f_1762[2], -1);
	uParam0->f_5 = 145;
	if (iParam4 == 1) {
		func_288(&uParam0->f_2311, uParam0, iParam5, 1, 1, 0);
	}
	func_287(&uParam0->f_2401);
	uParam3 = uParam3;
	uParam2 = uParam2;
}

// Position - 0xEDE9
int func_287(var *uParam0) {
	*uParam0 = Global_87673;
	uParam0->f_1 = Global_87674;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	return 1;
}

// Position - 0xEE0B
void func_288(var *uParam0, var *uParam1, int iParam2, int iParam3, int iParam4, int iParam5) {
	int iVar0;

	if (iParam2 == 0) {
		iParam2 = player::player_ped_id();
	}
	if (entity::does_entity_exist(iParam2)) {
		uParam1->f_5 = func_16(iParam2);
	}
	if (func_289(iParam2, &iVar0, iParam3, iParam5)) {
		func_272(uParam0, uParam1, iVar0, iParam4);
	}
	else if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_dead(iVar0, 0)) {
			if (vehicle::is_vehicle_model(iVar0, joaat("skylift")) &&
				ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
				func_272(uParam0, uParam1, iVar0, iParam4);
			}
		}
	}
}

// Position - 0xEE93
bool func_289(int iParam0, var *uParam1, int iParam2, int iParam3) {
	char *sVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (!ped::is_ped_injured(iParam0)) {
			if (iParam0 == player::player_ped_id()) {
				*uParam1 = player::get_players_last_vehicle();
			}
			else {
				*uParam1 = ped::get_vehicle_ped_is_in(iParam0, 1);
			}
			if (entity::does_entity_exist(*uParam1)) {
				if (vehicle::is_vehicle_driveable(*uParam1, 0)) {
					if (iParam2 == 0 ||
						gameplay::get_distance_between_coords(entity::get_entity_coords(*uParam1, 1),
															  entity::get_entity_coords(iParam0, 1), 1) < 100f) {
						if (vehicle::is_vehicle_model(*uParam1, joaat("taxi"))) {
							if (vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != iParam0 &&
								vehicle::get_ped_in_vehicle_seat(*uParam1, -1, 0) != 0) {
								return false;
							}
						}
						if (func_290(*uParam1, func_13(), 1)) {
							sVar0 = script::get_this_script_name();
							if (!gameplay::are_strings_equal(sVar0, "save_anywhere")) {
								return false;
							}
							else if (!ped::is_ped_in_any_vehicle(iParam0, 1)) {
								return false;
							}
						}
						if (iParam3 == 1) {
							if (decorator::decor_exist_on(*uParam1, "IgnoredByQuickSave")) {
								if (decorator::decor_get_bool(*uParam1, "IgnoredByQuickSave")) {
									return false;
								}
							}
						}
						else if (vehicle::is_vehicle_model(*uParam1, joaat("blimp"))) {
							return false;
						}
						return true;
					}
				}
			}
		}
	}
	return false;
}

// Position - 0xEFC2
bool func_290(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	char *sVar1;
	int iVar9;

	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0)) {
		return false;
	}
	iVar0 = 0;
	while (func_291(iParam1, iVar0, &sVar1, &iVar9)) {
		if (!iParam2 || gameplay::is_bit_set(Global_101700.f_6188[iVar9], 0)) {
			if (vehicle::is_vehicle_in_garage_area(&sVar1, iParam0)) {
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

// Position - 0xF033
bool func_291(int iParam0, int iParam1, char *sParam2, int *iParam3) {
	StringCopy(sParam2, "", 32);
	switch (iParam0) {
	case 0:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Michael - Beverly Hills", 32);
			*iParam3 = 0;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 1;
			return true;
		}
		break;

	case 1:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Franklin - Aunt", 32);
			*iParam3 = 5;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Franklin - Hills", 32);
			*iParam3 = 6;
			return true;
		}
		break;

	case 2:
		if (iParam1 == 0) {
			StringCopy(sParam2, "Trevor - Countryside", 32);
			*iParam3 = 2;
			return true;
		}
		else if (iParam1 == 1) {
			StringCopy(sParam2, "Trevor - City", 32);
			*iParam3 = 3;
			return true;
		}
		else if (iParam1 == 2) {
			StringCopy(sParam2, "Trevor - Stripclub", 32);
			*iParam3 = 4;
			return true;
		}
		break;
	}
	return false;
}

// Position - 0xF10B
void func_292(int iParam0, var *uParam1, int iParam2) {
	int iVar0;
	int iVar1;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = func_16(iParam0);
		iVar1 = 0;
		while (iVar1 < 12) {
			func_298(iParam0, iVar1, &uParam1->f_13[iVar1], &(*uParam1)[iVar1], &uParam1->f_26[iVar1], iParam2, 145);
			iVar1++;
		}
		iVar1 = 0;
		while (iVar1 < 9) {
			func_297(iParam0, iVar1, &uParam1->f_39[iVar1], &uParam1->f_49[iVar1], iParam2, 145);
			iVar1++;
		}
		if (func_15(iVar0)) {
			uParam1->f_59 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_59;
			uParam1->f_60 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_60;
			uParam1->f_61 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_61;
			uParam1->f_62 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_62;
			uParam1->f_63 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_63;
			uParam1->f_64 = Global_101700.f_2095.f_539[iVar0 /*65*/].f_64;
		}
		else if (network::network_is_game_in_progress() &&
				 entity::get_entity_model(iParam0) == entity::get_entity_model(player::player_ped_id())) {
			if (func_296(161, -1)) {
				uParam1->f_59 = func_293(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_293(747, Global_69521, 0);
			}
			uParam1->f_60 = func_293(748, Global_69521, 0);
			uParam1->f_61 = func_293(749, Global_69521, 0);
		}
		if (network::network_is_game_in_progress() && iParam0 == player::player_ped_id()) {
			if (func_296(161, -1)) {
				uParam1->f_59 = func_293(2045, Global_69521, 0);
			}
			else {
				uParam1->f_59 = func_293(747, Global_69521, 0);
			}
		}
	}
}

// Position - 0xF2B5
int func_293(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	var uVar1;

	if (iParam2 == 0) {
	}
	iVar0 = Global_2503826[iParam0 /*3*/][func_294(iParam1)];
	if (stats::stat_get_int(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return 0;
}

// Position - 0xF2E7
int func_294(var uParam0) {
	int iVar0;
	int iVar1;

	iVar0 = uParam0;
	if (iVar0 == -1) {
		iVar1 = func_295();
		if (iVar1 > -1) {
			Global_2503539 = 0;
			iVar0 = iVar1;
		}
		else {
			iVar0 = 0;
			Global_2503539 = 1;
		}
	}
	return iVar0;
}

// Position - 0xF31B
var func_295() { return Global_1312735; }

// Position - 0xF327
bool func_296(int iParam0, int iParam1) {
	int iVar0;
	var uVar1;

	iVar0 = Global_2522581[iParam0 /*3*/][func_294(iParam1)];
	if (stats::stat_get_bool(iVar0, &uVar1, -1)) {
		return uVar1;
	}
	return false;
}

// Position - 0xF353
void func_297(int iParam0, int iParam1, int *iParam2, int *iParam3, int iParam4, int iParam5) {
	int iVar0;

	iVar0 = func_16(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_prop_index(iParam0, iParam1);
		*iParam3 = ped::get_ped_prop_texture_index(iParam0, iParam1);
	}
	else {
		iVar0 = iParam5;
	}
	if (iParam4 == 0) {
		return;
	}
	if (iParam1 == 0) {
		if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
			if (iParam0 != 0) {
				if (ped::is_ped_wearing_helmet(iParam0) && ped::_0x451294E859ECC018(iParam0) != -1) {
					*iParam2 = ped::_0x451294E859ECC018(iParam0);
					*iParam3 = ped::_0x9D728C1E12BF5518(iParam0);
				}
			}
		}
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 0) {
			if (*iParam2 == 7) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 28) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		else if (iParam1 == 1) {
			if (*iParam2 == 1) {
				if ((iParam4 & 2) != 0 || (iParam4 & 64) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 0) {
			if (*iParam2 == 2) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 4) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 16) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 6) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 17) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 20) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 8 && *iParam2 <= 14) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 0) {
			if (*iParam2 == 9) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 11) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 12) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 21) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 23) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 == 27) {
				if ((iParam4 & 1) != 0 || (iParam4 & 2) != 0 || (iParam4 & 8) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
			else if (*iParam2 >= 14 && *iParam2 <= 20 || *iParam2 == 2) {
				if ((iParam4 & 2) != 0 || (iParam4 & 4) != 0) {
					*iParam2 = -1;
					*iParam3 = -1;
				}
			}
		}
		break;
	}
}

// Position - 0xF89B
void func_298(int iParam0, int iParam1, int *iParam2, int *iParam3, var *uParam4, int iParam5, int iParam6) {
	int iVar0;

	iVar0 = func_16(iParam0);
	if (iParam0 != 0) {
		*iParam2 = ped::get_ped_drawable_variation(iParam0, iParam1);
		*iParam3 = ped::get_ped_texture_variation(iParam0, iParam1);
		*uParam4 = ped::get_ped_palette_variation(iParam0, iParam1);
	}
	else {
		iVar0 = iParam6;
	}
	if (iParam5 == 0) {
		return;
	}
	switch (iVar0) {
	case 0:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 15) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 3 || *iParam2 == 22) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 8) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 1:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 1 || *iParam2 == 10) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
			if ((iParam5 & 2) != 0 || (iParam5 & 64) != 0) {
				if (*iParam2 == 19) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
				if (*iParam2 == 5) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;

	case 2:
		if (iParam1 == 8) {
			if ((iParam5 & 1) != 0 || (iParam5 & 2) != 0 || (iParam5 & 32) != 0) {
				if (*iParam2 == 3) {
					*iParam2 = 14;
					*iParam3 = 0;
				}
			}
		}
		else if (iParam1 == 9) {
			if (*iParam2 >= 5 && *iParam2 <= 7) {
				if ((iParam5 & 2) != 0 || (iParam5 & 4) != 0) {
					*iParam2 = 0;
					*iParam3 = 0;
				}
			}
		}
		break;
	}
}

// Position - 0xFADC
int func_299() {
	func_14();
	return Global_101700.f_2095.f_539.f_3549;
}

// Position - 0xFAF5
void func_300(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !ped::is_ped_injured(iParam0)) {
		if (iParam0 == player::player_ped_id()) {
			func_301(iParam0, &Global_101700.f_2095.f_539.f_298[iVar0 /*284*/]);
			iVar2 = 0;
			while (iVar2 <= 8 - 1) {
				Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] = ui::_0xA13E93403F26C812(iVar2);
				if (iParam1) {
					iVar1 = ui::_0xA48931185F0536FE();
					if (Global_101700.f_2095.f_539.f_1151[iVar2 /*4*/][iVar0] == iVar1) {
						Global_101700.f_2095.f_539.f_1184 = iVar2;
					}
				}
				iVar2++;
			}
			player::get_player_parachute_pack_tint_index(player::player_id(), &iVar3);
			if (iVar0 == 0) {
				stats::stat_set_int(joaat("sp0_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 1) {
				stats::stat_set_int(joaat("sp1_parachute_current_tint"), iVar3, 1);
			}
			else if (iVar0 == 2) {
				stats::stat_set_int(joaat("sp2_parachute_current_tint"), iVar3, 1);
			}
		}
	}
}

// Position - 0xFBE8
void func_301(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<4> Var48;
	int iVar70;

	if (!ped::is_ped_injured(iParam0)) {
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			(*uParam1)[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 44 - 1) {
			iVar3 = func_305(iVar0);
			if (iVar3 != 0) {
				vVar4.x = weapon::get_ped_weapontype_in_slot(iParam0, func_305(iVar0));
				vVar4.y = 0;
				vVar4.z = 0;
				if (vVar4.x != 0 && vVar4.x != joaat("weapon_unarmed")) {
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (vVar4.x == joaat("gadget_parachute")) {
						vVar4.y = 1;
					}
					gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					(*uParam1)[iVar0 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					iVar2 = func_303(vVar4.x, iVar1);
					while (iVar2 != 0) {
						if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, iVar2)) {
							gameplay::set_bit(&vVar4.f_2, iVar1);
						}
						iVar1++;
						iVar2 = func_303(vVar4.x, iVar1);
					}
				}
				(*uParam1)[iVar0 /*3*/] = {vVar4};
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= 50 - 1) {
			uParam1->f_133[iVar0 /*3*/].f_1 = 0;
			iVar0++;
		}
		iVar8 = dlc1::get_num_dlc_weapons();
		iVar7 = 0;
		while (iVar7 < iVar8) {
			if (dlc1::get_dlc_weapon_data(iVar7, &Var9) && !func_302(Var9.f_1) && iVar70 < 50) {
				if (!dlc1::_is_dlc_data_empty(Var9)) {
					vVar4.x = Var9.f_1;
					vVar4.y = 0;
					vVar4.z = 0;
					vVar4.y = weapon::get_ammo_in_ped_weapon(iParam0, vVar4.x);
					if (weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						gameplay::set_bit(&vVar4.f_2, 20 + weapon::get_ped_weapon_tint_index(iParam0, vVar4.x));
					}
					else {
						gameplay::set_bit(&vVar4.f_2, 20);
					}
					if (vVar4.y == -1) {
						if (!weapon::get_max_ammo(iParam0, vVar4.x, &vVar4.f_1)) {
							vVar4.y = 0;
						}
					}
					uParam1->f_133[iVar70 /*3*/].f_1 = vVar4.y;
					iVar1 = 0;
					while (iVar1 < dlc1::get_num_dlc_weapon_components(iVar7)) {
						if (dlc1::get_dlc_weapon_component_data(iVar7, iVar1, &Var48)) {
							if (weapon::has_ped_got_weapon_component(iParam0, vVar4.x, Var48.f_3)) {
								gameplay::set_bit(&vVar4.f_2, iVar1);
							}
						}
						iVar1++;
					}
				}
				if (vVar4.x != 0) {
					if (!weapon::has_ped_got_weapon(iParam0, vVar4.x, 0)) {
						vVar4.x = 0;
						vVar4.y = 0;
					}
				}
				uParam1->f_133[iVar70 /*3*/] = {vVar4};
				iVar70++;
			}
			iVar7++;
		}
	}
}

// Position - 0xFE4C
int func_302(int iParam0) {
	if (network::network_is_game_in_progress()) {
	}
	else {
		switch (iParam0) {
		case joaat("weapon_pistol50"):
		case joaat("weapon_bullpupshotgun"):
		case joaat("weapon_assaultsmg"): return 0;

		case joaat("weapon_bottle"):
		case joaat("weapon_snspistol"):
		case joaat("weapon_gusenberg"): return 0;

		case joaat("weapon_heavypistol"):
		case joaat("weapon_specialcarbine"): return 0;

		case joaat("weapon_bullpuprifle"): return 0;

		case joaat("weapon_dagger"):
		case joaat("weapon_vintagepistol"): return 0;

		case joaat("weapon_firework"):
		case joaat("weapon_musket"): return 0;

		case joaat("weapon_heavyshotgun"):
		case joaat("weapon_marksmanrifle"): return 0;

		case joaat("weapon_hominglauncher"):
		case joaat("weapon_proxmine"): return 0;

		case joaat("weapon_combatpdw"):
		case joaat("weapon_knuckle"):
		case joaat("weapon_marksmanpistol"): return 0;

		case -947031628:
		case -572349828:
		case 392730790:
		case -1523701417:
		case -2112826155:
		case -664359727:
		case -1887867191:
		case -837150131:
		case -344484024:
		case joaat("weapon_flaregun"):
		case joaat("weapon_handcuffs"):
		case joaat("weapon_snowball"):
		case joaat("weapon_garbagebag"):
		case joaat("weapon_flashlight"):
		case joaat("weapon_switchblade"):
		case joaat("weapon_revolver"):
		case joaat("weapon_dbshotgun"):
		case joaat("weapon_compactrifle"):
		case 317205821:
		case -1121678507:
		case 125959754:
		case -853065399:
		case -1169823560:
		case -1810795771:
		case 419712736: return 1;
		}
	}
	return 0;
}

// Position - 0xFFBA
int func_303(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	var *uVar2;
	struct<4> Var41;

	iVar0 = 0;
	switch (iParam0) {
	case joaat("weapon_pistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpistol_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_combatpistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_appistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_appistol_clip_01"); break;

		case 1: iVar0 = joaat("component_appistol_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;

		case 4: iVar0 = joaat("component_appistol_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_microsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_microsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_microsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_microsmg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_smg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_smg_clip_01"); break;

		case 1: iVar0 = joaat("component_smg_clip_02"); break;

		case 2: iVar0 = joaat("component_smg_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_pi_supp"); break;

		case 5: iVar0 = joaat("component_at_scope_macro_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_smg_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_assaultrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_assaultrifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_at_ar_flsh"); break;

		case 5: iVar0 = joaat("component_at_scope_macro"); break;

		case 6: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 7: iVar0 = joaat("component_assaultrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_carbinerifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_carbinerifle_clip_01"); break;

		case 1: iVar0 = joaat("component_carbinerifle_clip_02"); break;

		case 2: iVar0 = joaat("component_carbinerifle_clip_03"); break;

		case 3: iVar0 = joaat("component_at_railcover_01"); break;

		case 4: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 5: iVar0 = joaat("component_at_ar_flsh"); break;

		case 6: iVar0 = joaat("component_at_scope_medium"); break;

		case 7: iVar0 = joaat("component_at_ar_supp"); break;

		case 8: iVar0 = joaat("component_carbinerifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_advancedrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_advancedrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_advancedrifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_advancedrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_mg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_mg_clip_01"); break;

		case 1: iVar0 = joaat("component_mg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_scope_small_02"); break;

		case 3: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 4: iVar0 = joaat("component_mg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_combatmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatmg_clip_01"); break;

		case 1: iVar0 = joaat("component_combatmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_scope_medium"); break;

		case 4: iVar0 = joaat("component_combatmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_pumpshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_sr_supp"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_pumpshotgun_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_assaultshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultshotgun_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultshotgun_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;
		}
		break;

	case joaat("weapon_sniperrifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sniperrifle_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_sniperrifle_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_heavysniper"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_heavysniper_clip_01"); break;

		case 1: iVar0 = joaat("component_at_scope_large"); break;

		case 2: iVar0 = joaat("component_at_scope_max"); break;
		}
		break;

	case joaat("weapon_grenadelauncher"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_scope_small"); break;
		}
		break;

	case joaat("weapon_minigun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_minigun_clip_01"); break;
		}
		break;

	case joaat("weapon_assaultsmg"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_assaultsmg_clip_01"); break;

		case 1: iVar0 = joaat("component_assaultsmg_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_macro"); break;

		case 4: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 5: iVar0 = joaat("component_assaultsmg_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_bullpupshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 1: iVar0 = joaat("component_at_ar_flsh"); break;

		case 2: iVar0 = joaat("component_at_ar_supp_02"); break;
		}
		break;

	case joaat("weapon_pistol50"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_pistol50_clip_01"); break;

		case 1: iVar0 = joaat("component_pistol50_clip_02"); break;

		case 2: iVar0 = joaat("component_at_pi_flsh"); break;

		case 3: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 4: iVar0 = joaat("component_pistol50_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_combatpdw"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_combatpdw_clip_01"); break;

		case 1: iVar0 = joaat("component_combatpdw_clip_02"); break;

		case 2: iVar0 = joaat("component_combatpdw_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_small"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;
		}
		break;

	case joaat("weapon_sawnoffshotgun"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_sawnoffshotgun_varmod_luxe"); break;
		}
		break;

	case joaat("weapon_bullpuprifle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_bullpuprifle_clip_01"); break;

		case 1: iVar0 = joaat("component_bullpuprifle_clip_02"); break;

		case 2: iVar0 = joaat("component_at_ar_flsh"); break;

		case 3: iVar0 = joaat("component_at_scope_small"); break;

		case 4: iVar0 = joaat("component_at_ar_supp"); break;

		case 5: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 6: iVar0 = joaat("component_bullpuprifle_varmod_low"); break;
		}
		break;

	case joaat("weapon_snspistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_snspistol_clip_01"); break;

		case 1: iVar0 = joaat("component_snspistol_clip_02"); break;

		case 2: iVar0 = joaat("component_snspistol_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_specialcarbine"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_specialcarbine_clip_01"); break;

		case 1: iVar0 = joaat("component_specialcarbine_clip_02"); break;

		case 2: iVar0 = joaat("component_specialcarbine_clip_03"); break;

		case 3: iVar0 = joaat("component_at_ar_flsh"); break;

		case 4: iVar0 = joaat("component_at_scope_medium"); break;

		case 5: iVar0 = joaat("component_at_ar_supp_02"); break;

		case 6: iVar0 = joaat("component_at_ar_afgrip"); break;

		case 7: iVar0 = joaat("component_specialcarbine_varmod_lowrider"); break;
		}
		break;

	case joaat("weapon_knuckle"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_knuckle_varmod_pimp"); break;

		case 1: iVar0 = joaat("component_knuckle_varmod_ballas"); break;

		case 2: iVar0 = joaat("component_knuckle_varmod_dollar"); break;

		case 3: iVar0 = joaat("component_knuckle_varmod_diamond"); break;

		case 4: iVar0 = joaat("component_knuckle_varmod_hate"); break;

		case 5: iVar0 = joaat("component_knuckle_varmod_love"); break;

		case 6: iVar0 = joaat("component_knuckle_varmod_player"); break;

		case 7: iVar0 = joaat("component_knuckle_varmod_king"); break;

		case 8: iVar0 = joaat("component_knuckle_varmod_vagos"); break;
		}
		break;

	case joaat("weapon_machinepistol"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_machinepistol_clip_01"); break;

		case 1: iVar0 = joaat("component_machinepistol_clip_02"); break;

		case 2: iVar0 = joaat("component_machinepistol_clip_03"); break;

		case 3: iVar0 = joaat("component_at_pi_supp"); break;
		}
		break;

	case joaat("weapon_switchblade"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_switchblade_varmod_var1"); break;

		case 1: iVar0 = joaat("component_switchblade_varmod_var2"); break;
		}
		break;

	case joaat("weapon_revolver"):
		switch (iParam1) {
		case 0: iVar0 = joaat("component_revolver_clip_01"); break;

		case 1: iVar0 = joaat("component_revolver_varmod_boss"); break;

		case 2: iVar0 = joaat("component_revolver_varmod_goon"); break;
		}
		break;

	case -1121678507:
		switch (iParam1) {
		case 0: iVar0 = -2067221805; break;

		case 1: iVar0 = -1820405577; break;
		}
		break;

	default:
		if (iParam0 != 0) {
			iVar1 = func_304(iParam0, &uVar2);
			if (iVar1 != -1) {
				if (iParam1 < dlc1::get_num_dlc_weapon_components(iVar1)) {
					if (dlc1::get_dlc_weapon_component_data(iVar1, iParam1, &Var41)) {
						return Var41.f_3;
					}
				}
			}
		}
		break;
	}
	return iVar0;
}

// Position - 0x10AE2
int func_304(int iParam0, var *uParam1) {
	int iVar0;
	int iVar1;

	iVar1 = dlc1::get_num_dlc_weapons();
	iVar0 = 0;
	while (iVar0 < iVar1) {
		if (dlc1::get_dlc_weapon_data(iVar0, uParam1)) {
			if (uParam1->f_1 == iParam0) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x10B1D
int func_305(int iParam0) {
	int iVar0;

	iVar0 = 0;
	switch (iParam0) {
	case 0: iVar0 = 1993361168; break;

	case 1: iVar0 = 1277010230; break;

	case 2: iVar0 = 932043479; break;

	case 3: iVar0 = -690654591; break;

	case 4: iVar0 = -1459198205; break;

	case 5: iVar0 = 195782970; break;

	case 6: iVar0 = -438797331; break;

	case 7: iVar0 = 896793492; break;

	case 8: iVar0 = 495159329; break;

	case 9: iVar0 = -1155528315; break;

	case 10: iVar0 = -515636489; break;

	case 11: iVar0 = -871913299; break;

	case 12: iVar0 = -1352759032; break;

	case 13: iVar0 = -542958961; break;

	case 14: iVar0 = 1682645887; break;

	case 15: iVar0 = -859470162; break;

	case 16: iVar0 = -2125426402; break;

	case 17: iVar0 = 2067210266; break;

	case 18: iVar0 = -538172856; break;

	case 19: iVar0 = 1783244476; break;

	case 20: iVar0 = 439844898; break;

	case 21: iVar0 = -24829327; break;

	case 22: iVar0 = 1949306232; break;

	case 23: iVar0 = -1941230881; break;

	case 24: iVar0 = -1033554448; break;

	case 25: iVar0 = 320513715; break;

	case 26: iVar0 = -695165975; break;

	case 27: iVar0 = -281028447; break;

	case 28: iVar0 = -686713772; break;

	case 29: iVar0 = 347509793; break;

	case 30: iVar0 = 1769089473; break;

	case 31: iVar0 = 189935548; break;

	case 33: iVar0 = 248801358; break;

	case 34: iVar0 = 386596758; break;

	case 35: iVar0 = -157212362; break;

	case 36: iVar0 = 436985596; break;

	case 37: iVar0 = -47957369; break;

	case 38: iVar0 = 575938238; break;
	}
	return iVar0;
}

// Position - 0x10D91
void func_306(int iParam0) {
	int iVar0;

	iVar0 = func_16(iParam0);
	if (func_15(iVar0) && !ped::is_ped_injured(iParam0)) {
		Global_101700.f_2095.f_539.f_294[iVar0] = ped::get_ped_armour(iParam0);
	}
}

// Position - 0x10DCD
void func_307(var *uParam0, int iParam1) {
	int iVar0;
	vector3 vVar1;
	float *fVar4;
	int iVar5;

	*uParam0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	uParam0->f_3 = entity::get_entity_heading(player::player_ped_id());
	uParam0->f_5 = ped::get_ped_parachute_state(player::player_ped_id());
	if (player::is_player_playing(player::player_id())) {
		uParam0->f_4 = player::get_player_wanted_level(player::player_id());
	}
	if (system::vdist(*uParam0, 320.9934f, 265.2515f, 82.1221f) < 10f) {
		*uParam0 = {301.2162f, 202.1357f, 103.3797f};
		uParam0->f_3 = 156.5144f;
	}
	else if (system::vdist(*uParam0, 377.153f, -717.567f, 10.0536f) < 10f) {
		*uParam0 = {394.2567f, -713.5439f, 28.2853f};
		uParam0->f_3 = 276.6273f;
	}
	else if (system::vdist(*uParam0, -1425.564f, -244.3f, 15.8053f) < 10f) {
		*uParam0 = {-1423.472f, -214.2539f, 45.5004f};
		uParam0->f_3 = 353.8757f;
	}
	else if (script::_get_number_of_instances_of_script_with_name_hash(joaat("finale_choice")) > 0) {
		*uParam0 = {4.2587f, 525.0214f, 173.6281f};
		uParam0->f_3 = 203.6746f;
	}
	else if (gameplay::is_bit_set(Global_69950, 4)) {
		*uParam0 = {452.0255f, 5571.85f, 780.1859f};
		uParam0->f_3 = 78.9858f;
	}
	else if (gameplay::is_bit_set(Global_69950, 5)) {
		*uParam0 = {-745.4462f, 5595.146f, 40.6594f};
		uParam0->f_3 = 261.747f;
	}
	else if (gameplay::is_bit_set(Global_69950, 6)) {
		*uParam0 = {-1675.521f, -1125.59f, 12.091f};
		uParam0->f_3 = 271.8208f;
	}
	else if (gameplay::is_bit_set(Global_69950, 7)) {
		*uParam0 = {-1631.219f, -1112.805f, 12.0212f};
		uParam0->f_3 = 316.8879f;
	}
	else if (interior::get_interior_from_entity(player::player_ped_id()) ==
			 interior::get_interior_at_coords_with_type(1272.659f, -1715.467f, 53.7715f, "v_lesters")) {
		*uParam0 = {1276.956f, -1725.189f, 53.6551f};
		uParam0->f_3 = 204.1703f;
	}
	else if (entity::is_entity_in_angled_area(player::player_ped_id(), -415.4365f, 2068.289f, 113.3002f, -564.9516f,
											  1884.703f, 134.0403f, 258.75f, 0, 1, 0) ||
			 entity::is_entity_in_angled_area(player::player_ped_id(), -596.4706f, 2089.921f, 125.4128f, -581.2134f,
											  2036.256f, 136.2836f, 9.5f, 0, 1, 0)) {
		*uParam0 = {-601.59f, 2099.197f, 128.8928f};
		uParam0->f_3 = 204.7498f;
	}
	else if (system::vdist(*uParam0, -1007.393f, -477.9584f, 52.5357f) < 8f) {
		*uParam0 = {-1018.376f, -483.9436f, 36.0964f};
		uParam0->f_3 = 114.7664f;
	}
	else if (system::vdist(*uParam0, 480.6662f, -1317.808f, 28.20303f) < 15f) {
		*uParam0 = {497.7238f, -1310.932f, 28.2372f};
		uParam0->f_3 = 289.3663f;
	}
	else if (system::vdist(*uParam0, 2329.527f, 2571.311f, 45.6779f) < 5f) {
		*uParam0 = {2316.93f, 2594.153f, 45.7199f};
		uParam0->f_3 = 348.1325f;
	}
	if (iParam1 == 1) {
		if (func_310(&iVar0)) {
			if (func_309(iVar0, &vVar1, &fVar4)) {
				vVar1.z++;
				*uParam0 = {vVar1};
				uParam0->f_3 = fVar4;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 207.4336f, -1019.795f, -100.4728f, 189.9338f,
												  -1019.623f, -95.56883f, 17.1875f, 0, 1, 0)) {
			iVar5 = func_13();
			if (iVar5 == 0) {
				*uParam0 = {-65.1234f, 81.2517f, 70.5644f};
				uParam0->f_3 = 71.6237f;
			}
			else if (iVar5 == 1) {
				*uParam0 = {-68.5531f, -1824.377f, 25.9424f};
				uParam0->f_3 = 215.8295f;
			}
			else if (iVar5 == 2) {
				*uParam0 = {-220.8189f, -1162.302f, 22.0242f};
				uParam0->f_3 = 70.2711f;
			}
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 483.7175f, -1326.63f, 28.2135f, 474.9644f,
												  -1307.998f, 34.49498f, 12f, 0, 1, 0)) {
			*uParam0 = {495.4108f, -1306.08f, 29.2883f};
			uParam0->f_3 = 213.6273f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), -1146.77f, -1534.22f, 3.37f, -1158.453f,
												  -1517.75f, 6.374244f, 13f, 0, 1, 0)) {
			*uParam0 = {-1160.095f, -1515.407f, 3.1496f};
			uParam0->f_3 = 305.6424f;
		}
		else if (entity::is_entity_in_angled_area(player::player_ped_id(), 439.5432f, -996.9769f, 24.88307f, 428.2935f,
												  -997.0192f, 28.57458f, 8.5f, 0, 1, 0)) {
			*uParam0 = {431.8853f, -1013.133f, 28.7907f};
			uParam0->f_3 = 186.6814f;
		}
		else if (func_308(*uParam0, "v_hospital", 307.3065f, -589.9595f, 43.302f)) {
			*uParam0 = {279.4137f, -585.8815f, 43.2502f};
			uParam0->f_3 = 48.8028f;
		}
	}
}

// Position - 0x11328
bool func_308(vector3 vParam0, char *sParam3, vector3 vParam4) {
	int iVar0;
	int iVar1;

	if (!interior::_are_coords_colliding_with_exterior(vParam0)) {
		iVar0 = interior::get_interior_at_coords_with_type(vParam4, sParam3);
		if (!interior::is_valid_interior(iVar0)) {
			return false;
		}
		iVar1 = interior::get_interior_from_collision(vParam0);
		if (iVar1 == iVar0) {
			return true;
		}
	}
	return false;
}

// Position - 0x1136C
bool func_309(int iParam0, var *uParam1, float *fParam2) {
	*uParam1 = {0f, 0f, 0f};
	*fParam2 = 0f;
	switch (iParam0) {
	case 0:
		*uParam1 = {-829.842f, -191.7454f, 36.4386f};
		*fParam2 = 29.5061f;
		break;

	case 1:
		*uParam1 = {129.8484f, -1716.528f, 28.0702f};
		*fParam2 = 50.3483f;
		break;

	case 2:
		*uParam1 = {-1296.913f, -1120.999f, 5.3951f};
		*fParam2 = 0.9933f;
		break;

	case 3:
		*uParam1 = {1938.028f, 3718.736f, 31.3154f};
		*fParam2 = 118.2305f;
		break;

	case 4:
		*uParam1 = {1197.866f, -469.3809f, 65.0885f};
		*fParam2 = 346.4477f;
		break;

	case 5:
		*uParam1 = {-32.2161f, -135.8212f, 56.0532f};
		*fParam2 = 186.0052f;
		break;

	case 6:
		*uParam1 = {-287.7696f, 6238.081f, 30.2902f};
		*fParam2 = 316.1349f;
		break;

	case 7:
		*uParam1 = {99.2876f, -1395.16f, 28.2759f};
		*fParam2 = 320.2739f;
		break;

	case 8:
		*uParam1 = {1679.445f, 4819.056f, 41.0035f};
		*fParam2 = 4.6192f;
		break;

	case 9:
		*uParam1 = {411.3063f, -809.1863f, 28.1554f};
		*fParam2 = 1.8972f;
		break;

	case 10:
		*uParam1 = {-1088.054f, 2699.167f, 19.2748f};
		*fParam2 = 129.7382f;
		break;

	case 11:
		*uParam1 = {1194.163f, 2695.644f, 36.9225f};
		*fParam2 = 1.1454f;
		break;

	case 12:
		*uParam1 = {-821.2829f, -1088.027f, 10.0499f};
		*fParam2 = 120.5883f;
		break;

	case 13:
		*uParam1 = {-3.3416f, 6521.303f, 30.2961f};
		*fParam2 = 316.4451f;
		break;

	case 14:
		*uParam1 = {-1208.417f, -785.9635f, 16.0139f};
		*fParam2 = 36.3181f;
		break;

	case 15:
		*uParam1 = {623.1845f, 2739.191f, 40.9588f};
		*fParam2 = 3.5411f;
		break;

	case 16:
		*uParam1 = {130.9555f, -198.2084f, 53.41f};
		*fParam2 = 251.3506f;
		break;

	case 17:
		*uParam1 = {-3164.065f, 1067.317f, 19.6778f};
		*fParam2 = 101.2229f;
		break;

	case 18:
		*uParam1 = {-713.2797f, -174.2767f, 35.8962f};
		*fParam2 = 29.8138f;
		break;

	case 19:
		*uParam1 = {-147.0616f, -306.4322f, 37.7912f};
		*fParam2 = 160.4526f;
		break;

	case 20:
		*uParam1 = {-1461.355f, -230.6092f, 48.3064f};
		*fParam2 = 318.7851f;
		break;

	case 21:
		*uParam1 = {-1347.739f, -1278.573f, 3.8952f};
		*fParam2 = 17.9365f;
		break;

	case 22:
		*uParam1 = {325.6833f, 164.3263f, 102.4425f};
		*fParam2 = 68.6407f;
		break;

	case 23:
		*uParam1 = {1858.774f, 3742.393f, 32.0779f};
		*fParam2 = 301.2329f;
		break;

	case 24:
		*uParam1 = {-286.3272f, 6202.802f, 30.3323f};
		*fParam2 = 225.1334f;
		break;

	case 25:
		*uParam1 = {-1161.596f, -1417.7f, 3.712f};
		*fParam2 = 246.9161f;
		break;

	case 26:
		*uParam1 = {1308.952f, -1660.611f, 50.2362f};
		*fParam2 = 163.5456f;
		break;

	case 27:
		*uParam1 = {-3161.585f, 1074.214f, 19.6847f};
		*fParam2 = 98.6092f;
		break;

	case 28:
		*uParam1 = {28.423f, -1110.814f, 28.2848f};
		*fParam2 = 85.2495f;
		break;

	case 29:
		*uParam1 = {1704.966f, 3749.709f, 33.0188f};
		*fParam2 = 45.6778f;
		break;

	case 30:
		*uParam1 = {223.949f, -38.7894f, 68.6483f};
		*fParam2 = 159.4265f;
		break;

	case 31:
		*uParam1 = {837.7854f, -1017.963f, 26.3045f};
		*fParam2 = 181.0445f;
		break;

	case 32:
		*uParam1 = {-313.1914f, 6093.351f, 30.4625f};
		*fParam2 = 315.8405f;
		break;

	case 33:
		*uParam1 = {-663.4631f, -952.8069f, 20.3143f};
		*fParam2 = 92.6796f;
		break;

	case 34:
		*uParam1 = {-1323.06f, -392.8577f, 35.4596f};
		*fParam2 = 210.7398f;
		break;

	case 35:
		*uParam1 = {-1106.102f, 2684.35f, 18.0953f};
		*fParam2 = 127.0383f;
		break;

	case 36:
		*uParam1 = {-3157.932f, 1081.309f, 19.6953f};
		*fParam2 = 100.2942f;
		break;

	case 37:
		*uParam1 = {2562.882f, 312.8641f, 107.4612f};
		*fParam2 = 179.205f;
		break;

	case 38:
		*uParam1 = {822.48f, -2142.875f, 27.8496f};
		*fParam2 = 355.0598f;
		break;

	case 39:
		*uParam1 = {-1137.053f, -1993.916f, 12.1677f};
		*fParam2 = 43.1213f;
		break;

	case 40:
		*uParam1 = {717.8107f, -1084.081f, 21.3094f};
		*fParam2 = 93.2649f;
		break;

	case 41:
		*uParam1 = {-387.6789f, -128.2568f, 37.6796f};
		*fParam2 = 119.1085f;
		break;

	case 42:
		*uParam1 = {117.8835f, 6599.415f, 31.0134f};
		*fParam2 = 90.7225f;
		break;

	case 43:
		*uParam1 = {1201.709f, 2664.813f, 36.8102f};
		*fParam2 = 133.9002f;
		break;

	case 44:
		*uParam1 = {-200.1521f, -1297.502f, 30.296f};
		*fParam2 = 269.0687f;
		break;

	case 45:
		*uParam1 = {0f, 0f, 0f};
		*fParam2 = 0f;
		break;
	}
	return !func_44(*uParam1, 0f, 0f, 0f, 0);
}

// Position - 0x119FB
bool func_310(int *iParam0) {
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
		if (func_321()) {
			*iParam0 = func_316(entity::get_entity_coords(player::player_ped_id(), 0), 6, -1, 0, 1, -1);
			if (func_315(*iParam0) && !func_311(*iParam0)) {
				return true;
			}
		}
	}
	return false;
}

// Position - 0x11A56
int func_311(int iParam0) { return func_312(iParam0, 0, 1); }

// Position - 0x11A66
int func_312(int iParam0, int iParam1, int iParam2) {
	if (iParam2) {
		return gameplay::is_bit_set(Global_91543.f_1308[iParam0], iParam1);
	}
	else if (network::network_is_game_in_progress()) {
		if (func_314() == 0) {
			return gameplay::is_bit_set(func_293(func_313(iParam0), -1, 0), iParam1);
		}
	}
	else {
		return gameplay::is_bit_set(Global_101700.f_668[iParam0], iParam1);
	}
	return 0;
}

// Position - 0x11AC6
int func_313(int iParam0) {
	switch (iParam0) {
	case 0: return 822;

	case 1: return 823;

	case 2: return 824;

	case 3: return 825;

	case 4: return 826;

	case 5: return 827;

	case 6: return 828;

	case 7: return 829;

	case 8: return 830;

	case 9: return 831;

	case 10: return 832;

	case 11: return 833;

	case 12: return 834;

	case 13: return 835;

	case 14: return 836;

	case 15: return 838;

	case 16: return 839;

	case 17: return 840;

	case 18: return 841;

	case 19: return 842;

	case 20: return 843;

	case 21: return 844;

	case 22: return 845;

	case 23: return 846;

	case 24: return 847;

	case 25: return 848;

	case 26: return 849;

	case 27: return 850;

	case 28: return 851;

	case 29: return 852;

	case 30: return 853;

	case 31: return 854;

	case 32: return 855;

	case 33: return 856;

	case 34: return 857;

	case 35: return 858;

	case 36: return 859;

	case 37: return 860;

	case 38: return 861;

	case 39: return 862;

	case 40: return 866;

	case 41: return 867;

	case 42: return 868;

	case 43: return 869;

	case 44: return 5847;

	case 45: return 3780;

	default: break;
	}
	return 6022;
}

// Position - 0x11D8D
int func_314() { return Global_25190; }

// Position - 0x11D98
int func_315(int iParam0) { return func_312(iParam0, 5, 1); }

// Position - 0x11DA8
int func_316(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7) {
	int iVar0;
	float fVar1;
	float fVar2;
	int iVar3;

	fVar2 = 1000000f;
	iVar3 = -1;
	iVar0 = 0;
	while (iVar0 <= 45) {
		if (iParam3 == 6 || iParam3 == func_320(iVar0)) {
			if (!iParam5 || func_319(iVar0)) {
				fVar1 = gameplay::get_distance_between_coords(vParam0, func_317(iVar0, 0), 1);
				if (fVar1 < fVar2 && (fVar1 <= IntToFloat(iParam4) || iParam4 == -1) && (iParam6 || iVar0 != 21) &&
					iVar0 != iParam7) {
					fVar2 = fVar1;
					iVar3 = iVar0;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

// Position - 0x11E4A
Vector3 func_317(int iParam0, int iParam1) {
	switch (iParam0) {
	case -1: return 0f, 0f, 0f;

	case 0: return -821.9946f, -187.1776f, 36.5689f;

	case 1: return 133.5702f, -1710.918f, 28.2916f;

	case 2: return -1287.082f, -1116.558f, 5.9901f;

	case 3: return 1933.119f, 3726.079f, 31.8444f;

	case 4: return 1208.333f, -470.917f, 65.208f;

	case 5: return -30.7448f, -148.4921f, 56.0765f;

	case 6: return -280.8165f, 6231.771f, 30.6955f;

	case 7: return 80.665f, -1391.669f, 28.3761f;

	case 8: return 1687.881f, 4820.55f, 41.0096f;

	case 9: return 419.531f, -807.5787f, 28.4896f;

	case 10: return -1094.049f, 2704.171f, 18.0873f;

	case 11: return 1197.972f, 2704.22f, 37.1572f;

	case 12: return -818.6218f, -1077.533f, 10.3282f;

	case 13: return -0.2361f, 6516.045f, 30.8684f;

	case 14: return -1199.809f, -776.6886f, 16.3237f;

	case 15: return 618.1857f, 2752.567f, 41.0881f;

	case 16: return 126.6853f, -212.5027f, 53.5578f;

	case 17: return -3168.966f, 1055.287f, 19.8632f;

	case 18: return -715.3598f, -155.7742f, 36.4105f;

	case 19: return -158.2199f, -304.9663f, 38.735f;

	case 20: return -1455.005f, -233.1862f, 48.7936f;

	case 21: return -1335.973f, -1278.555f, 3.8598f;

	case 22: return 321.6098f, 179.4165f, 102.5865f;

	case 23: return 1861.685f, 3750.08f, 32.0318f;

	case 24: return -290.1603f, 6199.095f, 30.4871f;

	case 25: return -1153.948f, -1425.019f, 3.9544f;

	case 26: return 1322.455f, -1651.125f, 51.1885f;

	case 27: return -3169.42f, 1074.727f, 19.8343f;

	case 28: return 17.6804f, -1114.288f, 28.797f;

	case 29: return 1697.979f, 3753.2f, 33.7053f;

	case 30: return 245.2711f, -45.8126f, 68.941f;

	case 31: return 844.1248f, -1025.571f, 27.1948f;

	case 32: return -325.8904f, 6077.026f, 30.4548f;

	case 33: return -664.2178f, -943.3646f, 20.8292f;

	case 34: return -1313.948f, -390.9637f, 35.592f;

	case 35: return -1111.238f, 2688.463f, 17.6131f;

	case 36: return -3165.231f, 1082.855f, 19.8438f;

	case 37: return 2569.612f, 302.576f, 107.7349f;

	case 38: return 811.8699f, -2149.102f, 28.6363f;

	case 39: return -1147.314f, -1992.434f, 12.1803f;

	case 40: return 724.524f, -1089.081f, 21.1692f;

	case 41: return -354.5272f, -135.4011f, 38.185f;

	case 42: return 113.2615f, 6624.28f, 30.7871f;

	case 43: return 1174.707f, 2644.45f, 36.7552f;

	case 44:
		if (iParam1) {
			return -211.5f, -1324.2f, 30.296f;
		}
		else {
			return -205.6654f, -1311.113f, 30.296f;
		}
		break;

	case 45: return func_318(Global_93004);
	}
	return 1000000f, 1000000f, 1000000f;
}

// Position - 0x12364
Vector3 func_318(int iParam0) {
	switch (iParam0) {
	case 1: return 1060f, -2990f, -35f;

	case 2: return 1060f, -2990f, -35f;

	case 3: return 974.9542f, -3000.091f, -35f;

	case 6: return -1586.36f, -566.6f, 106.17f;

	case 7: return -1389.87f, -465.17f, 82.68f;

	case 8: return -145.81f, -590.2f, 171.13f;

	case 9: return -62.49f, -823.55f, 288.74f;

	case 4: return 1102.515f, -3158.888f, -38.5186f;

	case 5: return 1005.861f, -3156.162f, -39.907f;

	default: return 0f, 0f, -200f;
	}
	return 0f, 0f, -200f;
}

// Position - 0x1247A
int func_319(int iParam0) { return func_312(iParam0, 0, 0); }

// Position - 0x1248A
int func_320(int iParam0) {
	switch (iParam0) {
	case -1: return 6;

	case 0: return 0;

	case 1: return 0;

	case 2: return 0;

	case 3: return 0;

	case 4: return 0;

	case 5: return 0;

	case 6: return 0;

	case 7: return 1;

	case 8: return 1;

	case 9: return 1;

	case 10: return 1;

	case 11: return 1;

	case 12: return 1;

	case 13: return 1;

	case 14: return 1;

	case 15: return 1;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 2;

	case 23: return 2;

	case 24: return 2;

	case 25: return 2;

	case 26: return 2;

	case 27: return 2;

	case 28: return 3;

	case 29: return 3;

	case 30: return 3;

	case 31: return 3;

	case 32: return 3;

	case 33: return 3;

	case 34: return 3;

	case 35: return 3;

	case 36: return 3;

	case 37: return 3;

	case 38: return 3;

	case 39: return 4;

	case 40: return 4;

	case 41: return 4;

	case 42: return 4;

	case 43: return 4;

	case 44: return 4;

	case 45: return 5;
	}
	return 6;
}

// Position - 0x126FD
bool func_321() { return Global_91543.f_303 > 0; }

// Position - 0x1270E
var func_322() {
	int *iVar0;

	func_332(&iVar0, time::get_clock_seconds());
	func_331(&iVar0, time::get_clock_minutes());
	func_330(&iVar0, time::get_clock_hours());
	func_325(&iVar0, time::get_clock_day_of_month());
	func_324(&iVar0, time::get_clock_month());
	func_323(&iVar0, time::get_clock_year());
	return iVar0;
}

// Position - 0x12754
void func_323(int *iParam0, int iParam1) {
	if (iParam1 <= 0) {
		return;
	}
	if (iParam1 > 2043 || iParam1 < 1979) {
		return;
	}
	*iParam0 -= (*iParam0 & 2080374784);
	if (iParam1 < 2011) {
		*iParam0 |= system::shift_left(2011 - iParam1, 26);
		*iParam0 |= -2147483648;
	}
	else {
		*iParam0 |= system::shift_left(iParam1 - 2011, 26);
		*iParam0 -= (*iParam0 & -2147483648);
	}
}

// Position - 0x127DA
void func_324(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 11) {
		return;
	}
	*uParam0 -= (*uParam0 & 15);
	*uParam0 |= iParam1;
}

// Position - 0x1280D
void func_325(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = func_329(*uParam0);
	iVar1 = func_327(*uParam0);
	if (iParam1 < 1 || iParam1 > func_326(iVar0, iVar1)) {
		return;
	}
	*uParam0 -= (*uParam0 & 496);
	*uParam0 |= system::shift_left(iParam1, 4);
}

// Position - 0x1285E
int func_326(int iParam0, int iParam1) {
	if (iParam1 < 0) {
		iParam1 = 0;
	}
	switch (iParam0) {
	case 0:
	case 2:
	case 4:
	case 6:
	case 7:
	case 9:
	case 11: return 31;

	case 3:
	case 5:
	case 8:
	case 10: return 30;

	case 1:
		if (iParam1 % 4 == 0) {
			if (iParam1 % 100 != 0) {
				return 29;
			}
			else if (iParam1 % 400 == 0) {
				return 29;
			}
		}
		return 28;
	}
	return 30;
}

// Position - 0x12900
var func_327(int iParam0) {
	return (system::shift_right(iParam0, 26) & 31) * func_328(gameplay::is_bit_set(iParam0, 31), -1, 1) + 2011;
}

// Position - 0x12925
int func_328(bool bParam0, int iParam1, int iParam2) {
	if (bParam0) {
		return iParam1;
	}
	return iParam2;
}

// Position - 0x1293C
int func_329(var uParam0) { return uParam0 & 15; }

// Position - 0x12949
void func_330(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 > 24) {
		return;
	}
	*uParam0 -= (*uParam0 & 15872);
	*uParam0 |= system::shift_left(iParam1, 9);
}

// Position - 0x12983
void func_331(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 1032192);
	*uParam0 |= system::shift_left(iParam1, 14);
}

// Position - 0x129BE
void func_332(var *uParam0, int iParam1) {
	if (iParam1 < 0 || iParam1 >= 60) {
		return;
	}
	*uParam0 -= (*uParam0 & 66060288);
	*uParam0 |= system::shift_left(iParam1, 20);
}

// Position - 0x129FA
int func_333(char *sParam0) {
	if (gameplay::are_strings_equal("BailBond1", sParam0)) {
		return 0;
	}
	else if (gameplay::are_strings_equal("BailBond2", sParam0)) {
		return 1;
	}
	else if (gameplay::are_strings_equal("BailBond3", sParam0)) {
		return 2;
	}
	else if (gameplay::are_strings_equal("BailBond4", sParam0)) {
		return 3;
	}
	return -1;
}

// Position - 0x12A50
struct<2> func_334(int iParam0) {
	struct<2> Var0;

	StringCopy(&Var0, "", 8);
	switch (iParam0) {
	case 0: StringCopy(&Var0, "ABI1", 8); break;

	case 1: StringCopy(&Var0, "ABI2", 8); break;

	case 2: StringCopy(&Var0, "BA1", 8); break;

	case 3: StringCopy(&Var0, "BA2", 8); break;

	case 4: StringCopy(&Var0, "BA3", 8); break;

	case 5: StringCopy(&Var0, "BA3A", 8); break;

	case 6: StringCopy(&Var0, "BA3C", 8); break;

	case 7: StringCopy(&Var0, "BA4", 8); break;

	case 8: StringCopy(&Var0, "DRE1", 8); break;

	case 9: StringCopy(&Var0, "EPS1", 8); break;

	case 10: StringCopy(&Var0, "EPS2", 8); break;

	case 11: StringCopy(&Var0, "EPS3", 8); break;

	case 12: StringCopy(&Var0, "EPS4", 8); break;

	case 13: StringCopy(&Var0, "EPS5", 8); break;

	case 14: StringCopy(&Var0, "EPS6", 8); break;

	case 15: StringCopy(&Var0, "EPS7", 8); break;

	case 16: StringCopy(&Var0, "EPS8", 8); break;

	case 17: StringCopy(&Var0, "EXT1", 8); break;

	case 18: StringCopy(&Var0, "EXT2", 8); break;

	case 19: StringCopy(&Var0, "EXT3", 8); break;

	case 20: StringCopy(&Var0, "EXT4", 8); break;

	case 21: StringCopy(&Var0, "FAN1", 8); break;

	case 22: StringCopy(&Var0, "FAN2", 8); break;

	case 23: StringCopy(&Var0, "FAN3", 8); break;

	case 24: StringCopy(&Var0, "HAO1", 8); break;

	case 25: StringCopy(&Var0, "HUN1", 8); break;

	case 26: StringCopy(&Var0, "HUN2", 8); break;

	case 27: StringCopy(&Var0, "JOS1", 8); break;

	case 28: StringCopy(&Var0, "JOS2", 8); break;

	case 29: StringCopy(&Var0, "JOS3", 8); break;

	case 30: StringCopy(&Var0, "JOS4", 8); break;

	case 31: StringCopy(&Var0, "MAU1", 8); break;

	case 32: StringCopy(&Var0, "MIN1", 8); break;

	case 33: StringCopy(&Var0, "MIN2", 8); break;

	case 34: StringCopy(&Var0, "MIN3", 8); break;

	case 35: StringCopy(&Var0, "MRS1", 8); break;

	case 36: StringCopy(&Var0, "MRS2", 8); break;

	case 37: StringCopy(&Var0, "NI1", 8); break;

	case 38: StringCopy(&Var0, "NI1A", 8); break;

	case 39: StringCopy(&Var0, "NI1B", 8); break;

	case 40: StringCopy(&Var0, "NI1C", 8); break;

	case 41: StringCopy(&Var0, "NI1D", 8); break;

	case 42: StringCopy(&Var0, "NI2", 8); break;

	case 43: StringCopy(&Var0, "NI3", 8); break;

	case 44: StringCopy(&Var0, "OME1", 8); break;

	case 45: StringCopy(&Var0, "OME2", 8); break;

	case 46: StringCopy(&Var0, "PA1", 8); break;

	case 47: StringCopy(&Var0, "PA2", 8); break;

	case 48: StringCopy(&Var0, "PA3", 8); break;

	case 49: StringCopy(&Var0, "PA3A", 8); break;

	case 50: StringCopy(&Var0, "PA3B", 8); break;

	case 51: StringCopy(&Var0, "PA4", 8); break;

	case 52: StringCopy(&Var0, "RAM1", 8); break;

	case 53: StringCopy(&Var0, "RAM2", 8); break;

	case 54: StringCopy(&Var0, "RAM3", 8); break;

	case 55: StringCopy(&Var0, "RAM4", 8); break;

	case 56: StringCopy(&Var0, "RAM5", 8); break;

	case 57: StringCopy(&Var0, "SAS1", 8); break;

	case 58: StringCopy(&Var0, "TON1", 8); break;

	case 59: StringCopy(&Var0, "TON2", 8); break;

	case 60: StringCopy(&Var0, "TON3", 8); break;

	case 61: StringCopy(&Var0, "TON4", 8); break;

	case 62: StringCopy(&Var0, "TON5", 8); break;

	default: break;
	}
	return Var0;
}

//Position - 0x12E9C
int func_335(char* sParam0, int iParam1)
{
	int iVar0;
	char *sVar1;
	int iVar33;
	int iVar34;

	iVar33 = gameplay::get_hash_key(sParam0);
	iVar34 = 0;
	iVar34 = 0;
	while (iVar34 < 63) {
		iVar0 = iVar34;
		func_336(iVar0, &sVar1);
		if (gameplay::get_hash_key(sVar1) == iVar33) {
			return iVar0;
		}
		iVar34++;
	}
	if (iParam1 == 0) {
	}
	return -1;
}

// Position - 0x12EE5
void func_336(int iParam0, var *uParam1) {
	switch (iParam0) {
	case 0:
		func_337(uParam1, "Abigail1", func_339(iParam0), 0, 0, 4, -1604.668f, 5239.1f, 3.01f, 66, "", 109, 0,
				 "ambient_Diving", 0, 0, 1, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 1:
		func_337(uParam1, "Abigail2", func_339(iParam0), 0, 0, 4, -1592.84f, 5214.04f, 3.01f, 400, "", 110, 0, "", 0, 0,
				 -1, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 2:
		func_337(uParam1, "Barry1", func_339(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", 74, 0, "", 0, 1, -1,
				 4, 1, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 3:
		func_337(uParam1, "Barry2", func_339(iParam0), 0, 1, 4, 190.26f, -956.35f, 29.63f, 381, "", -1, 0, "", 0, 1, -1,
				 4, 4, 0, 2359, func_338(iParam0), 1, 1);
		break;

	case 4:
		func_337(uParam1, "Barry3", func_339(iParam0), 0, 1, 4, 414f, -761f, 29f, 381, "", -1, 0, "", 164, 1, -1, 0, 2,
				 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 5:
		func_337(uParam1, "Barry3A", func_339(iParam0), 1, 1, 0, 1199.27f, -1255.63f, 34.23f, 381, "BARSTASH", 84, 0,
				 "", 166, 0, 7, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 6:
		func_337(uParam1, "Barry3C", func_339(iParam0), 3, 1, 0, -468.9f, -1713.06f, 18.21f, 381, "", 84, 0, "", 166, 0,
				 7, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 7:
		func_337(uParam1, "Barry4", func_339(iParam0), 0, 1, 4, 237.65f, -385.41f, 44.4f, 381, "", 85, 0,
				 "postRC_Barry4", 0, 0, -1, 4, 2, 800, 2000, func_338(iParam0), 0, 0);
		break;

	case 8:
		func_337(uParam1, "Dreyfuss1", func_339(iParam0), 0, 2, 4, -1458.97f, 485.99f, 115.38f, 66, "LETTERS_HINT", 106,
				 0, "", 0, 0, -1, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 9:
		func_337(uParam1, "Epsilon1", func_339(iParam0), 0, 3, 4, -1622.89f, 4204.87f, 83.3f, 66, "", 86, 0, "", 0, 1,
				 10, 4, 1, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 10:
		func_337(uParam1, "Epsilon2", func_339(iParam0), 0, 3, 4, 242.7f, 362.7f, 104.74f, 206, "", 87, 16, "", 0, 0,
				 11, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 11:
		func_337(uParam1, "Epsilon3", func_339(iParam0), 0, 3, 4, 1835.53f, 4705.86f, 38.1f, 206, "", 88, 16, "epsCars",
				 0, 0, 12, 4, 1, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 12:
		func_337(uParam1, "Epsilon4", func_339(iParam0), 0, 3, 4, 1826.13f, 4698.88f, 38.92f, 206, "", 90, 16,
				 "postRC_Epsilon4", 0, 0, 13, 4, 1, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 13:
		func_337(uParam1, "Epsilon5", func_339(iParam0), 0, 3, 4, 637.02f, 119.7093f, 89.5f, 206, "", 89, 16,
				 "epsRobes", 0, 0, 14, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 14:
		func_337(uParam1, "Epsilon6", func_339(iParam0), 0, 3, 4, -2892.93f, 3192.37f, 11.66f, 206, "", 93, 0, "", 0, 0,
				 15, 4, 1, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 15:
		func_337(uParam1, "Epsilon7", func_339(iParam0), 0, 3, 4, 524.43f, 3079.82f, 39.48f, 206, "", -1, 16,
				 "epsDesert", 0, 0, 16, 4, 1, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 16:
		func_337(uParam1, "Epsilon8", func_339(iParam0), 0, 3, 4, -697.75f, 45.38f, 43.03f, 206, "", 94, 16,
				 "epsilonTract", 0, 0, -1, 4, 1, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 17:
		func_337(uParam1, "Extreme1", func_339(iParam0), 0, 4, 4, -188.22f, 1296.1f, 302.86f, 66, "", -1, 0, "", 4, 1,
				 18, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 18:
		func_337(uParam1, "Extreme2", func_339(iParam0), 0, 4, 4, -954.19f, -2760.05f, 14.64f, 382, "", 96, 0, "", 171,
				 0, 19, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 19:
		func_337(uParam1, "Extreme3", func_339(iParam0), 0, 4, 4, -63.8f, -809.5f, 321.8f, 382, "", 97, 0, "", 0, 0, 20,
				 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 20:
		func_337(uParam1, "Extreme4", func_339(iParam0), 0, 4, 4, 1731.41f, 96.96f, 170.39f, 382, "", 98, 16, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 21:
		func_337(uParam1, "Fanatic1", func_339(iParam0), 0, 5, 4, -1877.82f, -440.649f, 45.05f, 405, "", 74, 0, "", 0,
				 1, -1, 4, 1, 700, 2000, func_338(iParam0), 1, 0);
		break;

	case 22:
		func_337(uParam1, "Fanatic2", func_339(iParam0), 0, 5, 4, 809.66f, 1279.76f, 360.49f, 405, "", -1, 0, "", 0, 1,
				 -1, 4, 4, 700, 2000, func_338(iParam0), 1, 0);
		break;

	case 23:
		func_337(uParam1, "Fanatic3", func_339(iParam0), 0, 5, 4, -915.6f, 6139.2f, 5.5f, 405, "", -1, 0, "", 0, 1, -1,
				 4, 2, 700, 2000, func_338(iParam0), 0, 1);
		break;

	case 24:
		func_337(uParam1, "Hao1", func_339(iParam0), 0, 6, 4, -72.29f, -1260.63f, 28.14f, 66, "", -1, 0,
				 "controller_Races", 13, 1, -1, 4, 2, 2000, 500, func_338(iParam0), 0, 1);
		break;

	case 25:
		func_337(uParam1, "Hunting1", func_339(iParam0), 0, 7, 4, 1804.32f, 3931.33f, 32.82f, 66, "", -1, 0, "", 174, 1,
				 26, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 26:
		func_337(uParam1, "Hunting2", func_339(iParam0), 0, 7, 4, -684.17f, 5839.16f, 16.09f, 384, "", 99, 0, "", 7, 0,
				 -1, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 27:
		func_337(uParam1, "Josh1", func_339(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 66, "", -1, 0, "forSaleSigns",
				 0, 1, 28, 4, 4, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 28:
		func_337(uParam1, "Josh2", func_339(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", 105, 0, "", 0, 0,
				 29, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
		break;

	case 29:
		func_337(uParam1, "Josh3", func_339(iParam0), 0, 8, 4, 565.39f, -1772.88f, 29.77f, 385, "", -1, 16, "", 0, 0,
				 30, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
		break;

	case 30:
		func_337(uParam1, "Josh4", func_339(iParam0), 0, 8, 4, -1104.93f, 291.25f, 64.3f, 385, "", -1, 36, "", 0, 0, -1,
				 4, 4, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 31:
		func_337(uParam1, "Maude1", func_339(iParam0), 0, 9, 4, 2726.1f, 4145f, 44.3f, 66, "", -1, 0,
				 "BailBond_Launcher", 0, 1, -1, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 32:
		func_337(uParam1, "Minute1", func_339(iParam0), 0, 10, 4, 327.85f, 3405.7f, 35.73f, 66, "", -1, 0, "", 0, 1, 33,
				 4, 4, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 33:
		func_337(uParam1, "Minute2", func_339(iParam0), 0, 10, 4, 18f, 4527f, 105f, 386, "", -1, 10, "", 0, 0, 34, 4, 4,
				 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 34:
		func_337(uParam1, "Minute3", func_339(iParam0), 0, 10, 4, -303.82f, 6211.29f, 31.05f, 386, "", -1, 10, "", 0, 0,
				 -1, 4, 4, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 35:
		func_337(uParam1, "MrsPhilips1", func_339(iParam0), 0, 11, 4, 1972.59f, 3816.43f, 32.42f, 66, "", -1, 0,
				 "ambient_MrsPhilips", 0, 1, -1, 4, 4, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 36:
		func_337(uParam1, "MrsPhilips2", func_339(iParam0), 0, 11, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 1, -1, 4, 4, 0,
				 2359, func_338(iParam0), 0, 0);
		break;

	case 37:
		func_337(uParam1, "Nigel1", func_339(iParam0), 0, 12, 4, -1097.16f, 790.01f, 164.52f, 66, "", -1, 0, "", 177, 1,
				 -1, 1, 4, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 38:
		func_337(uParam1, "Nigel1A", func_339(iParam0), 0, 12, 1, -558.65f, 284.49f, 90.86f, 149, "NIGITEMS", 100, 0,
				 "", 0, 0, 42, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
		break;

	case 39:
		func_337(uParam1, "Nigel1B", func_339(iParam0), 0, 12, 1, -1034.15f, 366.08f, 80.11f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_338(iParam0), 1, 1);
		break;

	case 40:
		func_337(uParam1, "Nigel1C", func_339(iParam0), 0, 12, 1, -623.91f, -266.17f, 37.76f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_338(iParam0), 1, 1);
		break;

	case 41:
		func_337(uParam1, "Nigel1D", func_339(iParam0), 0, 12, 1, -1096.85f, 67.68f, 52.95f, 149, "", 100, 0, "", 0, 0,
				 42, 4, 4, 700, 2000, func_338(iParam0), 1, 1);
		break;

	case 42:
		func_337(uParam1, "Nigel2", func_339(iParam0), 0, 12, 4, -1310.7f, -640.22f, 26.54f, 149, "", -1, 8, "", 0, 0,
				 43, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
		break;

	case 43:
		func_337(uParam1, "Nigel3", func_339(iParam0), 0, 12, 4, -44.75f, -1288.67f, 28.21f, 149, "", -1, 16,
				 "postRC_Nigel3", 0, 0, -1, 4, 4, 0, 2359, func_338(iParam0), 1, 1);
		break;

	case 44:
		func_337(uParam1, "Omega1", func_339(iParam0), 0, 13, 4, 2468.51f, 3437.39f, 49.9f, 66, "", -1, 0,
				 "spaceshipParts", 0, 1, 45, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 45:
		func_337(uParam1, "Omega2", func_339(iParam0), 0, 13, 4, 2319.44f, 2583.58f, 46.76f, 387, "", 107, 0, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 46:
		func_337(uParam1, "Paparazzo1", func_339(iParam0), 0, 14, 4, -149.75f, 285.81f, 93.67f, 66, "", -1, 0, "", 0, 1,
				 47, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 47:
		func_337(uParam1, "Paparazzo2", func_339(iParam0), 0, 14, 4, -70.71f, 301.43f, 106.79f, 389, "", -1, 8, "", 0,
				 0, 48, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 48:
		func_337(uParam1, "Paparazzo3", func_339(iParam0), 0, 14, 4, -257.22f, 292.85f, 90.63f, 389, "", -1, 8, "", 183,
				 1, -1, 2, 2, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 49:
		func_337(uParam1, "Paparazzo3A", func_339(iParam0), 0, 14, 2, 305.52f, 157.19f, 102.94f, 389, "PAPPHOTO", 102,
				 0, "", 0, 0, 51, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 50:
		func_337(uParam1, "Paparazzo3B", func_339(iParam0), 0, 14, 2, 1040.96f, -534.42f, 60.17f, 389, "", 102, 0, "",
				 0, 0, 51, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 51:
		func_337(uParam1, "Paparazzo4", func_339(iParam0), 0, 14, 4, -484.2f, 229.68f, 82.21f, 389, "", -1, 8, "", 0, 1,
				 -1, 4, 2, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 52:
		func_337(uParam1, "Rampage1", func_339(iParam0), 0, 15, 4, 908f, 3643.7f, 32.2f, 66, "", -1, 0, "", 0, 1, 54, 4,
				 4, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 54:
		func_337(uParam1, "Rampage3", func_339(iParam0), 0, 15, 4, 465.1f, -1849.3f, 27.8f, 84, "", -1, 0, "", 0, 1, 55,
				 4, 4, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 55:
		func_337(uParam1, "Rampage4", func_339(iParam0), 0, 15, 4, -161f, -1669.7f, 33f, 84, "", -1, 0, "", 0, 0, 56, 4,
				 4, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 56:
		func_337(uParam1, "Rampage5", func_339(iParam0), 0, 15, 4, -1298.2f, 2504.14f, 21.09f, 84, "", -1, 0, "", 0, 0,
				 53, 4, 4, 0, 2359, func_338(iParam0), 0, 0);
		break;

	case 53:
		func_337(uParam1, "Rampage2", func_339(iParam0), 0, 15, 4, 1181.5f, -400.1f, 67.5f, 84, "", -1, 0,
				 "rampage_controller", 0, 0, -1, 4, 4, 0, 2359, func_338(iParam0), 1, 0);
		break;

	case 57:
		func_337(uParam1, "TheLastOne", func_339(iParam0), 0, 16, 4, -1298.98f, 4640.16f, 105.67f, 66, "", 133, 1, "",
				 0, 1, -1, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 58:
		func_337(uParam1, "Tonya1", func_339(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 66, "AM_H_RCFS", -1, 0,
				 "ambient_TonyaCall", 24, 1, 59, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 59:
		func_337(uParam1, "Tonya2", func_339(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48,
				 "ambient_Tonya", 185, 0, 60, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	case 60:
		func_337(uParam1, "Tonya3", func_339(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 187, 0, 61, 4, 2, 0,
				 2359, func_338(iParam0), 0, 1);
		break;

	case 61:
		func_337(uParam1, "Tonya4", func_339(iParam0), 0, 17, 4, 0f, 0f, 0f, -1, "", -1, 0, "", 0, 0, 62, 4, 2, 0, 2359,
				 func_338(iParam0), 0, 1);
		break;

	case 62:
		func_337(uParam1, "Tonya5", func_339(iParam0), 0, 17, 4, -14.39f, -1472.69f, 29.58f, 388, "", -1, 48, "", 0, 0,
				 -1, 4, 2, 0, 2359, func_338(iParam0), 0, 1);
		break;

	default: break;
	}
}

// Position - 0x1409B
void func_337(var *uParam0, char *sParam1, struct<2> Param2, int iParam4, int iParam5, int iParam6, vector3 vParam7,
			  int iParam10, char *sParam11, int iParam12, int iParam13, char *sParam14, int iParam15, int iParam16,
			  int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, int iParam22, int iParam23,
			  int iParam24) {
	uParam0->f_4 = iParam5;
	*uParam0 = sParam1;
	uParam0->f_1 = {Param2};
	uParam0->f_3 = iParam4;
	uParam0->f_5 = iParam6;
	uParam0->f_6 = {vParam7};
	uParam0->f_9 = iParam10;
	StringCopy(&uParam0->f_10, sParam11, 16);
	uParam0->f_14 = iParam12;
	uParam0->f_15 = iParam13;
	StringCopy(&uParam0->f_16, sParam14, 24);
	uParam0->f_22 = iParam15;
	uParam0->f_23 = iParam16;
	uParam0->f_24 = iParam17;
	uParam0->f_25 = iParam18;
	uParam0->f_26 = iParam19;
	uParam0->f_27 = iParam20;
	uParam0->f_28 = iParam21;
	uParam0->f_29 = iParam22;
	uParam0->f_30 = iParam23;
	uParam0->f_31 = iParam24;
}

// Position - 0x1412C
int func_338(int iParam0) {
	switch (iParam0) {
	case 0: return 0;

	case 1: return 0;

	case 2: return 1;

	case 3: return 1;

	case 4: return 0;

	case 5: return 1;

	case 6: return 1;

	case 7: return 0;

	case 8: return 1;

	case 9: return 0;

	case 10: return 0;

	case 11: return 0;

	case 12: return 1;

	case 13: return 0;

	case 14: return 1;

	case 15: return 0;

	case 16: return 1;

	case 17: return 1;

	case 18: return 1;

	case 19: return 1;

	case 20: return 1;

	case 21: return 1;

	case 22: return 1;

	case 23: return 1;

	case 24: return 1;

	case 25: return 1;

	case 26: return 1;

	case 27: return 0;

	case 28: return 1;

	case 29: return 1;

	case 30: return 1;

	case 31: return 0;

	case 32: return 1;

	case 33: return 1;

	case 34: return 1;

	case 35: return 0;

	case 36: return 0;

	case 37: return 0;

	case 38: return 1;

	case 39: return 1;

	case 40: return 1;

	case 41: return 1;

	case 42: return 1;

	case 43: return 1;

	case 44: return 0;

	case 45: return 0;

	case 46: return 1;

	case 47: return 1;

	case 48: return 0;

	case 49: return 1;

	case 50: return 1;

	case 51: return 1;

	case 52: return 1;

	case 54: return 1;

	case 55: return 1;

	case 56: return 1;

	case 53: return 1;

	case 57: return 1;

	case 58: return 1;

	case 59: return 1;

	case 60: return 1;

	case 61: return 1;

	case 62: return 1;

	default: break;
	}
	return 0;
}

// Position - 0x14472
struct<2> func_339(int iParam0) {
	struct<2> Var0;
	char[] cVar2[8];

	StringCopy(&Var0, "", 8);
	cVar2 = {func_334(iParam0)};
	if (gameplay::is_string_null_or_empty(&cVar2)) {
	}
	else {
		StringCopy(&Var0, "RC_", 8);
		StringConCat(&Var0, &cVar2, 8);
	}
	return Var0;
}

//Position - 0x144A9
int func_340(int iParam0)
{
	switch (iParam0) {
	case 69:
	case 70: return func_341(Global_101700.f_8044.f_99.f_205[10]);

	case 74:
	case 75: return func_341(Global_101700.f_8044.f_99.f_205[8]);

	case 84:
	case 85: return func_341(Global_101700.f_8044.f_99.f_205[11]);

	case 90: return func_341(Global_101700.f_8044.f_99.f_205[7]);

	case 93: return func_341(Global_101700.f_8044.f_99.f_205[9]);
	}
	return 0;
}

// Position - 0x14565
int func_341(int iParam0) {
	switch (iParam0) {
	case 1:
	case 3:
	case 5:
	case 6:
	case 8: return 0;

	case 2:
	case 4:
	case 7:
	case 9: return 1;
	}
	return -1;
}

// Position - 0x145B9
int func_342(char *sParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar0 = gameplay::get_hash_key(sParam0);
	iVar1 = func_343(iVar0, 1);
	if (iVar1 == -1 && !iParam1) {
	}
	return iVar1;
}

// Position - 0x145E3
int func_343(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 94) {
		if (Global_82612[iVar0 /*34*/].f_6 == iParam0) {
			return iVar0;
		}
		iVar0++;
	}
	if (!iParam1) {
	}
	return -1;
}

// Position - 0x14619
void func_344() {
	int iVar0;

	if (!ped::is_ped_injured(player::player_ped_id())) {
		if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
			iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		}
		if (entity::does_entity_exist(iVar0)) {
			if (entity::is_entity_in_angled_area(iVar0, -1214.517f, -158.91f, -39.165f, -1243.589f, -238.784f, 39.165f,
												 15f, 0, 0, 0) &&
				!ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
				if (entity::get_entity_speed(iVar0) <= 0.5f) {
					if (!func_52(&uLocal_1344)) {
						func_49(&uLocal_1344);
					}
				}
				else if (func_52(&uLocal_1344)) {
					func_50(&uLocal_1344);
				}
				if (func_52(&uLocal_1344)) {
					if (func_46(&uLocal_1344) > 10f) {
						func_31(2);
					}
				}
			}
			else if (func_52(&uLocal_1344)) {
				func_50(&uLocal_1344);
			}
		}
	}
}

// Position - 0x146F5
void func_345() {
	switch (iLocal_1192) {
	case 0:
		if (func_376(1084227584, 1) || bLocal_1150 && streaming::_0x7D41E9D2D17C5B2D(iLocal_1129)) {
			func_375(-1248.398f, -183.366f, 37.72881f, -1216.437f, -196.8727f, 44.07541f, 59.25f, vLocal_1664,
					 fLocal_1667, 1, 1, 1, 0, 0);
			gameplay::clear_area_of_vehicles(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
			gameplay::clear_area_of_projectiles(-1220.57f, -185.96f, 38.4f, 50f, 0);
			func_374();
			func_373();
			if (!entity::is_entity_dead(iLocal_1311, 0)) {
				if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
					vehicle::start_playback_recorded_vehicle(iLocal_1311, 107, "ASSOJva", 1);
					vehicle::skip_time_in_playback_recorded_vehicle(iLocal_1311, 2500f);
				}
			}
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					audio::set_veh_radio_station(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), "OFF");
				}
			}
			iLocal_1192++;
		}
		else if (streaming::_0x7D41E9D2D17C5B2D(iLocal_1129)) {
		}
		break;

	case 1:
		if (func_346()) {
			iLocal_1193 = 0;
			player::set_player_wanted_level(player::player_id(), 0, 0);
			func_475();
			func_238();
			iLocal_1030 = 9;
		}
		break;
	}
}

// Position - 0x14840
bool func_346() {
	int iVar0;

	switch (iLocal_1193) {
	case 0:
		func_372(0, 0, 1);
		func_371();
		cam::shake_cam(iLocal_1329, "HAND_SHAKE", 0.2f);
		cam::shake_cam(iLocal_1330, "HAND_SHAKE", 0.2f);
		cam::set_cam_active_with_interp(iLocal_1330, iLocal_1329, 6000, 0, 0);
		cam::render_script_cams(1, 0, 3000, 1, 0, 0);
		ui::clear_help(1);
		ui::clear_prints();
		func_233("ASS_VA_SNIPE1", 7500, 1);
		if (bLocal_1150) {
			func_370();
			cam::set_gameplay_cam_relative_heading(0f);
			cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		}
		else {
			func_361();
		}
		system::settimera(0);
		iLocal_1193++;
		break;

	case 1:
		if (!entity::is_entity_dead(iLocal_1311, 0)) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
				if (system::timera() > 6000) {
					if (vehicle::is_playback_going_on_for_vehicle(iLocal_1311)) {
						vehicle::stop_playback_recorded_vehicle(iLocal_1311);
					}
					vehicle::start_playback_recorded_vehicle(iLocal_1311, 102, "ASSOJva", 1);
					vehicle::skip_time_in_playback_recorded_vehicle(iLocal_1311, 4500f);
					vehicle::_0x1F2E4E06DEA8992B(iLocal_1311, 1);
					func_233("ASS_VA_SNIPE2", 7500, 1);
					cam::set_cam_params(iLocal_1329, -1218.861f, -191.0496f, 38.83616f, 3.519839f, -0.000706f,
										42.27108f, 38f, 0, 1, 1, 2);
					cam::set_cam_near_dof(iLocal_1329, 0.5f);
					cam::set_cam_far_dof(iLocal_1329, 7f);
					cam::shake_cam(iLocal_1329, "HAND_SHAKE", 0.2f);
					cam::set_cam_params(iLocal_1330, -1218.91f, -190.8791f, 38.84585f, 3.519839f, -0.000706f, 43.33815f,
										38f, 0, 1, 1, 2);
					cam::set_cam_near_dof(iLocal_1330, 0.7f);
					cam::set_cam_far_dof(iLocal_1330, 10f);
					cam::shake_cam(iLocal_1330, "HAND_SHAKE", 0.2f);
					cam::set_cam_active_with_interp(iLocal_1330, iLocal_1329, 2000, 3, 3);
					iLocal_1193++;
				}
			}
		}
		break;

	case 2:
		if (!entity::is_entity_dead(iLocal_1311, 0)) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
				if (vehicle::get_time_position_in_recording(iLocal_1311) >= 7000f) {
					vehicle::pause_playback_recorded_vehicle(iLocal_1311);
					iLocal_1191 = 0;
					while (iLocal_1191 < 3) {
						if (!entity::is_entity_dead(uLocal_1049[iLocal_1191], 0)) {
							if (iLocal_1191 == 0) {
								iVar0 = 1250;
							}
							else if (iLocal_1191 == 1) {
								iVar0 = 400;
							}
							else {
								iVar0 = 0;
							}
							if (ai::get_script_task_status(uLocal_1049[iLocal_1191], 242628503) != 1) {
								ai::clear_sequence_task(&iLocal_1323);
								ai::open_sequence_task(&iLocal_1323);
								ai::task_leave_any_vehicle(0, iVar0, 0);
								ai::task_follow_nav_mesh_to_coord(0, vLocal_1247[iLocal_1191 /*3*/], 1f, 20000,
																  1048576000, 0, 1193033728);
								ai::close_sequence_task(iLocal_1323);
								ai::task_perform_sequence(uLocal_1049[iLocal_1191], iLocal_1323);
								ai::clear_sequence_task(&iLocal_1323);
							}
						}
						iLocal_1191++;
					}
					system::settimera(0);
					iLocal_1193++;
				}
			}
		}
		break;

	case 3:
		if (system::timera() >= 2000) {
			if (cam::get_follow_ped_cam_view_mode() == 4) {
				cam::set_cam_params(iLocal_1329, -1265.549f, -213.4919f, 43.0913f, -0.055f, 0.0543f, -50.0795f, 38f, 0,
									1, 1, 2);
				cam::shake_cam(iLocal_1329, "HAND_SHAKE", 0.2f);
				cam::set_cam_params(iLocal_1330, -1266.063f, -213.922f, 43.0918f, -0.055f, 0.0543f, -50.0795f, 38f, 0,
									1, 1, 2);
				cam::shake_cam(iLocal_1330, "HAND_SHAKE", 0.2f);
				cam::set_cam_active_with_interp(iLocal_1330, iLocal_1329, 4000, 3, 3);
				iLocal_1216 = 4000;
			}
			else {
				cam::set_cam_params(iLocal_1329, -1266.193f, -215.217f, 43.2442f, -3.1088f, 0.0498f, -48.5594f, 38f, 0,
									1, 1, 2);
				cam::shake_cam(iLocal_1329, "HAND_SHAKE", 0.2f);
				cam::set_cam_params(iLocal_1330, -1267.53f, -215.7824f, 43.1067f, -9.2365f, 0.0498f, -48.3561f, 38f, 0,
									1, 1, 2);
				cam::shake_cam(iLocal_1330, "HAND_SHAKE", 0.2f);
				cam::set_cam_active_with_interp(iLocal_1330, iLocal_1329, 4000, 3, 3);
				iLocal_1216 = 4000;
			}
			system::settimera(0);
			iLocal_1193++;
		}
		break;

	case 4:
		if (!iLocal_1189) {
			if (cam::get_follow_ped_cam_view_mode() == 4) {
				if (system::timera() >= iLocal_1216 - 300) {
					graphics::_start_screen_effect("CamPushInNeutral", 0, 0);
					audio::play_sound_frontend(-1, "1st_Person_Transition", "PLAYER_SWITCH_CUSTOM_SOUNDSET", 1);
					iLocal_1189 = 1;
				}
			}
		}
		if (system::timera() >= iLocal_1216) {
			if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
				if (vehicle::is_playback_going_on_for_vehicle(iLocal_1311)) {
					vehicle::stop_playback_recorded_vehicle(iLocal_1311);
				}
			}
			vehicle::remove_vehicle_recording(102, "ASSOJva");
			vehicle::remove_vehicle_recording(107, "ASSOJva");
			vehicle::set_vehicle_door_shut(iLocal_1311, 1, 1);
			vehicle::set_vehicle_door_shut(iLocal_1311, 0, 1);
			vehicle::set_vehicle_door_shut(iLocal_1311, 2, 1);
			ui::clear_help(1);
			if (cam::get_follow_ped_cam_view_mode() == 4) {
				cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			}
			else {
				cam::_0xC819F3CBB62BF692(1, 0f, 1, 0);
			}
			func_351(1, 1, 1);
			return true;
		}
		break;
	}
	if (func_349(iLocal_382)) {
		ui::clear_help(1);
		func_347(1);
		return true;
	}
	return false;
}

// Position - 0x14D28
void func_347(int iParam0) {
	cam::set_gameplay_cam_relative_heading(0f);
	cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
	if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
		if (vehicle::is_playback_going_on_for_vehicle(iLocal_1311)) {
			vehicle::stop_playback_recorded_vehicle(iLocal_1311);
		}
		vehicle::remove_vehicle_recording(102, "ASSOJva");
		vehicle::remove_vehicle_recording(107, "ASSOJva");
		entity::set_entity_coords(iLocal_1311, vLocal_1289, 1, 0, 0, 1);
		entity::set_entity_heading(iLocal_1311, fLocal_1219);
		vehicle::set_vehicle_door_shut(iLocal_1311, 0, 1);
		vehicle::set_vehicle_door_shut(iLocal_1311, 1, 1);
		vehicle::set_vehicle_door_shut(iLocal_1311, 2, 1);
		vehicle::set_vehicle_door_shut(iLocal_1311, 2, 1);
		iLocal_1193 = 0;
		ui::clear_prints();
		cam::render_script_cams(0, 0, 3000, 1, 0, 0);
		func_351(1, 1, 1);
		if (iParam0) {
			func_348();
		}
	}
}

// Position - 0x14DD1
void func_348() {
	cam::do_screen_fade_in(1000);
	while (!cam::is_screen_faded_in()) {
		system::wait(0);
	}
}

// Position - 0x14DF0
bool func_349(int iParam0) {
	if (func_350() && gameplay::get_game_timer() >= iParam0 + 1000) {
		cam::do_screen_fade_out(500);
		while (!cam::is_screen_faded_out()) {
			system::wait(0);
		}
		func_211(0);
		func_3();
		return true;
	}
	return false;
}

// Position - 0x14E33
int func_350() {
	if (ui::is_pause_menu_active()) {
		return 0;
	}
	if (controls::is_control_just_pressed(0, 18) || controls::is_control_just_pressed(2, 18)) {
		return 1;
	}
	return 0;
}

// Position - 0x14E65
void func_351(int iParam0, int iParam1, int iParam2) {
	if (iParam0) {
		player::set_player_control(player::get_player_index(), 1, 0);
	}
	cutscene::_0xC61B86C9F61EB404(1);
	func_353(0, 1, iParam2, 0);
	if (iParam1) {
		ui::display_radar(1);
		ui::display_hud(1);
	}
	func_352(23, 0);
}

// Position - 0x14EA0
void func_352(int iParam0, int iParam1) {
	if (iParam1) {
		gameplay::set_bit(&Global_25434, iParam0);
	}
	else {
		gameplay::clear_bit(&Global_25434, iParam0);
	}
}

// Position - 0x14EC2
void func_353(int iParam0, int iParam1, int iParam2, int iParam3) {
	if (iParam0) {
		player::special_ability_deactivate_fast(player::player_id());
		player::set_all_random_peds_flee(player::player_id(), 1);
		player::set_police_ignore_player(player::player_id(), 1);
		func_360(1);
		ui::_0xA8FDB297A8D25FBA();
		ui::_0xFDB423997FA30340();
		if (Global_14443.f_1 > 3) {
			if (audio::is_mobile_phone_call_ongoing()) {
				audio::stop_scripted_conversation(0);
			}
			if (!func_10()) {
				Global_14443.f_1 = 3;
			}
			Global_15745 = 5;
		}
		func_359(1, iParam3, iParam2, 0);
		Global_55828 = 1;
		Global_68134 = 1;
		Global_69700 = 1;
	}
	else {
		func_360(0);
		ui::_0xE1CD1E48E025E661();
		Global_55828 = 0;
		if (iParam1) {
			graphics::_0x03FC694AE06C5A20();
		}
		player::set_all_random_peds_flee(player::player_id(), 0);
		player::set_police_ignore_player(player::player_id(), 0);
		func_359(0, iParam3, iParam2, 0);
		if (network::network_is_game_in_progress()) {
			if (!ped::is_ped_injured(player::player_ped_id()) && !func_357(player::player_id()) &&
				!func_355(player::player_id(), 0) && !func_354()) {
				entity::set_entity_invincible(player::player_ped_id(), 0);
			}
		}
		else if (!ped::is_ped_injured(player::player_ped_id()) && !func_357(player::player_id())) {
			entity::set_entity_invincible(player::player_ped_id(), 0);
		}
		Global_69700 = 0;
	}
}

// Position - 0x14FDB
bool func_354() { return gameplay::is_bit_set(Global_1591201[player::player_id() /*602*/].f_39.f_18, 14); }

// Position - 0x14FF8
bool func_355(int iParam0, int iParam1) {
	bool bVar0;

	if (iParam0 == player::player_id()) {
		bVar0 = func_356(-1, 0) == 8;
	}
	else {
		bVar0 = Global_1591201[iParam0 /*602*/].f_203 == 8;
	}
	if (iParam1 == 1) {
		if (network::network_is_player_active(iParam0)) {
			bVar0 = player::get_player_team(iParam0) == 8;
		}
	}
	return bVar0;
}

// Position - 0x15043
int func_356(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	iVar1 = iParam0;
	if (iVar1 == -1) {
		iVar1 = func_295();
	}
	if (Global_1315213[iVar1] == 1) {
		if (iParam1) {
		}
		iVar0 = 8;
	}
	else {
		iVar0 = Global_1312729[iVar1];
		if (iParam1) {
		}
	}
	return iVar0;
}

// Position - 0x15084
int func_357(int iParam0) {
	if (func_355(iParam0, 0)) {
		return 1;
	}
	if (func_358()) {
		if (iParam0 == player::player_id()) {
			return 1;
		}
	}
	if (gameplay::is_bit_set(Global_2421664[iParam0 /*358*/].f_198, 2)) {
		return 1;
	}
	return 0;
}

// Position - 0x150C6
bool func_358() { return gameplay::is_bit_set(Global_2359301, 3); }

// Position - 0x150D7
int func_359(int iParam0, int iParam1, var uParam2, int iParam3) {
	int iVar0;

	iVar0 = 0;
	if (gameplay::is_pc_version()) {
		if (cutscene::_0xA0FE76168A189DDB() != iParam0 && uParam2) {
			cutscene::_0x20746F7B1032A3C7(iParam0, iParam1, 1, iParam3);
			iVar0 = 1;
		}
	}
	return iVar0;
}

// Position - 0x1510A
void func_360(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_2313, 13);
	}
	else {
		gameplay::clear_bit(&Global_2313, 13);
	}
}

// Position - 0x1512D
void func_361() {
	func_362(-1252.463f, -227.5894f, 39.03287f, -1267.239f, -207.9924f, 44.67352f, 17f, -1266.405f, -219.1991f,
			 41.4459f, 304.8644f, func_369(), 1, 1, 1, 0, 0);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ai::clear_ped_tasks_immediately(player::player_ped_id());
		entity::set_entity_coords(player::player_ped_id(), -1266.173f, -214.0011f, 41.4459f, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 310.0126f);
	}
}

// Position - 0x151B5
void func_362(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11,
			  int iParam14, int iParam15, int iParam16, int iParam17, int iParam18) {
	func_363(vParam0, vParam3, fParam6, vParam7, fParam10, vParam11, iParam14, iParam15, iParam16, iParam17, iParam18);
}

// Position - 0x151DF
void func_363(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, vector3 vParam11,
			  bool bParam14, int iParam15, bool bParam16, bool bParam17, bool bParam18) {
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;

	if (iParam15) {
		iParam15 = 0;
	}
	bVar2 = true;
	iVar3 = 0;
	iVar0 = player::get_players_last_vehicle();
	if (entity::does_entity_exist(iVar0)) {
		if (!entity::is_entity_a_mission_entity(iVar0)) {
			entity::set_entity_as_mission_entity(iVar0, 1, 0);
			iVar3 = 1;
		}
		if (vehicle::is_vehicle_driveable(iVar0, 0)) {
			if (bParam18) {
				func_368(iVar0);
			}
			if (entity::is_entity_in_angled_area(iVar0, vParam0, vParam3, fParam6, 0, 1, 0)) {
				bVar1 = true;
			}
			else {
				vVar10 = {entity::get_entity_coords(iVar0, 1)};
				if (vVar10.z > vParam0.z && vVar10.z < vParam3.z || vVar10.z > vParam3.z && vVar10.z < vParam0.z) {
					if (func_365(iVar0, vParam0, vParam3, fParam6)) {
						bVar1 = true;
					}
				}
			}
			if (vehicle::is_vehicle_driveable(iVar0, 0)) {
				if (vehicle::is_vehicle_model(iVar0, joaat("taxi"))) {
					if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != player::player_ped_id() &&
						vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) != 0) {
						if (gameplay::get_distance_between_coords(vParam0 + vParam3 / FtoV(2f),
																  entity::get_entity_coords(iVar0, 1), 1) < 20f) {
							bVar1 = true;
							bVar2 = false;
						}
					}
				}
			}
			if (bParam16) {
				if (func_290(iVar0, func_13(), 1)) {
					bVar1 = false;
				}
			}
			if (bVar1) {
				if (!func_364(vParam11)) {
					if (vehicle::is_vehicle_driveable(iVar0, 0)) {
						iVar13 = entity::get_entity_model(iVar0);
						vehicle::_0xDF7E3EEB29642C38(iVar0, &vVar4, &vVar7);
						if (vehicle::is_this_model_a_heli(iVar13)) {
							vParam11.x += 3f;
							vParam11.y += 3f;
						}
						if (iVar13 == joaat("zentorno") || iVar13 == joaat("btype") || iVar13 == joaat("dubsta3") ||
							iVar13 == joaat("monster")) {
							vParam11 = {vParam11 * FtoV(1.1f)};
						}
						else if (iVar13 == joaat("t20") || iVar13 == joaat("virgo")) {
							vParam11 = {vParam11 * FtoV(1.2f)};
						}
						if (vVar7.x - vVar4.x > vParam11.x) {
							bVar2 = false;
						}
						else if (vVar7.y - vVar4.y > vParam11.y) {
							bVar2 = false;
						}
						else if (vVar7.z - vVar4.z > vParam11.z) {
							bVar2 = false;
						}
					}
				}
				if (vehicle::is_vehicle_driveable(iVar0, 0)) {
					if (bVar2) {
						gameplay::clear_area_of_vehicles(vParam7, 5f, 0, 0, 0, 0, 0);
						entity::set_entity_heading(iVar0, fParam10);
						entity::set_entity_coords(iVar0, vParam7, 1, 0, 0, 1);
						vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
						if (bParam17) {
							vehicle::set_vehicle_engine_on(iVar0, 0, 1, 0);
							vehicle::set_vehicle_doors_shut(iVar0, 1);
						}
					}
					else {
						if (!entity::is_entity_a_mission_entity(iVar0) ||
							!entity::does_entity_belong_to_this_script(iVar0, 1)) {
							entity::set_entity_as_mission_entity(iVar0, 1, 1);
						}
						if (ped::is_ped_in_vehicle(player::player_ped_id(), iVar0, 0)) {
							entity::set_entity_coords(player::player_ped_id(), entity::get_entity_coords(iVar0, 1), 1,
													  0, 0, 1);
						}
						vehicle::delete_vehicle(&iVar0);
					}
				}
			}
			if (bParam14) {
				gameplay::clear_angled_area_of_vehicles(vParam0, vParam3, fParam6, 0, 0, 0, 0, 0);
			}
			if (iVar3 == 1) {
				if (entity::does_entity_exist(iVar0)) {
					if (entity::is_entity_a_mission_entity(iVar0)) {
						entity::set_vehicle_as_no_longer_needed(&iVar0);
					}
				}
			}
		}
		else {
			if (!entity::is_entity_a_mission_entity(iVar0)) {
				entity::set_entity_as_mission_entity(iVar0, 1, 0);
			}
			iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0);
			if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
				entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
			}
			iVar15 = vehicle::get_vehicle_model_number_of_seats(entity::get_entity_model(iVar0));
			if (iVar15 <= 2) {
				iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, 0, 0);
				if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
					entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
				}
			}
			if (iVar15 <= 4) {
				iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, 1, 0);
				if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
					entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
				}
				iVar14 = vehicle::get_ped_in_vehicle_seat(iVar0, 2, 0);
				if (entity::does_entity_exist(iVar14) && !ped::is_ped_injured(iVar14)) {
					entity::set_entity_coords(iVar14, entity::get_entity_coords(iVar14, 1), 1, 0, 0, 1);
				}
			}
			vehicle::delete_vehicle(&iVar0);
		}
	}
}

// Position - 0x155D1
int func_364(vector3 vParam0) {
	if (vParam0.x == 0f && vParam0.y == 0f && vParam0.z == 0f) {
		return 1;
	}
	return 0;
}

// Position - 0x155FB
bool func_365(int iParam0, vector3 vParam1, vector3 vParam4, float fParam7) {
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18[4];
	struct<2> Var31;
	struct<2> Var34;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		vParam1.z = vParam4.z;
		vVar0 = {func_367(vParam1 - vParam4)};
		vVar3 = {vVar0};
		vVar0.x = -vVar3.y;
		vVar0.y = vVar3.x;
		vVar0.z = 0f;
		vVar6 = {vParam1 - vVar0 * FtoV(fParam7 / 2f)};
		vVar9 = {vParam1 + vVar0 * FtoV(fParam7 / 2f)};
		vVar12 = {vParam4 - vVar0 * FtoV(fParam7 / 2f)};
		vVar15 = {vParam4 + vVar0 * FtoV(fParam7 / 2f)};
		gameplay::get_model_dimensions(entity::get_entity_model(iParam0), &Var31, &Var34);
		vVar18[0 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var31, Var31.f_1, 0f)};
		vVar18[1 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var31, Var34.f_1, 0f)};
		vVar18[2 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var34, Var31.f_1, 0f)};
		vVar18[3 /*3*/] = {entity::get_offset_from_entity_in_world_coords(iParam0, Var34, Var34.f_1, 0f)};
		if (func_366(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar9) ||
			func_366(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar9, vVar15) ||
			func_366(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar12, vVar15) ||
			func_366(vVar18[0 /*3*/], vVar18[1 /*3*/], vVar6, vVar12) ||
			func_366(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar9) ||
			func_366(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar9, vVar15) ||
			func_366(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar12, vVar15) ||
			func_366(vVar18[1 /*3*/], vVar18[3 /*3*/], vVar6, vVar12) ||
			func_366(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar9) ||
			func_366(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar9, vVar15) ||
			func_366(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar12, vVar15) ||
			func_366(vVar18[3 /*3*/], vVar18[2 /*3*/], vVar6, vVar12) ||
			func_366(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar9) ||
			func_366(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar9, vVar15) ||
			func_366(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar12, vVar15) ||
			func_366(vVar18[2 /*3*/], vVar18[0 /*3*/], vVar6, vVar12)) {
			return true;
		}
	}
	return false;
}

// Position - 0x158F1
int func_366(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8,
			 struct<2> Param9, var uParam11) {
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	float fVar13;

	fVar0 = Param0;
	fVar1 = Param0.f_1;
	fVar2 = Param3;
	fVar3 = Param3.f_1;
	fVar4 = Param6;
	fVar5 = Param6.f_1;
	fVar6 = Param9;
	fVar7 = Param9.f_1;
	fVar8 = fVar2 - fVar0;
	fVar9 = fVar3 - fVar1;
	fVar10 = fVar6 - fVar4;
	fVar11 = fVar7 - fVar5;
	fVar12 = (-fVar9 * (fVar0 - fVar4) + fVar8 * (fVar1 - fVar5)) / (-fVar10 * fVar9 + fVar8 * fVar11);
	fVar13 = (fVar10 * (fVar1 - fVar5) - fVar11 * (fVar0 - fVar4)) / (-fVar10 * fVar9 + fVar8 * fVar11);
	if (fVar12 >= 0f && fVar12 <= 1f && fVar13 >= 0f && fVar13 <= 1f) {
		return 1;
	}
	return 0;
}

// Position - 0x159A5
Vector3 func_367(vector3 vParam0) {
	float fVar0;
	float fVar1;

	fVar0 = system::vmag(vParam0);
	if (fVar0 != 0f) {
		fVar1 = 1f / fVar0;
		vParam0 = {vParam0 * FtoV(fVar1)};
	}
	else {
		vParam0.x = 0f;
		vParam0.y = 0f;
		vParam0.z = 0f;
	}
	return vParam0;
}

// Position - 0x159E4
void func_368(int iParam0) {
	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (vehicle::get_vehicle_engine_health(iParam0) <= 200f) {
				vehicle::set_vehicle_engine_health(iParam0, 500f);
			}
			if (vehicle::get_vehicle_petrol_tank_health(iParam0) <= 700f) {
				vehicle::set_vehicle_engine_health(iParam0, 900f);
			}
			if (entity::get_entity_health(iParam0) < 200) {
				vehicle::set_vehicle_engine_health(iParam0, 500f);
			}
		}
	}
}

// Position - 0x15A49
Vector3 func_369() { return 2.55f, 5.665f, 2.55f; }

// Position - 0x15A60
void func_370() {
	if (!ped::is_ped_injured(player::player_ped_id())) {
		ai::clear_ped_tasks_immediately(player::player_ped_id());
		entity::set_entity_coords(player::player_ped_id(), vLocal_1301, 1, 0, 0, 1);
		entity::set_entity_heading(player::player_ped_id(), 299.4985f);
	}
	if (entity::does_entity_exist(iLocal_1314)) {
		if (vehicle::is_vehicle_driveable(iLocal_1314, 0)) {
			vehicle::set_vehicle_engine_on(iLocal_1314, 0, 1, 0);
			entity::set_entity_coords(iLocal_1314, -1251.873f, -256.7999f, 38.2695f, 1, 0, 0, 1);
			entity::set_entity_heading(iLocal_1314, 296.7603f);
			vehicle::set_vehicle_on_ground_properly(iLocal_1314, 1084227584);
		}
	}
}

// Position - 0x15AEC
var func_371() {
	iLocal_382 = gameplay::get_game_timer();
	return iLocal_382;
}

// Position - 0x15AFE
void func_372(int iParam0, int iParam1, int iParam2) {
	player::set_player_control(player::get_player_index(), 0, iParam0);
	if (!ped::is_ped_injured(player::player_ped_id())) {
		fire::stop_fire_in_range(entity::get_entity_coords(player::player_ped_id(), 1), 15f);
	}
	cutscene::_0xC61B86C9F61EB404(iParam1);
	func_211(0);
	func_353(1, 1, iParam2, 0);
	ui::display_radar(0);
	ui::display_hud(0);
	func_352(23, 1);
}

// Position - 0x15B54
void func_373() {
	if (entity::does_entity_exist(iLocal_1311)) {
		if (vehicle::is_vehicle_driveable(iLocal_1311, 0)) {
			iLocal_1191 = 0;
			while (iLocal_1191 < 3) {
				if (!entity::does_entity_exist(uLocal_1049[iLocal_1191])) {
					if (iLocal_1191 == 0) {
						uLocal_1049[iLocal_1191] =
							ped::create_ped_inside_vehicle(iLocal_1311, 26, iLocal_1326, -1, 1, 1);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 0, 0, 2, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 3, 0, 0, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 4, 0, 1, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 8, 0, 0, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 11, 0, 0, 0);
					}
					else if (iLocal_1191 == 1) {
						uLocal_1049[iLocal_1191] =
							ped::create_ped_inside_vehicle(iLocal_1311, 26, iLocal_1326, 0, 1, 1);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 0, 1, 2, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 3, 0, 1, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 4, 0, 0, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 8, 0, 0, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 11, 0, 2, 0);
					}
					else if (iLocal_1191 == 2) {
						uLocal_1049[iLocal_1191] =
							ped::create_ped_inside_vehicle(iLocal_1311, 26, iLocal_1327, 1, 1, 1);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 0, 1, 2, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 3, 0, 2, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 4, 0, 1, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 8, 0, 0, 0);
						ped::set_ped_component_variation(uLocal_1049[iLocal_1191], 11, 1, 1, 0);
					}
				}
				iLocal_1191++;
			}
		}
	}
}

// Position - 0x15CED
void func_374() {
	if (!entity::does_entity_exist(iLocal_1311)) {
		iLocal_1311 = vehicle::create_vehicle(iLocal_1325, vLocal_1286, fLocal_1218, 1, 1);
		streaming::set_model_as_no_longer_needed(iLocal_1325);
		vehicle::_0x2B6747FAA9DB9D6B(iLocal_1311, 1);
		entity::set_entity_load_collision_flag(iLocal_1311, 1);
		vehicle::set_vehicle_provides_cover(iLocal_1311, 1);
	}
}

// Position - 0x15D33
void func_375(vector3 vParam0, vector3 vParam3, float fParam6, vector3 vParam7, float fParam10, int iParam11,
			  int iParam12, int iParam13, int iParam14, int iParam15) {
	func_363(vParam0, vParam3, fParam6, vParam7, fParam10, 0f, 0f, 0f, iParam11, iParam12, iParam13, iParam14,
			 iParam15);
}

// Position - 0x15D5C
int func_376(float fParam0, int iParam1) {
	int iVar0;

	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0) &&
			func_377(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), fParam0, 1, 1056964608, 0, 1, 0) &&
			!entity::is_entity_in_air(player::player_ped_id()) ||
		!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (!func_52(&uLocal_367)) {
			func_50(&uLocal_367);
			if (entity::does_entity_exist(player::get_players_last_vehicle())) {
				iVar0 = player::get_players_last_vehicle();
				if (vehicle::is_vehicle_driveable(iVar0, 0)) {
					vehicle::set_vehicle_forward_speed(iVar0, 0f);
				}
			}
			player::set_player_control(player::player_id(), 0, 0);
		}
		else if (func_46(&uLocal_367) > 1f || iParam1 == 0) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x15E07
int func_377(int iParam0, float fParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6) {
	controls::disable_control_action(0, 71, 1);
	controls::disable_control_action(0, 72, 1);
	controls::disable_control_action(0, 76, 1);
	controls::disable_control_action(0, 73, 1);
	controls::disable_control_action(0, 59, 1);
	controls::disable_control_action(0, 60, 1);
	if (iParam5) {
		controls::disable_control_action(0, 75, 1);
	}
	controls::disable_control_action(0, 80, 1);
	if (!iParam6) {
		controls::disable_control_action(0, 69, 1);
		controls::disable_control_action(0, 70, 1);
		controls::disable_control_action(0, 68, 1);
	}
	controls::disable_control_action(0, 74, 1);
	controls::disable_control_action(0, 86, 1);
	controls::disable_control_action(0, 81, 1);
	controls::disable_control_action(0, 82, 1);
	controls::disable_control_action(0, 138, 1);
	controls::disable_control_action(0, 136, 1);
	controls::disable_control_action(0, 114, 1);
	controls::disable_control_action(0, 107, 1);
	controls::disable_control_action(0, 110, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 89, 1);
	controls::disable_control_action(0, 87, 1);
	controls::disable_control_action(0, 88, 1);
	controls::disable_control_action(0, 113, 1);
	controls::disable_control_action(0, 115, 1);
	controls::disable_control_action(0, 116, 1);
	controls::disable_control_action(0, 117, 1);
	controls::disable_control_action(0, 118, 1);
	controls::disable_control_action(0, 119, 1);
	controls::disable_control_action(0, 131, 1);
	controls::disable_control_action(0, 132, 1);
	controls::disable_control_action(0, 123, 1);
	controls::disable_control_action(0, 126, 1);
	controls::disable_control_action(0, 129, 1);
	controls::disable_control_action(0, 130, 1);
	controls::disable_control_action(0, 133, 1);
	controls::disable_control_action(0, 134, 1);
	cam::_0x17FCA7199A530203();
	func_378(iParam0);
	if (gameplay::get_game_timer() - Global_29 > 500) {
		vehicle::_set_vehicle_halt(iParam0, fParam1, iParam2, iParam4);
	}
	Global_29 = gameplay::get_game_timer();
	if (!entity::is_entity_dead(iParam0, 0)) {
		if (gameplay::absf(entity::get_entity_speed(iParam0)) <= fParam3) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x15F96
void func_378(int iParam0) {
	if (vehicle::_get_has_vehicle_got_rocket_boost(iParam0)) {
		if (vehicle::_is_vehicle_rocket_boost_active(iParam0)) {
			vehicle::_set_rocket_boost_active(iParam0, 0);
		}
	}
}

// Position - 0x15FB7
void func_379() {
	int iVar0;

	switch (iLocal_1192) {
	case 0:
		func_393(500);
		func_284(0, "assassin_hotel_go_to_hotel", 0, 0, 0, 1);
		if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
			func_233("ASS_VA_LOSECOPS", 7500, 1);
		}
		gameplay::clear_area_of_vehicles(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
		iLocal_1192++;
		break;

	case 1:
		func_392();
		if (!entity::does_entity_exist(iLocal_1318)) {
			if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
				if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
					iVar0 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
					if (vehicle::get_ped_in_vehicle_seat(iVar0, -1, 0) == player::player_ped_id()) {
						iLocal_1318 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
						if (entity::does_entity_exist(iLocal_1318) && !entity::is_entity_dead(iLocal_1318, 0)) {
							func_271(iLocal_1318);
						}
					}
				}
			}
		}
		if (!player::is_player_wanted_level_greater(player::player_id(), 0)) {
			if (!func_389()) {
				if (!ui::does_blip_exist(iLocal_1118)) {
					iLocal_1118 = func_388(vLocal_1301, 1);
					ui::set_blip_name_from_text_file(iLocal_1118, "ASS_VA_DESTBLIP");
					func_387(&iLocal_1118, -1234.307f, -250.6783f, 38.2238f, 28.914f);
					if (!iLocal_1132) {
						func_233("ASS_VA_GOHOTEL", 7500, 1);
						iLocal_1132 = 1;
					}
					else if (func_386("ASS_VA_LOSECOPS", 0, 0)) {
						ui::clear_prints();
					}
				}
			}
			else if (streaming::_0x7D41E9D2D17C5B2D(iLocal_1129) && func_385()) {
				func_384();
				func_238();
				iLocal_1030 = 8;
			}
		}
		else if (!func_389()) {
			func_383(iLocal_1118, "ASS_VA_LOSECOPS");
		}
		else {
			func_31(3);
		}
		func_380();
		break;
	}
}

// Position - 0x1615A
void func_380() {
	if (!iLocal_1131) {
		if (func_256(vLocal_1301, 1) <= 100f) {
			func_382();
			iLocal_1129 = streaming::_0x1F3F018BC3AFA77C(-1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f,
														 80f, 12, 127);
			iLocal_1131 = 1;
		}
	}
	else if (func_256(vLocal_1301, 1) > 120f) {
		if (streaming::_0x07C313F94746702C(iLocal_1129)) {
			streaming::_0x1EE7D8DF4425F053(iLocal_1129);
			func_246();
			iLocal_1131 = 0;
		}
	}
	else if (!streaming::_0x07C313F94746702C(iLocal_1129)) {
		if (!func_381()) {
			iLocal_1131 = 0;
		}
	}
}

// Position - 0x161FA
int func_381() {
	if (ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		if (vehicle::is_vehicle_model(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), joaat("taxi"))) {
			if (vehicle::get_ped_in_vehicle_seat(ped::get_vehicle_ped_is_in(player::player_ped_id(), 0), -1, 0) !=
				player::player_ped_id()) {
				return 1;
			}
		}
	}
	return 0;
}

// Position - 0x1623E
void func_382() {
	streaming::request_model(iLocal_1326);
	streaming::request_model(iLocal_1327);
}

// Position - 0x16254
void func_383(int iParam0, char *sParam1) {
	if (player::is_player_wanted_level_greater(player::player_id(), 0)) {
		if (ui::does_blip_exist(iParam0)) {
			ui::remove_blip(&iParam0);
			ui::clear_prints();
			func_233(sParam1, 7500, 1);
		}
	}
}

// Position - 0x16285
void func_384() {
	if (ui::does_blip_exist(iLocal_1118)) {
		ui::remove_blip(&iLocal_1118);
	}
}

// Position - 0x1629E
int func_385() {
	int iVar0;

	func_382();
	if (streaming::has_model_loaded(iLocal_1326) && streaming::has_model_loaded(iLocal_1327)) {
		iVar0 = 1;
	}
	else {
		iVar0 = 0;
	}
	return iVar0;
}

// Position - 0x162CB
bool func_386(char *sParam0, int iParam1, char *sParam2) {
	ui::begin_text_command_is_message_displayed(sParam0);
	if (iParam1 == 1) {
		ui::add_text_component_substring_text_label(sParam2);
	}
	return ui::end_text_command_is_message_displayed();
}

// Position - 0x162E9
void func_387(int iParam0, vector3 vParam1, float fParam4) {
	if (ui::does_blip_exist(*iParam0)) {
		Global_100736 = *iParam0;
		Global_100741 = {vParam1};
		Global_100745 = fParam4;
	}
}

// Position - 0x16312
int func_388(vector3 vParam0, int iParam3) {
	int iVar0;

	iVar0 = ui::add_blip_for_coord(vParam0);
	ui::set_blip_scale(iVar0, func_184(network::network_is_game_in_progress(), 1f, 1f));
	ui::set_blip_route(iVar0, iParam3);
	return iVar0;
}

// Position - 0x1633E
int func_389() {
	float fVar0;
	int iVar1;

	iVar1 = 0;
	fVar0 = func_26(iLocal_1044, vLocal_1301, 1);
	if (fVar0 < 200f) {
		func_391();
	}
	if (func_390()) {
		if (entity::is_entity_at_coord(iLocal_1044, vLocal_1301, 25f, 25f, 90f, 1, 1, 0)) {
			iVar1 = 1;
		}
	}
	if (player::get_player_wanted_level(player::player_id()) == 0) {
		if (fVar0 < 2f || entity::is_entity_at_coord(iLocal_1044, vLocal_1301, 2f, 2f, 2f, 1, 1, 0) || iVar1) {
			if (!entity::is_entity_in_angled_area(player::player_ped_id(), -1141.085f, -192.66f, 75.756f, -1246.085f,
												  -192.66f, 100.756f, 115f, 0, 1, 0)) {
				if (func_390() && iVar1) {
					return 1;
				}
				else if (!entity::is_entity_in_air(player::player_ped_id())) {
					return 1;
				}
			}
		}
	}
	return 0;
}

// Position - 0x1641D
bool func_390() {
	int iVar0;

	if (ped::is_ped_injured(player::player_ped_id())) {
		return false;
	}
	if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
		return false;
	}
	if (ped::is_ped_in_any_plane(player::player_ped_id()) || ped::is_ped_in_any_heli(player::player_ped_id())) {
		iLocal_1314 = ped::get_vehicle_ped_is_in(player::player_ped_id(), 0);
		iVar0 = entity::get_entity_model(iLocal_1314);
		if (iVar0 != joaat("blimp") && iVar0 != joaat("blimp2")) {
			bLocal_1150 = true;
			return true;
		}
	}
	return false;
}

// Position - 0x16494
void func_391() {
	int iVar0;

	switch (iLocal_1204) {
	case 0:
		streaming::request_model(joaat("a_m_m_bevhills_01"));
		streaming::request_model(joaat("a_f_m_bevhills_01"));
		streaming::request_model(joaat("a_f_m_bevhills_02"));
		streaming::request_model(joaat("a_m_y_hipster_01"));
		streaming::request_model(joaat("taxi"));
		ai::request_waypoint_recording("OJAS_HotelTaxi01");
		streaming::request_anim_dict("oddjobs@assassinate@hotel@");
		if (streaming::has_model_loaded(joaat("a_m_m_bevhills_01")) &&
			streaming::has_model_loaded(joaat("a_f_m_bevhills_01")) &&
			streaming::has_model_loaded(joaat("a_f_m_bevhills_02")) && streaming::has_model_loaded(joaat("taxi")) &&
			streaming::has_model_loaded(joaat("a_m_y_hipster_01")) &&
			streaming::has_anim_dict_loaded("oddjobs@assassinate@hotel@") &&
			ai::get_is_waypoint_recording_loaded("OJAS_HotelTaxi01")) {
			iLocal_1204++;
		}
		break;

	case 1:
		Local_1690[0] =
			ped::create_ped(4, joaat("a_f_m_bevhills_01"), -1220.679f, -203.2689f, 38.3251f, 321.2841f, 1, 1);
		Local_1690[1] =
			ped::create_ped(4, joaat("a_f_m_bevhills_02"), -1219.596f, -201.3663f, 38.3251f, 110.7199f, 1, 1);
		ped::set_blocking_of_non_temporary_events(Local_1690[0], 1);
		ped::set_blocking_of_non_temporary_events(Local_1690[1], 1);
		ai::open_sequence_task(&iVar0);
		ai::task_look_at_entity(0, Local_1690[1], -1, 0, 2);
		ai::task_start_scenario_at_position(0, "WORLD_HUMAN_TOURIST_MOBILE", -1220.679f, -203.2689f, 38.3251f,
											321.2841f, 0, 0, 1);
		ai::close_sequence_task(iVar0);
		if (!entity::is_entity_dead(Local_1690[0], 0)) {
			ai::task_perform_sequence(Local_1690[0], iVar0);
		}
		ai::clear_sequence_task(&iVar0);
		ai::open_sequence_task(&iVar0);
		ai::task_look_at_entity(0, Local_1690[0], -1, 0, 2);
		ai::task_start_scenario_at_position(0, "WORLD_HUMAN_TOURIST_MAP", -1219.596f, -201.3663f, 38.3251f, 110.7199f,
											0, 0, 1);
		ai::close_sequence_task(iVar0);
		if (!entity::is_entity_dead(Local_1690[1], 0)) {
			ai::task_perform_sequence(Local_1690[1], iVar0);
		}
		ai::clear_sequence_task(&iVar0);
		Local_1690.f_4 = vehicle::create_vehicle(joaat("taxi"), -1221.73f, -199.0665f, 38.1751f, 152.5038f, 1, 1);
		vehicle::set_vehicle_on_ground_properly(Local_1690.f_4, 1084227584);
		Local_1690.f_3 = ped::create_ped_inside_vehicle(Local_1690.f_4, 4, joaat("a_m_y_hipster_01"), -1, 1, 1);
		ped::set_blocking_of_non_temporary_events(Local_1690.f_3, 1);
		ai::task_look_at_entity(Local_1690.f_3, Local_1690[0], -1, 0, 2);
		Local_1690.f_8[0] =
			ped::create_ped(4, joaat("a_m_m_bevhills_01"), -1211.597f, -184.5331f, 38.3255f, 4.5193f, 1, 1);
		Local_1690.f_8[1] =
			ped::create_ped(4, joaat("a_m_y_hipster_01"), -1211.654f, -182.7625f, 38.3255f, 166.2532f, 1, 1);
		ped::set_blocking_of_non_temporary_events(Local_1690.f_8[0], 1);
		ped::set_blocking_of_non_temporary_events(Local_1690.f_8[1], 1);
		ai::task_play_anim(Local_1690.f_8[0], "oddjobs@assassinate@hotel@", "idle_a", 8f, -4f, -1, 1, 0, 0, 0, 0);
		ai::task_play_anim(Local_1690.f_8[1], "oddjobs@assassinate@hotel@", "argue_b", 8f, -4f, -1, 1, 0, 0, 0, 0);
		Local_1690.f_5[0] =
			ped::create_ped(4, joaat("a_m_m_bevhills_01"), -1229.099f, -176.3197f, 38.3255f, 231.8036f, 1, 1);
		Local_1690.f_5[1] =
			ped::create_ped(4, joaat("a_f_m_bevhills_02"), -1249.779f, -162.4767f, 39.4131f, 220.1651f, 1, 1);
		ped::set_blocking_of_non_temporary_events(Local_1690.f_5[0], 1);
		ped::set_blocking_of_non_temporary_events(Local_1690.f_5[1], 1);
		ai::task_play_anim(Local_1690.f_5[0], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
		ai::task_play_anim(Local_1690.f_5[1], "oddjobs@assassinate@hotel@", "base", 8f, -4f, -1, 1, 0, 0, 0, 0);
		Local_1690.f_11 = 1;
		streaming::set_model_as_no_longer_needed(joaat("a_m_m_bevhills_01"));
		streaming::set_model_as_no_longer_needed(joaat("a_f_m_bevhills_01"));
		streaming::set_model_as_no_longer_needed(joaat("a_f_m_bevhills_02"));
		streaming::set_model_as_no_longer_needed(joaat("a_m_y_hipster_01"));
		streaming::set_model_as_no_longer_needed(joaat("taxi"));
		iLocal_1204++;
		break;

	case 2: break;
	}
}

// Position - 0x16882
void func_392() {
	vector3 vVar0;

	if (player::get_player_wanted_level(player::player_id()) > 0) {
		iLocal_1185 = 1;
		return;
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		vVar0 = {entity::get_entity_coords(player::player_ped_id(), 1)};
	}
	if (iLocal_1185) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			fLocal_1244 = system::vdist(entity::get_entity_coords(player::player_ped_id(), 1), vLocal_1301);
			iLocal_1185 = 0;
		}
	}
	else if (fLocal_1244 == 0f) {
		fLocal_1244 = system::vdist(-1510.291f, -946.9932f, 8.278f, vLocal_1301);
	}
	if (system::vdist(vVar0, vLocal_1301) > fLocal_1244 + 400f) {
		func_31(7);
	}
	else if (system::vdist(vVar0, vLocal_1301) > fLocal_1244 + 200f) {
		if (!iLocal_1181) {
			func_233("ASS_VA_RHOTEL", 7500, 1);
			iLocal_1181 = 1;
		}
	}
}

// Position - 0x1695C
void func_393(int iParam0) {
	if (!cam::is_screen_faded_in()) {
		cam::do_screen_fade_in(iParam0);
		while (!cam::is_screen_faded_in()) {
			system::wait(0);
		}
	}
}

// Position - 0x16982
void func_394() {
	int iVar0;
	float fVar1;

	if (entity::does_entity_exist(iLocal_1057)) {
		func_399();
		if (!ped::is_ped_injured(iLocal_1057)) {
			fVar1 = func_23(iLocal_1057, 1);
			ped::set_ped_can_play_ambient_anims(iLocal_1057, 0);
			ped::set_ped_can_play_ambient_base_anims(iLocal_1057, 0);
			ped::set_ped_can_be_targetted(iLocal_1057, 0);
			ped::_set_ped_ragdoll_blocking_flags(iLocal_1057, 16);
			ped::set_ped_config_flag(iLocal_1057, 208, 1);
			if (fVar1 < 5f) {
				if (func_52(&iLocal_1356)) {
					if (!func_22()) {
						if (func_396(&iLocal_1356, 10f)) {
							func_29(&uLocal_1363, 3, iLocal_1057, "LESTER", 0, 1);
							func_6(&uLocal_1363, "OJASAUD", "OJAS_FOLLOW", 9, 0, 0, 0);
						}
					}
				}
			}
			else if (fVar1 > 100f) {
				if (entity::is_entity_occluded(iLocal_1057) || !entity::is_entity_on_screen(iLocal_1057)) {
					func_395();
				}
			}
			switch (iLocal_1190) {
			case 0:
				if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
					if (ped::is_ped_shooting(player::player_ped_id()) ||
						entity::does_entity_exist(iLocal_1057) &&
							entity::has_entity_been_damaged_by_entity(iLocal_1057, player::player_ped_id(), 1) ||
						entity::has_entity_been_damaged_by_entity(iLocal_1689, player::player_ped_id(), 1)) {
						if (entity::has_entity_been_damaged_by_entity(iLocal_1689, player::player_ped_id(), 1)) {
						}
						ped::set_ped_movement_clipset(iLocal_1057, "move_lester_CaneUp", 1048576000);
						ai::task_play_anim(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "Lester_Getup", 1000f, -4f,
										   -1, 790536, 0, 0, 0, 0);
						iLocal_1190 = 1;
					}
				}
				break;

			case 1:
				if (entity::is_entity_playing_anim(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "Lester_Getup",
												   3)) {
					if (entity::get_entity_anim_current_time(iLocal_1057, "oddjobs@assassinate@hotel@leadin",
															 "Lester_Getup") >= 0.376f) {
						ai::open_sequence_task(&iVar0);
						ai::task_follow_nav_mesh_to_coord(0, -1502.029f, -948.687f, 7.65061f, 1f, 20000, 1f, 1,
														  1193033728);
						ai::task_follow_nav_mesh_to_coord(0, -1462.339f, -964.178f, 6.3394f, 1f, -1, 1f, 1, 1193033728);
						ai::task_wander_standard(0, entity::get_entity_heading(iLocal_1057), 0);
						ai::close_sequence_task(iVar0);
						ai::task_perform_sequence(iLocal_1057, iVar0);
						ai::clear_sequence_task(&iVar0);
						ped::force_ped_motion_state(iLocal_1057, -668482597, 0, 0, 0);
						iLocal_1190 = 2;
					}
				}
				break;

			case 2: break;
			}
		}
	}
}

// Position - 0x16BA2
void func_395() {
	if (entity::does_entity_exist(iLocal_1057)) {
		ped::delete_ped(&iLocal_1057);
	}
}

// Position - 0x16BBB
bool func_396(int *iParam0, float fParam1) {
	if (func_398(iParam0, fParam1)) {
		func_397(iParam0);
		return true;
	}
	return false;
}

// Position - 0x16BD9
void func_397(int *iParam0) {
	iParam0->f_1 = 0f;
	iParam0->f_2 = 0f;
	*iParam0 = 0;
}

// Position - 0x16BEF
bool func_398(var *uParam0, float fParam1) {
	if (func_52(uParam0)) {
		if (func_46(uParam0) > fParam1) {
			return true;
		}
	}
	return false;
}

// Position - 0x16C11
void func_399() {
	if (entity::does_entity_exist(iLocal_1057)) {
		if (entity::has_entity_been_damaged_by_entity(iLocal_1057, player::player_ped_id(), 1)) {
			func_31(9);
		}
	}
}

// Position - 0x16C3B
void func_400() {
	audio::trigger_music_event("ASS1_STOP");
	if (!gameplay::is_bit_set(Global_91491.f_20, 13)) {
		func_475();
	}
	func_401(0, -1, 1);
	cam::set_gameplay_cam_relative_heading(0f);
	cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
	iLocal_1030 = 18;
	func_393(500);
}

// Position - 0x16C82
void func_401(int iParam0, int iParam1, int iParam2) {
	if (func_482() && func_403()) {
		while (Global_91486 != 6) {
			system::wait(0);
		}
		gameplay::set_game_paused(0);
		if (entity::does_entity_exist(player::player_ped_id())) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				ped::clear_ped_wetness(player::player_ped_id());
			}
		}
		if (iParam0 != 0) {
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (entity::does_entity_exist(iParam0)) {
					if (vehicle::is_vehicle_driveable(iParam0, 0)) {
						if (!ped::is_ped_in_vehicle(player::player_ped_id(), iParam0, 0)) {
							ped::set_ped_into_vehicle(player::player_ped_id(), iParam0, iParam1);
							cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
							cam::set_gameplay_cam_relative_heading(0f);
							system::wait(0);
						}
					}
				}
			}
		}
		if (iParam2 == 1) {
			if (player::is_player_playing(player::player_id())) {
				player::set_player_control(player::player_id(), 1, 0);
			}
		}
		graphics::_stop_all_screen_effects();
		func_402(0);
	}
}

// Position - 0x16D46
void func_402(int iParam0) {
	if (iParam0 == 1) {
		gameplay::set_bit(&Global_91491.f_20, 13);
	}
	else {
		gameplay::clear_bit(&Global_91491.f_20, 13);
	}
}

// Position - 0x16D6F
var func_403() { return gameplay::is_bit_set(Global_91491.f_20, 13); }

// Position - 0x16D83
void func_404() {
	while (iLocal_1204 < 2) {
		func_391();
		system::wait(0);
	}
	func_374();
	func_347(0);
	if (!gameplay::is_bit_set(Global_91491.f_20, 13)) {
		func_475();
	}
	iLocal_1159 = 0;
	iLocal_1183 = 0;
	gameplay::clear_area_of_vehicles(-1220.57f, -185.96f, 38.4f, 50f, 0, 0, 0, 0, 0);
	player::set_player_wanted_level(player::player_id(), 0, 0);
	player::set_player_wanted_level_now(player::player_id(), 0);
	audio::trigger_music_event("ASS1_RESTART1");
	while (!func_385()) {
		system::wait(0);
	}
	func_401(0, -1, 1);
	cam::set_gameplay_cam_relative_heading(0f);
	cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
	iLocal_1030 = 9;
	func_393(500);
}

// Position - 0x16E2E
void func_405() {
	func_401(0, -1, 1);
	cam::set_gameplay_cam_relative_heading(0f);
	cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
	func_393(500);
	iLocal_1030 = 7;
}

// Position - 0x16E57
void func_406() {
	uLocal_1315[0] = vehicle::create_vehicle(iLocal_1328, -1270.045f, -251.4953f, 41.4459f, 214.63f, 1, 1);
	uLocal_1315[1] = vehicle::create_vehicle(iLocal_1328, -1265.199f, -218.4823f, 45.9981f, 127.85f, 1, 1);
}

// Position - 0x16EA5
void func_407() {
	iLocal_1329 = cam::create_camera_with_params(26379945, -1244.344f, -251.566f, 50.3194f, -9.2001f, 0.0498f, 6.3064f,
												 38f, 0, 2);
	iLocal_1330 = cam::create_camera_with_params(26379945, -1243.588f, -251.4826f, 50.3187f, -9.2001f, 0.0498f, 6.3064f,
												 38f, 0, 2);
}

// Position - 0x16F0F
bool func_408() {
	int iVar0;

	iVar0 = 0;
	if (streaming::has_model_loaded(iLocal_1325) && streaming::has_model_loaded(iLocal_1328) &&
		vehicle::has_vehicle_recording_been_loaded(102, "ASSOJva") &&
		vehicle::has_vehicle_recording_been_loaded(107, "ASSOJva") &&
		ai::get_is_waypoint_recording_loaded("OJASva_101") && ai::get_is_waypoint_recording_loaded("OJASva_101a") &&
		ai::get_is_waypoint_recording_loaded("OJASva_104") &&
		streaming::has_anim_dict_loaded("ODDJOBS@ASSASSINATE@GUARD") &&
		streaming::has_anim_dict_loaded("oddjobs@assassinate@hotel@") && ui::has_additional_text_loaded(3)) {
		iVar0 = 1;
	}
	return iVar0;
}

// Position - 0x16FA1
void func_409() {
	streaming::request_model(iLocal_1325);
	streaming::request_model(iLocal_1328);
	streaming::request_anim_dict("ODDJOBS@ASSASSINATE@GUARD");
	streaming::request_anim_dict("oddjobs@assassinate@hotel@");
	ui::request_additional_text("ASS_VA", 3);
	vehicle::request_vehicle_recording(102, "ASSOJva");
	vehicle::request_vehicle_recording(107, "ASSOJva");
	ai::request_waypoint_recording("OJASva_101");
	ai::request_waypoint_recording("OJASva_101a");
	ai::request_waypoint_recording("OJASva_104");
}

// Position - 0x16FFC
void func_410(int iParam0) {
	if (iParam0) {
		vehicle::set_all_vehicle_generators_active_in_area(
			Vector(39.1642f, -193.934f, -1237.397f) - Vector(150f, 150f, 150f),
			Vector(39.1642f, -193.934f, -1237.397f) + Vector(150f, 150f, 150f), 0, 1);
		pathfind::set_roads_in_area(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 0, 1);
	}
	else {
		vehicle::set_all_vehicle_generators_active_in_area(-1340.905f, -68.1138f, -100.7554f, -1176.622f, -287.8646f,
														   100.8606f, 1, 1);
		pathfind::set_roads_back_to_original(-1349.176f, -39.0123f, -100.7554f, -1173.215f, -297.7677f, 100.8606f, 1);
	}
}

// Position - 0x170BB
void func_411() {
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = {-1220.344f, -193.4014f, 38.1754f};
	vVar3 = {-1279.658f, -222.0533f, 41.446f};
	func_29(&uLocal_1363, 1, iLocal_1044, "FRANKLIN", 0, 1);
	player::set_wanted_level_multiplier(0.2f);
	ped::add_relationship_group("Guards", &iLocal_1331);
	ped::set_relationship_between_groups(1, -1533126372, iLocal_1331);
	ped::set_relationship_between_groups(1, iLocal_1331, -1533126372);
	ped::set_relationship_between_groups(5, iLocal_1331, 1862763509);
	ped::set_relationship_between_groups(5, 1862763509, iLocal_1331);
	gameplay::clear_area(-1220.57f, -185.96f, 38.4f, 200f, 1, 0, 0, 0);
	ped::set_ped_non_creation_area(-1298.684f, -324.0442f, -35.578f, -1113.372f, -46.1583f, 55.609f);
	iLocal_1127 =
		ped::add_scenario_blocking_area(vVar0 - Vector(15f, 15f, 15f), vVar0 + Vector(15f, 15f, 15f), 0, 1, 1, 1);
	iLocal_1128 =
		ped::add_scenario_blocking_area(vVar3 - Vector(45f, 35f, 35f), vVar3 + Vector(45f, 35f, 35f), 0, 1, 1, 1);
}

// Position - 0x171E7
void func_412() {
	StringCopy(&Local_964, "ASS_VA_PASSED", 24);
	MemCopy(&Local_964.f_6, {Global_55837}, 6);
	StringCopy(&Local_964.f_12, "ASS_VA_TIMER", 24);
	StringCopy(&Local_964.f_18, "ASS_VA_BASE", 24);
	StringCopy(&Local_964.f_24, "ASS_VA_BDESC", 24);
	StringCopy(&Local_964.f_30, "ASS_VA_CASH", 24);
	StringCopy(&Local_964.f_36, "ASS_VA_COMP", 24);
	StringCopy(&Local_964.f_42, "ASS_VA_COMP", 24);
	StringCopy(&Local_964.f_48, "ASS_VA_COMP", 24);
	StringCopy(&Local_964.f_54, "ASS_VA_COMP", 24);
}

// Position - 0x1725D
void func_413() {
	vLocal_1283 = {-1343.493f, -153.199f, 47.1825f};
	fLocal_1232 = 260.3612f;
	vLocal_1286 = {-1242.213f, -241.5975f, 38.71f};
	fLocal_1218 = 96.8755f;
	vLocal_1289 = {-1221.631f, -186.8819f, 38.7996f};
	fLocal_1219 = 201.0763f;
	fLocal_1233 = 40f;
	Local_360.f_2 = 40f;
	vLocal_1247[0 /*3*/] = {-1221.154f, -170.9907f, 38.3253f};
	vLocal_1247[1 /*3*/] = {-1210.556f, -192.882f, 38.3253f};
	vLocal_1247[2 /*3*/] = {-1216.369f, -203.6806f, 38.3253f};
	fLocal_1234[0] = 157.3177f;
	fLocal_1234[1] = 58.3594f;
	fLocal_1234[2] = 65.6443f;
	vLocal_1267[0 /*3*/] = {-1220.377f, -169.407f, 38.3253f};
	vLocal_1267[1 /*3*/] = {-1208.963f, -193.8791f, 38.3253f};
	vLocal_1267[2 /*3*/] = {-1214.955f, -205.0824f, 38.3253f};
	vLocal_1267[3 /*3*/] = {-1217.518f, -197.13f, 38.3254f};
	vLocal_1267[4 /*3*/] = {-1231.892f, -194.382f, 38.1753f};
	fLocal_1220[0] = 160.0748f;
	fLocal_1220[1] = 58.3365f;
	fLocal_1220[2] = 58.0214f;
	fLocal_1220[3] = 97.6664f;
	fLocal_1220[4] = 225.8689f;
	iLocal_1191 = 0;
	while (iLocal_1191 <= 4) {
		uLocal_1226[iLocal_1191] = gameplay::get_random_float_in_range(0f, 2f);
		iLocal_1191++;
	}
	fLocal_373 = 7000f;
	fLocal_374 = 2000f;
	iLocal_1043 = 0;
	iLocal_1179 = 0;
	iLocal_1180 = 0;
	iLocal_1165 = 0;
	iLocal_1188 = 0;
	iLocal_1187 = 0;
}

// Position - 0x17427
void func_414() {
	switch (iLocal_1192) {
	case 0:
		cutscene::request_cutscene("ASS_INT_2_ALT1", 8);
		streaming::request_model(joaat("ig_lestercrest"));
		streaming::request_model(joaat("prop_cs_walking_stick"));
		streaming::request_anim_dict("oddjobs@assassinate@hotel@leadin");
		streaming::request_anim_dict("oddjobs@assassinate@hotel@leaning@");
		streaming::request_clip_set("move_lester_CaneUp");
		player::set_player_wanted_level(player::player_id(), 0, 0);
		player::set_player_wanted_level_now(player::player_id(), 0);
		if (streaming::has_model_loaded(joaat("ig_lestercrest")) &&
			streaming::has_model_loaded(joaat("prop_cs_walking_stick")) &&
			streaming::has_anim_dict_loaded("oddjobs@assassinate@hotel@leadin") &&
			streaming::has_anim_dict_loaded("oddjobs@assassinate@hotel@leaning@") &&
			streaming::has_clip_set_loaded("move_lester_CaneUp")) {
			iLocal_1192++;
		}
		break;

	case 1:
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			func_372(56, 0, 1);
			func_375(-1514.611f, -927.4667f, 7.133712f, -1496.948f, -942.224f, 16.18723f, 30f, -1523.174f, -924.6732f,
					 9.1221f, 53.0177f, 1, 1, 1, 1, 0);
			gameplay::clear_area(-1507.715f, -941.1313f, 8.37286f, 10f, 1, 0, 0, 0);
			entity::set_entity_coords(player::player_ped_id(), vLocal_1668, 1, 0, 0, 1);
			entity::set_entity_heading(player::player_ped_id(), fLocal_1671);
			ped::_0x2208438012482A1A(player::player_ped_id(), 0, 0);
			ai::task_play_anim(player::player_ped_id(), "oddjobs@assassinate@hotel@leaning@", "idle_a", 1000f, -4f, -1,
							   513, 0, 0, 0, 0);
			if (!cam::does_cam_exist(iLocal_1672)) {
				iLocal_1672 = cam::create_camera_with_params(26379945, vLocal_1674, vLocal_1677, 42.2032f, 1, 2);
				cam::shake_cam(iLocal_1672, "HAND_SHAKE", 0.3f);
			}
			if (!cam::does_cam_exist(iLocal_1673)) {
				iLocal_1673 = cam::create_camera_with_params(26379945, vLocal_1680, vLocal_1683, 42.2032f, 0, 2);
				cam::set_cam_active_with_interp(iLocal_1673, iLocal_1672, 5000, 1, 1);
				cam::shake_cam(iLocal_1672, "HAND_SHAKE", 0.3f);
			}
			cam::render_script_cams(1, 0, 3000, 1, 0, 0);
			if (func_40(0)) {
				cam::do_screen_fade_in(800);
			}
			iLocal_1192++;
		}
		break;

	case 2:
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			if (entity::is_entity_playing_anim(player::player_ped_id(), "oddjobs@assassinate@hotel@leaning@", "idle_a",
											   3)) {
				if (!func_52(&uLocal_1686)) {
					func_49(&uLocal_1686);
				}
			}
			if (func_52(&uLocal_1686)) {
				if (func_46(&uLocal_1686) > 6f) {
					iLocal_1192++;
				}
			}
		}
		break;

	case 3:
		if (func_415()) {
			iLocal_1192++;
		}
		break;

	case 4:
		func_353(1, 1, 1, 0);
		if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
			cutscene::register_entity_for_cutscene(player::player_ped_id(), "Franklin", 0, 0, 0);
		}
		cutscene::register_entity_for_cutscene(iLocal_1057, "Lester", 2, joaat("ig_lestercrest"), 0);
		cutscene::register_entity_for_cutscene(0, "WalkingStick_Lester", 2, joaat("prop_cs_walking_stick"), 0);
		cutscene::start_cutscene(0);
		player::clear_player_wanted_level(player::player_id());
		player::set_player_control(player::player_id(), 1, 0);
		iLocal_1192++;
		break;

	case 5:
		if (cutscene::is_cutscene_playing()) {
			cam::destroy_all_cams(0);
			cam::render_script_cams(0, 0, 3000, 1, 0, 0);
			iLocal_1192++;
		}
		break;

	case 6:
		if (cam::is_gameplay_hint_active()) {
			cam::stop_gameplay_hint(0);
		}
		if (!entity::does_entity_exist(iLocal_1057)) {
			if (cutscene::does_cutscene_entity_exist("Lester", 0)) {
				if (entity::does_entity_exist(cutscene::get_entity_index_of_registered_entity("Lester", 0))) {
					iLocal_1057 = entity::get_ped_index_from_entity_index(
						cutscene::get_entity_index_of_registered_entity("Lester", 0));
				}
			}
		}
		if (!entity::does_entity_exist(iLocal_1058)) {
			if (cutscene::does_cutscene_entity_exist("WalkingStick_Lester", 0)) {
				if (entity::does_entity_exist(
						cutscene::get_entity_index_of_registered_entity("WalkingStick_Lester", 0))) {
					iLocal_1058 = cutscene::get_entity_index_of_registered_entity("WalkingStick_Lester", 0);
				}
			}
		}
		cam::set_gameplay_cam_relative_heading(0f);
		cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
		if (cutscene::can_set_exit_state_for_registered_entity("Franklin", 0)) {
		}
		if (entity::does_entity_exist(cutscene::get_entity_index_of_registered_entity("Lester", 0))) {
			if (cutscene::can_set_exit_state_for_registered_entity("Lester", 0)) {
				if (entity::does_entity_exist(iLocal_1057) && !ped::is_ped_injured(iLocal_1057)) {
					entity::set_entity_coords(iLocal_1057, -1509.458f, -948.195f, 7.75f, 1, 0, 0, 1);
					entity::set_entity_heading(iLocal_1057, -11f);
					ai::task_play_anim(iLocal_1057, "oddjobs@assassinate@hotel@leadin", "lester_leadin", 1000f, -8f, -1,
									   790537, 0f, 0, 1, 0);
					ped::_0x2208438012482A1A(iLocal_1057, 0, 0);
				}
			}
		}
		if (entity::does_entity_exist(cutscene::get_entity_index_of_registered_entity("Lester", 0))) {
			if (cutscene::can_set_exit_state_for_registered_entity("WalkingStick_Lester", 0)) {
				if (entity::does_entity_exist(iLocal_1057) && !ped::is_ped_injured(iLocal_1057)) {
					entity::attach_entity_to_entity(iLocal_1058, iLocal_1057,
													ped::get_ped_bone_index(iLocal_1057, 28422), 0f, 0f, 0f, 0f, 0f, 0f,
													0, 0, 0, 0, 2, 1);
				}
			}
		}
		if (cutscene::has_cutscene_finished() && !cutscene::is_cutscene_playing()) {
			func_353(0, 1, 1, 0);
			if (!ped::is_ped_injured(iLocal_1057)) {
				entity::set_entity_proofs(iLocal_1057, 0, 0, 0, 0, 0, 0, 0, 0);
				ped::set_ped_can_ragdoll(iLocal_1057, 1);
			}
			cam::set_gameplay_cam_relative_heading(0f);
			cam::set_gameplay_cam_relative_pitch(0f, 1065353216);
			if (cam::is_screen_faded_out()) {
				system::wait(0);
				cam::do_screen_fade_in(500);
			}
			func_351(1, 1, 1);
			iLocal_1192++;
		}
		break;

	case 7:
		func_50(&iLocal_1356);
		func_238();
		iLocal_1030 = 4;
		break;
	}
}

// Position - 0x17938
bool func_415() {
	bool bVar0;

	bVar0 = cutscene::has_cutscene_loaded();
	if (!Global_69701) {
		if (!bVar0) {
			Global_69701 = 1;
		}
	}
	return bVar0;
}

// Position - 0x1795B
void func_416() {
	if (!entity::does_entity_exist(iLocal_1689)) {
		iLocal_1689 = object::get_closest_object_of_type(-1510.103f, -947.7194f, 8.2332f, 5f, -403891623, 1, 0, 1);
	}
}

// Position - 0x1798D
void func_417() {
	int iVar0;

	if (iLocal_1030 > 7) {
		if (!ped::is_ped_injured(player::player_ped_id())) {
			if (!ped::is_ped_in_any_vehicle(player::player_ped_id(), 0)) {
				iVar0 = vehicle::get_last_driven_vehicle();
				if (entity::does_entity_exist(iVar0)) {
					if (vehicle::is_vehicle_driveable(iVar0, 0)) {
						if (iVar0 != iLocal_1319[0] && iVar0 != iLocal_1319[1] && iVar0 != iLocal_1319[2]) {
							if (iLocal_1215 >= 2) {
								iLocal_1215 = -1;
							}
							iLocal_1319[iLocal_1215 + 1] = iVar0;
							entity::set_entity_as_mission_entity(iLocal_1319[iLocal_1215 + 1], 1, 0);
							vehicle::_0x02398B627547189C(iLocal_1319[iLocal_1215 + 1], 0);
							iLocal_1215++;
						}
					}
				}
			}
		}
	}
}

// Position - 0x17A34
void func_418() {
	int iVar0;

	if (iLocal_1177) {
		iVar0 = func_30(1116471296, 1);
		if (!ped::is_ped_injured(iVar0)) {
			func_28(iVar0, 3, "OJAvaGUARD");
			func_6(&uLocal_1363, "OJASAUD", "OJASva_SPOT", 9, 0, 0, 0);
		}
	}
}

// Position - 0x17A76
void func_419() {
	int iVar0;
	vector3 vVar1;

	if (Local_1690.f_11) {
		if (!iLocal_1168) {
			if (iLocal_1030 < 10) {
				if (func_425()) {
					iVar0 = func_30(1116471296, 1);
					if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(iVar0, 0)) {
						if (func_23(iVar0, 0) < 10f) {
							vVar1 = {entity::get_entity_coords(iVar0, 1)};
							vVar1 = {vVar1};
							func_29(&uLocal_1363, 3, iVar0, "OJAvaGuard", 0, 1);
							func_6(&uLocal_1363, "OJASAUD", "OJASva_AT_EX", 9, 0, 0, 0);
						}
					}
					func_424();
					iLocal_1168 = 1;
				}
				if (iLocal_1133) {
					func_424();
					iLocal_1168 = 1;
				}
				else {
					func_423();
					func_420();
				}
			}
		}
	}
}

// Position - 0x17B2A
void func_420() {
	if (iLocal_1139) {
		if (IntToFloat(iLocal_1212) < IntToFloat(iLocal_1209) - 5f) {
			func_422(Local_1690.f_8[0], 1);
			func_422(Local_1690.f_8[1], 1);
			func_422(Local_1690.f_5[0], 1);
			func_422(Local_1690.f_5[1], 1);
		}
		else {
			if (func_23(Local_1690.f_8[0], 0) < 1f || func_23(Local_1690.f_8[1], 0) < 1f || iLocal_1137) {
				func_421(Local_1690.f_8[0], 1);
				func_421(Local_1690.f_8[1], 1);
			}
			if (!iLocal_1137) {
				func_421(Local_1690.f_5[0], 0);
				func_421(Local_1690.f_5[1], 0);
			}
			else {
				func_421(Local_1690.f_5[0], 1);
				func_421(Local_1690.f_5[1], 1);
			}
		}
	}
}

// Position - 0x17C05
void func_421(int iParam0, int iParam1) {
	if (!ped::is_ped_injured(iParam0)) {
		if (ai::get_script_task_status(iParam0, 242628503) != 1) {
			if (func_23(iParam0, 0) < 1f || iParam1) {
				func_422(iParam0, 1);
			}
		}
	}
}

// Position - 0x17C41
void func_422(int iParam0, int iParam1) {
	int iVar0;

	if (!ped::is_ped_injured(iParam0)) {
		if (iParam1 && ai::get_script_task_status(iParam0, 242628503) != 1 || !iParam1) {
			ai::open_sequence_task(&iVar0);
			ai::task_go_to_coord_any_means(0, -1214.343f, -132.1107f, 40.2416f, 1f, 0, 0, 786603, -1082130432);
			ai::task_wander_standard(0, 1193033728, 0);
			ai::close_sequence_task(iVar0);
			ai::task_perform_sequence(iParam0, iVar0);
			ai::clear_sequence_task(&iVar0);
		}
	}
}

// Position - 0x17CB8
void func_423() {
	int iVar0;

	switch (iLocal_1205) {
	case 0:
		if (iLocal_1153 || iLocal_1137 || func_23(Local_1690[0], 0) < 1f || func_23(Local_1690[1], 0) < 1f) {
			if (!entity::is_entity_dead(Local_1690[0], 0) && !entity::is_entity_dead(Local_1690[1], 0)) {
				ai::task_look_at_entity(Local_1690[0], Local_1690[1], -1, 0, 2);
				ai::task_look_at_entity(Local_1690[1], Local_1690[0], -1, 0, 2);
			}
			if (entity::does_entity_exist(Local_1690[1]) && entity::does_entity_exist(Local_1690.f_4) &&
				!ped::is_ped_injured(Local_1690[1]) && vehicle::is_vehicle_driveable(Local_1690.f_4, 0)) {
				ai::clear_ped_tasks(Local_1690[1]);
				ai::task_enter_vehicle(Local_1690[1], Local_1690.f_4, 20000, 2, 1f, 1, 0);
			}
			if (!func_52(&uLocal_1347)) {
				func_49(&uLocal_1347);
			}
			iLocal_1205++;
		}
		break;

	case 1:
		if (!iLocal_1173) {
			if (func_52(&uLocal_1347)) {
				if (func_46(&uLocal_1347) > 3f) {
					if (entity::does_entity_exist(Local_1690[0]) && entity::does_entity_exist(Local_1690.f_4) &&
						!ped::is_ped_injured(Local_1690[0]) && vehicle::is_vehicle_driveable(Local_1690.f_4, 0)) {
						if (ai::get_script_task_status(Local_1690[0], -1794415470) != 1) {
							ai::clear_ped_tasks(Local_1690[0]);
							ai::task_enter_vehicle(Local_1690[0], Local_1690.f_4, 20000, 1, 1f, 1, 0);
							iLocal_1173 = 1;
						}
					}
				}
			}
			else {
				func_49(&uLocal_1347);
			}
		}
		if (!ped::is_ped_injured(Local_1690[0]) && !ped::is_ped_injured(Local_1690[1])) {
			if (ped::is_ped_in_vehicle(Local_1690[0], Local_1690.f_4, 0) &&
				ped::is_ped_in_vehicle(Local_1690[1], Local_1690.f_4, 0)) {
				if (!entity::is_entity_dead(Local_1690.f_3, 0) && !entity::is_entity_dead(Local_1690.f_4, 0)) {
					ai::task_clear_look_at(Local_1690.f_3);
					func_50(&uLocal_1347);
				}
				iLocal_1205++;
			}
		}
		break;

	case 2:
		if (func_52(&uLocal_1347)) {
			if (func_46(&uLocal_1347) > 3f) {
				if (!ped::is_ped_injured(Local_1690.f_3) && vehicle::is_vehicle_driveable(Local_1690.f_4, 0)) {
					ai::task_vehicle_follow_waypoint_recording(Local_1690.f_3, Local_1690.f_4, "OJAS_HotelTaxi01",
															   786485, 0, 16, -1, 10f, 0, 1073741824);
					iLocal_1205++;
				}
			}
		}
		break;

	case 3:
		if (!entity::is_entity_dead(Local_1690.f_3, 0) && !entity::is_entity_dead(Local_1690.f_4, 0)) {
			if (!ai::is_waypoint_playback_going_on_for_vehicle(Local_1690.f_4) || iLocal_1176) {
				ai::task_vehicle_drive_wander(Local_1690.f_3, Local_1690.f_4, 10f, 786603);
				iLocal_1205++;
			}
		}
		break;

	case 4:
		if (iLocal_1176) {
			if (!ped::is_ped_injured(uLocal_1053[0])) {
				iVar0 = uLocal_1053[0];
			}
			else {
				iVar0 = func_25(25f);
			}
			if (entity::does_entity_exist(iVar0)) {
				if (!ped::is_ped_injured(iVar0)) {
					if (!func_22()) {
						func_28(iVar0, 5, "OJAvaGUARD");
						func_6(&uLocal_1363, "OJASAUD", "OJASva_LEAVE", 9, 0, 0, 0);
					}
				}
			}
			func_50(&uLocal_1347);
			iLocal_1205++;
		}
		break;

	case 5: break;
	}
}

// Position - 0x18026
void func_424() {
	if (entity::does_entity_exist(Local_1690.f_3) && !entity::is_entity_dead(Local_1690.f_3, 0) &&
		!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::task_smart_flee_ped(Local_1690.f_3, player::player_ped_id(), 1000f, -1, 0, 0);
	}
	if (entity::does_entity_exist(Local_1690[0]) && !entity::is_entity_dead(Local_1690[0], 0) &&
		!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::task_smart_flee_ped(Local_1690[0], player::player_ped_id(), 1000f, -1, 0, 0);
		ped::set_ped_flee_attributes(Local_1690[0], 2, 0);
	}
	if (entity::does_entity_exist(Local_1690[1]) && !entity::is_entity_dead(Local_1690[1], 0) &&
		!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::task_smart_flee_ped(Local_1690[1], player::player_ped_id(), 1000f, -1, 0, 0);
		ped::set_ped_flee_attributes(Local_1690[1], 2, 0);
	}
	if (entity::does_entity_exist(Local_1690.f_8[0]) && !entity::is_entity_dead(Local_1690.f_8[0], 0) &&
		!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::task_smart_flee_ped(Local_1690.f_8[0], player::player_ped_id(), 1000f, -1, 0, 0);
	}
	if (entity::does_entity_exist(Local_1690.f_8[1]) && !entity::is_entity_dead(Local_1690.f_8[1], 0) &&
		!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::task_smart_flee_ped(Local_1690.f_8[1], player::player_ped_id(), 1000f, -1, 0, 0);
	}
	if (entity::does_entity_exist(Local_1690.f_5[0]) && !entity::is_entity_dead(Local_1690.f_5[0], 0) &&
		!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::task_smart_flee_ped(Local_1690.f_5[0], player::player_ped_id(), 1000f, -1, 0, 0);
	}
	if (entity::does_entity_exist(Local_1690.f_5[1]) && !entity::is_entity_dead(Local_1690.f_5[1], 0) &&
		!entity::is_entity_dead(player::player_ped_id(), 0)) {
		ai::task_smart_flee_ped(Local_1690.f_5[1], player::player_ped_id(), 1000f, -1, 0, 0);
	}
}

// Position - 0x18230
bool func_425() {
	if (!entity::is_entity_dead(Local_1690.f_3, 0)) {
		if (ped::is_ped_being_jacked(Local_1690.f_3)) {
			if (ped::get_peds_jacker(Local_1690.f_3) == player::player_ped_id()) {
				return true;
			}
		}
	}
	if (!entity::is_entity_dead(player::player_ped_id(), 0) && !entity::is_entity_dead(Local_1690.f_4, 0)) {
		if (ped::is_ped_in_vehicle(player::player_ped_id(), Local_1690.f_4, 0)) {
			return true;
		}
	}
	if (func_105(Local_1690[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0)) {
		return true;
	}
	if (func_105(Local_1690[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0)) {
		return true;
	}
	if (func_105(Local_1690.f_8[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0)) {
		return true;
	}
	if (func_105(Local_1690.f_8[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0)) {
		return true;
	}
	if (func_105(Local_1690.f_5[0], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0)) {
		return true;
	}
	if (func_105(Local_1690.f_5[1], 0, &Local_360, &iLocal_371, 0, 0, 0, 1, 0)) {
		return true;
	}
	if (func_104(Local_1690.f_4)) {
		return true;
	}
	if (fire::is_explosion_in_sphere(-1, -1231.326f, -201.7195f, 38.2114f, 20f)) {
		return true;
	}
	return false;
}

// Position - 0x1837F
void func_426() { func_483(); }

// Position - 0x1838B
bool func_427() {
	if (Global_3) {
		return true;
	}
	if (Global_91491 == 7 || Global_91491 == 8) {
		return true;
	}
	return false;
}

// Position - 0x183B8
void func_428(vector3 vParam0, float fParam3, int iParam4, int iParam5) {
	if (func_482()) {
		gameplay::set_this_script_can_be_paused(0);
		gameplay::clear_bit(&Global_91491.f_20, 2);
		gameplay::set_game_paused(1);
		if (player::is_player_playing(player::player_id())) {
			player::set_player_control(player::player_id(), 0, 0);
		}
		Global_91487 = {vParam0};
		Global_91490 = fParam3;
		Global_91486 = 1;
		if (iParam4 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 14);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 14);
		}
		if (iParam5 == 1) {
			gameplay::set_bit(&Global_91491.f_20, 24);
		}
		else {
			gameplay::clear_bit(&Global_91491.f_20, 24);
		}
		func_402(1);
	}
}

// Position - 0x1844D
int func_429(vector3 vParam0, float fParam3) { return func_430(&Global_96040.f_2311, vParam0, fParam3, 0); }

// Position - 0x18467
int func_430(var *uParam0, vector3 vParam1, float fParam4, int iParam5) {
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	var uVar5;
	int iVar8;

	if (func_471(uParam0)) {
		if (func_44(vParam1, 0f, 0f, 0f, 0)) {
			vParam1 = {*uParam0};
			fParam4 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall")) {
			if (object::is_point_in_angled_area(vParam1, -816.8716f, 185.6238f, 71.40275f, -807.4894f, 189.3762f,
												75.27323f, 6.5f, 0, 1)) {
				vParam1 = {-850.93f, 158.82f, 65.7f};
				fParam4 = 89.5f;
			}
		}
		if (func_470(uParam0)) {
			gameplay::clear_area(vParam1, 5f, 1, 0, 0, 0);
			func_469(vParam1, 5f, 0);
			iVar0 = vehicle::create_vehicle(uParam0->f_12.f_66, vParam1, fParam4, 1, 1);
			if (entity::does_entity_exist(iVar0)) {
				vVar1 = {entity::get_entity_coords(iVar0, 1)};
				if (system::vdist2(vVar1, -1151.15f, -1530.32f, 7.48925f) <= 3f) {
					entity::set_entity_coords_no_offset(iVar0, vParam1, 0, 0, 1);
				}
				func_461(iVar0, &uParam0->f_12, 0, 1);
				bVar4 = true;
				if (vehicle::is_this_model_a_boat(uParam0->f_12.f_66) ||
					vehicle::_is_this_model_an_emergency_boat(uParam0->f_12.f_66)) {
					if (!water::test_probe_against_water(vParam1.x, vParam1.y, vParam1.z + 30f, vParam1.x, vParam1.y,
														 vParam1.z - 30f, &uVar5)) {
						bVar4 = false;
					}
				}
				if (bVar4) {
					vehicle::set_vehicle_on_ground_properly(iVar0, 1084227584);
				}
				if (uParam0->f_7 == 1) {
					if (iParam5) {
						if (vehicle::is_this_model_a_car(entity::get_entity_model(iVar0))) {
							func_460(uParam0->f_11, 1);
						}
						else if (vehicle::is_this_model_a_bike(entity::get_entity_model(iVar0))) {
							func_460(uParam0->f_11, 2);
						}
					}
					vehicle::_0xAB04325045427AAE(iVar0, 0);
					vehicle::_0x428BACCDF5E26EAD(iVar0, 0);
					vehicle::set_vehicle_has_strong_axles(iVar0, 1);
					func_459(iVar0, uParam0->f_11);
				}
				else if (!func_456(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10 &&
						 gameplay::are_strings_equal(script::get_this_script_name(), "startup_positioning")) {
					iVar8 = func_455(iVar0);
					if (iVar8 == -1) {
						uParam0->f_10 = 0;
					}
					else {
						func_450(iVar8);
					}
				}
				if (Global_91491 != 13 && Global_91491 != 10 && Global_91491 != 11 && Global_91491 != 12) {
					if (gameplay::get_hash_key(&Global_91491.f_3) == Global_69519) {
						if (uParam0->f_12.f_66 == Global_101700.f_31389.f_69[21 /*78*/].f_66) {
							func_447(24, 0);
							func_450(24);
						}
					}
				}
				if (uParam0->f_9 == 1) {
					func_431(iVar0, uParam0->f_11);
				}
				streaming::set_model_as_no_longer_needed(uParam0->f_12.f_66);
				vVar1 = {entity::get_entity_coords(iVar0, 1)};
			}
			return iVar0;
		}
	}
	return iVar0;
}

// Position - 0x18718
void func_431(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_432(iParam0)) {
		return;
	}
	if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
		iVar0 = vehicle::get_ped_in_vehicle_seat(iParam0, -1, 0);
		if (!entity::does_entity_exist(iVar0)) {
			iVar0 = vehicle::get_last_ped_in_vehicle_seat(iParam0, -1);
		}
		if (entity::does_entity_exist(iVar0) && !ped::is_ped_injured(iVar0)) {
			if (entity::get_entity_model(iVar0) == joaat("player_zero")) {
				iParam1 = 0;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_one")) {
				iParam1 = 1;
			}
			else if (entity::get_entity_model(iVar0) == joaat("player_two")) {
				iParam1 = 2;
			}
		}
		if (iParam1 != 0 && iParam1 != 1 && iParam1 != 2) {
			iParam1 = Global_101700.f_2095.f_539.f_3549;
		}
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		iVar2 = 0;
		while (iVar2 < 2) {
			if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66) {
				if (!gameplay::is_string_null_or_empty(
						&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
					if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
													&Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_1)) {
						Global_101700.f_31389.f_5038[iVar1 /*157*/][iVar2 /*78*/].f_66 = 0;
						Global_101700.f_31389.f_5592[iVar1] = iVar2;
					}
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 < 3) {
		if (entity::get_entity_model(iParam0) == Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66) {
			if (!gameplay::is_string_null_or_empty(&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
				if (gameplay::are_strings_equal(vehicle::get_vehicle_number_plate_text(iParam0),
												&Global_101700.f_31389.f_5600[iVar1 /*78*/].f_1)) {
					Global_101700.f_31389.f_5600[iVar1 /*78*/].f_66 = 0;
				}
			}
		}
		iVar1++;
	}
	Global_101700.f_31389.f_5590 = iParam1;
	Global_69436 = iParam0;
	Global_101700.f_31389.f_5588 = 1;
	func_280(iParam0, &Global_101700.f_31389.f_5510);
}

// Position - 0x1891A
int func_432(int iParam0) {
	if (!entity::does_entity_exist(iParam0) || !vehicle::is_vehicle_driveable(iParam0, 0) || func_290(iParam0, 0, 0) ||
		func_290(iParam0, 1, 0) || func_290(iParam0, 2, 0) || func_276(iParam0) != 145 || func_446(iParam0) ||
		func_445(iParam0) || func_444(iParam0) || func_443(iParam0) || !func_433(entity::get_entity_model(iParam0))) {
		if (func_445(iParam0)) {
		}
		if (func_445(iParam0)) {
		}
		if (func_290(iParam0, 0, 0)) {
		}
		if (func_290(iParam0, 1, 0)) {
		}
		if (func_290(iParam0, 2, 0)) {
		}
		if (func_276(iParam0) != 145) {
		}
		return 0;
	}
	return 1;
}

// Position - 0x189F7
int func_433(int iParam0) {
	if (iParam0 == 0) {
		return 0;
	}
	if (!func_434(iParam0, 0)) {
		return 0;
	}
	if (vehicle::is_this_model_a_boat(iParam0) || vehicle::is_this_model_a_plane(iParam0) ||
		vehicle::is_this_model_a_heli(iParam0) || vehicle::is_this_model_a_train(iParam0)) {
		return 0;
	}
	switch (iParam0) {
	case joaat("bus"):
	case joaat("stretch"):
	case joaat("barracks"):
	case joaat("armytanker"):
	case joaat("rhino"):
	case joaat("armytrailer"):
	case joaat("barracks2"):
	case joaat("flatbed"):
	case joaat("ripley"):
	case joaat("towtruck"):
	case joaat("towtruck2"):
	case joaat("airbus"):
	case joaat("coach"):
	case joaat("rentalbus"):
	case joaat("tourbus"):
	case joaat("firetruk"):
	case joaat("pbus"):
	case joaat("trash"):
	case joaat("benson"):
	case joaat("boattrailer"):
	case joaat("biff"):
	case joaat("hauler"):
	case joaat("docktrailer"):
	case joaat("phantom"):
	case joaat("pounder"):
	case joaat("tractor2"):
	case joaat("bulldozer"):
	case joaat("handler"):
	case joaat("tiptruck"):
	case joaat("cutter"):
	case joaat("dump"):
	case joaat("mixer"):
	case joaat("mixer2"):
	case joaat("rubble"):
	case joaat("scrap"):
	case joaat("tiptruck2"):
	case joaat("camper"):
	case joaat("taco"):
	case joaat("boxville"):
	case joaat("boxville2"):
	case joaat("boxville3"):
	case joaat("journey"):
	case joaat("mule"):
	case joaat("mule2"):
	case joaat("police"):
	case joaat("police2"):
	case joaat("police3"):
	case joaat("police4"):
	case joaat("policeb"):
	case joaat("policeold1"):
	case joaat("policeold2"):
	case joaat("policet"):
	case joaat("taxi"):
	case joaat("submersible"):
	case joaat("submersible2"):
	case joaat("monster"): return 0;
	}
	return 1;
}

// Position - 0x18BA8
int func_434(int iParam0, int iParam1) {
	int iVar0;
	struct<2> Var1;

	if (iParam0 == 0) {
		return 0;
	}
	if (!streaming::is_model_a_vehicle(iParam0)) {
		return 0;
	}
	if (iParam0 == joaat("dominator2") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("buffalo3") && !network::network_is_game_in_progress() ||
		iParam0 == joaat("gauntlet2") && !network::network_is_game_in_progress() || iParam0 == joaat("blimp2") ||
		iParam0 == joaat("stalion2") && !network::network_is_game_in_progress() || iParam0 == joaat("blista3")) {
		if (!func_442()) {
			return 0;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < dlc1::get_num_dlc_vehicles()) {
			if (dlc1::get_dlc_vehicle_data(iVar0, &Var1)) {
				if (iParam0 == Var1.f_1) {
					if (dlc1::_is_dlc_data_empty(Var1)) {
						return 0;
					}
				}
			}
			iVar0++;
		}
	}
	if (iParam0 == joaat("blimp")) {
		if (!func_441() && !func_440() && !func_439() && !func_438() && !func_442()) {
			return 0;
		}
	}
	if (iParam0 == joaat("hotknife") || iParam0 == joaat("carbonrs") || iParam0 == joaat("khamelion")) {
		if (gameplay::is_durango_version() || gameplay::is_pc_version() || gameplay::is_orbis_version()) {
		}
		else if (!func_439()) {
			return 0;
		}
	}
	if (iParam1) {
		if (!func_437(iParam0)) {
			return 0;
		}
	}
	if (!func_435(iParam0)) {
		return 0;
	}
	return 1;
}

// Position - 0x18D36
int func_435(int iParam0) {
	int iVar0;
	var uVar1;
	char cVar2[64];

	if (!func_436()) {
		return 1;
	}
	unk3::_0x897433D292B44130(&iVar0, &uVar1);
	if (iVar0 == 4) {
		return 1;
	}
	switch (iParam0) {
	case joaat("dune4"): StringCopy(&cVar2, "VE_DUNE4_t0_v3", 64); break;

	case joaat("voltic2"): StringCopy(&cVar2, "VE_VOLTIC2_t0_v3", 64); break;

	case joaat("ruiner2"): StringCopy(&cVar2, "VE_RUINER2_t0_v3", 64); break;

	case joaat("phantom2"): StringCopy(&cVar2, "VE_PHANTOM2_t0_v3", 64); break;

	case joaat("technical2"): StringCopy(&cVar2, "VE_TECHNICAL2_t0_v3", 64); break;

	case joaat("boxville5"): StringCopy(&cVar2, "VE_BOXVILLE5_t0_v3", 64); break;

	case joaat("wastelander"): StringCopy(&cVar2, "VE_WASTELANDER_t0_v3", 64); break;

	case joaat("blazer5"): StringCopy(&cVar2, "VE_BLAZER5_t0_v3", 64); break;

	default: return 1;
	}
	if (!mobile::_network_shop_is_item_unlocked(&cVar2)) {
		return 0;
	}
	return 1;
}

// Position - 0x18E02
int func_436() {
	if (gameplay::is_pc_version()) {
		return 1;
	}
	return 0;
}

// Position - 0x18E16
int func_437(int iParam0) {
	int iVar0;
	int iVar1;

	if (Global_2482093) {
		return 1;
	}
	iVar0 = 1;
	iVar1 = network::_get_posix_time();
	if (iParam0 == joaat("btype3")) {
		if (!Global_262145.f_5506 && !Global_262145.f_11530 && iVar1 < Global_262145.f_11531) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("faction3")) {
		if (!Global_262145.f_12342 && iVar1 < Global_262145.f_12354) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("virgo3") || iParam0 == joaat("virgo2")) {
		if (!Global_262145.f_12338 && iVar1 < Global_262145.f_12350) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sabregt2")) {
		if (!Global_262145.f_12339 && iVar1 < Global_262145.f_12351) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado5")) {
		if (!Global_262145.f_12340 && iVar1 < Global_262145.f_12352) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("minivan2")) {
		if (!Global_262145.f_12341 && iVar1 < Global_262145.f_12353) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("slamvan3")) {
		if (!Global_262145.f_12343 && iVar1 < Global_262145.f_12355) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("prototipo")) {
		if (!Global_262145.f_12344 && iVar1 < Global_262145.f_12347) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("seven70")) {
		if (!Global_262145.f_12345 && iVar1 < Global_262145.f_12348) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("pfister811")) {
		if (!Global_262145.f_12346 && iVar1 < Global_262145.f_12349) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("bf400")) {
		if (!Global_262145.f_14969 && iVar1 < Global_262145.f_14934) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("brioso")) {
		if (!Global_262145.f_14964 && iVar1 < Global_262145.f_14929) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("cliffhanger")) {
		if (!Global_262145.f_14968 && iVar1 < Global_262145.f_14933) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("contender")) {
		if (!Global_262145.f_14967 && iVar1 < Global_262145.f_14932) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("le7b")) {
		if (!Global_262145.f_14961 && iVar1 < Global_262145.f_14926) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("omnis")) {
		if (!Global_262145.f_14962 && iVar1 < Global_262145.f_14927) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck")) {
		if (!Global_262145.f_14965 && iVar1 < Global_262145.f_14930) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("trophytruck2")) {
		if (!Global_262145.f_14966 && iVar1 < Global_262145.f_14931) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tropos")) {
		if (!Global_262145.f_14963 && iVar1 < Global_262145.f_14928) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gargoyle")) {
		if (!Global_262145.f_14971 && iVar1 < Global_262145.f_14936) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("rallytruck")) {
		if (!Global_262145.f_14972 && iVar1 < Global_262145.f_14937) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tampa2")) {
		if (!Global_262145.f_14960 && iVar1 < Global_262145.f_14925) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tyrus")) {
		if (!Global_262145.f_14959 && iVar1 < Global_262145.f_14924) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sheava")) {
		if (!Global_262145.f_14958 && iVar1 < Global_262145.f_14923) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("lynx")) {
		if (!Global_262145.f_14970 && iVar1 < Global_262145.f_14935) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("stalion2")) {
		if (!Global_262145.f_14973 && iVar1 < Global_262145.f_14938) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("gauntlet2")) {
		if (!Global_262145.f_14974 && iVar1 < Global_262145.f_14939) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dominator2")) {
		if (!Global_262145.f_14975 && iVar1 < Global_262145.f_14940) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("buffalo3")) {
		if (!Global_262145.f_14976 && iVar1 < Global_262145.f_14941) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("defiler")) {
		if (!Global_262145.f_15121 && iVar1 < Global_262145.f_15143) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nightblade")) {
		if (!Global_262145.f_15122 && iVar1 < Global_262145.f_15144) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombiea")) {
		if (!Global_262145.f_15123 && iVar1 < Global_262145.f_15145) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("esskey")) {
		if (!Global_262145.f_15124 && iVar1 < Global_262145.f_15146) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("avarus")) {
		if (!Global_262145.f_15125 && iVar1 < Global_262145.f_15147) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("zombieb")) {
		if (!Global_262145.f_15126 && iVar1 < Global_262145.f_15148) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("hakuchou2")) {
		if (!Global_262145.f_15128 && iVar1 < Global_262145.f_15149) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("vortex")) {
		if (!Global_262145.f_15129 && iVar1 < Global_262145.f_15150) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("shotaro")) {
		if (!Global_262145.f_15130 && iVar1 < Global_262145.f_15151) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("chimera")) {
		if (!Global_262145.f_15131 && iVar1 < Global_262145.f_15152) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("raptor")) {
		if (!Global_262145.f_15132 && iVar1 < Global_262145.f_15153) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("daemon2")) {
		if (!Global_262145.f_15133 && iVar1 < Global_262145.f_15154) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer4")) {
		if (!Global_262145.f_15134 && iVar1 < Global_262145.f_15155) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tornado6")) {
		if (!Global_262145.f_15140 && iVar1 < Global_262145.f_15162) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("youga2")) {
		if (!Global_262145.f_15137 && iVar1 < Global_262145.f_15158) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wolfsbane")) {
		if (!Global_262145.f_15138 && iVar1 < Global_262145.f_15159) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio3")) {
		if (!Global_262145.f_15139 && iVar1 < Global_262145.f_15160) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("faggio")) {
		if (!Global_262145.f_15127 && iVar1 < Global_262145.f_15161) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("bagger")) {
		if (!Global_262145.f_15141 && iVar1 < Global_262145.f_15163) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("sanctus")) {
		if (!Global_262145.f_15135 && iVar1 < Global_262145.f_15156) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("manchez")) {
		if (!Global_262145.f_15136 && iVar1 < Global_262145.f_15157) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ratbike")) {
		if (!Global_262145.f_15142 && iVar1 < Global_262145.f_15164) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("voltic2")) {
		if (!Global_262145.f_16770 && iVar1 < Global_262145.f_16811) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruiner2")) {
		if (!Global_262145.f_16771 && iVar1 < Global_262145.f_16812) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune4")) {
		if (!Global_262145.f_16772 && iVar1 < Global_262145.f_16813) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("dune5")) {
		if (!Global_262145.f_16773 && iVar1 < Global_262145.f_16814) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("phantom2")) {
		if (!Global_262145.f_16774 && iVar1 < Global_262145.f_16815) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("technical2")) {
		if (!Global_262145.f_16775 && iVar1 < Global_262145.f_16816) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("boxville5")) {
		if (!Global_262145.f_16776 && iVar1 < Global_262145.f_16817) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("wastelander")) {
		if (!Global_262145.f_16777 && iVar1 < Global_262145.f_16818) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("blazer5")) {
		if (!Global_262145.f_16778 && iVar1 < Global_262145.f_16819) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet2")) {
		if (!Global_262145.f_16779 && iVar1 < Global_262145.f_16820) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("comet3")) {
		if (!Global_262145.f_16780 && iVar1 < Global_262145.f_16821) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous")) {
		if (!Global_262145.f_16781 && iVar1 < Global_262145.f_16822) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("diablous2")) {
		if (!Global_262145.f_16782 && iVar1 < Global_262145.f_16823) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy")) {
		if (!Global_262145.f_16783 && iVar1 < Global_262145.f_16824) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("elegy2")) {
		if (!Global_262145.f_16784 && iVar1 < Global_262145.f_16825) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr")) {
		if (!Global_262145.f_16785 && iVar1 < Global_262145.f_16826) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("fcr2")) {
		if (!Global_262145.f_16786 && iVar1 < Global_262145.f_16827) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb")) {
		if (!Global_262145.f_16787 && iVar1 < Global_262145.f_16828) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("italigtb2")) {
		if (!Global_262145.f_16788 && iVar1 < Global_262145.f_16829) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero")) {
		if (!Global_262145.f_16789 && iVar1 < Global_262145.f_16830) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("nero2")) {
		if (!Global_262145.f_16790 && iVar1 < Global_262145.f_16831) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("penetrator")) {
		if (!Global_262145.f_16791 && iVar1 < Global_262145.f_16832) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter")) {
		if (!Global_262145.f_16792 && iVar1 < Global_262145.f_16833) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("specter2")) {
		if (!Global_262145.f_16793 && iVar1 < Global_262145.f_16834) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("tempesta")) {
		if (!Global_262145.f_16794 && iVar1 < Global_262145.f_16835) {
			iVar0 = 0;
		}
	}
	if (iParam0 == joaat("gp1")) {
		if (!Global_262145.f_17797 && iVar1 < Global_262145.f_17793) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("infernus2")) {
		if (!Global_262145.f_17798 && iVar1 < Global_262145.f_17794) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("ruston")) {
		if (!Global_262145.f_17799 && iVar1 < Global_262145.f_17795) {
			iVar0 = 0;
		}
	}
	else if (iParam0 == joaat("turismo2")) {
		if (!Global_262145.f_17800 && iVar1 < Global_262145.f_17796) {
			iVar0 = 0;
		}
	}
	return iVar0;
}

// Position - 0x19B59
int func_438() { return 0; }

// Position - 0x19B62
int func_439() { return 1; }

// Position - 0x19B6B
int func_440() { return 1; }

// Position - 0x19B74
int func_441() {
	if (dlc2::is_dlc_present(-1226939934)) {
		return 1;
	}
	return 0;
}

// Position - 0x19B8D
bool func_442() {
	int iVar0;

	if (network::network_is_signed_in()) {
		if (network::_network_are_ros_available()) {
			if (network::_0x593570C289A77688()) {
				stats::stat_get_int(joaat("sp_unlock_exclus_content"), &iVar0, -1);
				gameplay::set_bit(&iVar0, 2);
				gameplay::set_bit(&iVar0, 4);
				gameplay::set_bit(&iVar0, 6);
				gameplay::set_bit(&Global_25, 2);
				gameplay::set_bit(&Global_25, 4);
				gameplay::set_bit(&Global_25, 6);
				stats::stat_set_int(joaat("sp_unlock_exclus_content"), iVar0, 1);
				if (gameplay::_0x5AA3BEFA29F03AD4()) {
					iVar0 = gameplay::get_profile_setting(866);
					gameplay::set_bit(&iVar0, 0);
					stats::_0xDAC073C7901F9E15(iVar0);
				}
				return true;
			}
		}
	}
	if (Global_139179 == 2) {
		return true;
	}
	else if (Global_139179 == 3) {
		return false;
	}
	if (gameplay::_0x5AA3BEFA29F03AD4()) {
		if (gameplay::is_bit_set(gameplay::get_profile_setting(866), 0)) {
			return true;
		}
	}
	return false;
}

// Position - 0x19C48
int func_443(int iParam0) {
	int iVar0;
	char *sVar1;

	iVar0 = entity::get_entity_model(iParam0);
	sVar1 = vehicle::get_vehicle_number_plate_text(iParam0);
	if (iVar0 == joaat("speedo") && gameplay::are_strings_equal(sVar1, "LAMAR G ")) {
		return 1;
	}
	if (!func_434(iVar0, 0)) {
		return 1;
	}
	return 0;
}

// Position - 0x19C8E
int func_444(int iParam0) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (entity::does_entity_exist(Global_89185[iVar0])) {
			if (Global_89185[iVar0] == iParam0) {
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x19CC9
bool func_445(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		iVar0 = 0;
		while (iVar0 < 9) {
			if (entity::does_entity_exist(Global_89155[iVar0]) &&
				vehicle::is_vehicle_driveable(Global_89155[iVar0], 0)) {
				if (Global_89155[iVar0] == iParam0 &&
					entity::get_entity_model(Global_89155[iVar0]) == entity::get_entity_model(iParam0)) {
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x19D45
int func_446(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(Global_68531.f_484[24])) {
		if (iParam0 == Global_68531.f_484[24]) {
			return 0;
		}
	}
	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0])) {
			if (iVar0 != 24 && iVar0 != 21 && iVar0 != 22 && iVar0 != 23 && iVar0 != 27 && iVar0 != 30 && iVar0 != 33 &&
				iVar0 != 28 && iVar0 != 31 && iVar0 != 34 && iVar0 != 26 && iVar0 != 29 && iVar0 != 32) {
				if (iParam0 == Global_68531.f_484[iVar0]) {
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

// Position - 0x19E2D
void func_447(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam1) {
		if (!func_449(iParam0, 0)) {
			func_448(iParam0, 1, 0);
			func_448(iParam0, 2, 0);
			func_448(iParam0, 3, 0);
			func_448(iParam0, 4, 0);
			func_448(iParam0, 0, 1);
			Global_68531[iParam0] = 1;
		}
	}
	else {
		func_448(iParam0, 0, 0);
	}
}

// Position - 0x19E8A
void func_448(int iParam0, int iParam1, int iParam2) {
	if (iParam0 == -1) {
		return;
	}
	if (iParam2) {
		gameplay::set_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
	else {
		gameplay::clear_bit(&Global_101700.f_31389[iParam0], iParam1);
	}
}

// Position - 0x19EC5
int func_449(int iParam0, int iParam1) {
	if (iParam0 == -1) {
		return 0;
	}
	return gameplay::is_bit_set(Global_101700.f_31389[iParam0], iParam1);
}

// Position - 0x19EE8
void func_450(int iParam0) {
	bool bVar0;

	if (iParam0 == -1) {
		return;
	}
	if (func_454(&Global_68531.f_555[0 /*21*/], iParam0)) {
		if (entity::does_entity_exist(Global_68531.f_139[iParam0])) {
			bVar0 = true;
			if (!ped::is_ped_injured(player::player_ped_id())) {
				if (vehicle::is_vehicle_driveable(Global_68531.f_139[iParam0], 0)) {
					if (ped::is_ped_in_vehicle(player::player_ped_id(), Global_68531.f_139[iParam0], 0)) {
						bVar0 = false;
					}
				}
			}
			if (bVar0) {
				entity::set_entity_as_mission_entity(Global_68531.f_139[iParam0], 1, 1);
				vehicle::delete_vehicle(&Global_68531.f_139[iParam0]);
			}
		}
		Global_68531[iParam0] = 1;
		if (gameplay::is_bit_set(Global_68531.f_555[0 /*21*/].f_9, 13)) {
			if (iParam0 == 24 && func_449(iParam0, 0) && Global_69440.f_66 == 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] != 0 &&
				Global_101700.f_31389.f_1958[Global_68531.f_555[0 /*21*/].f_14] > 3 &&
				(!func_452(0, Global_68531.f_555[0 /*21*/].f_12) || !func_452(1, Global_68531.f_555[0 /*21*/].f_12))) {
				func_451(&Global_101700.f_31389.f_69[Global_68531.f_555[0 /*21*/].f_14 /*78*/], &Global_69440);
				Global_69518 = Global_101700.f_31389.f_5591;
			}
			func_447(iParam0, 0);
		}
	}
}

// Position - 0x1A05A
void func_451(var *uParam0, var *uParam1) {
	uParam1->f_66 = uParam0->f_66;
	*uParam1 = *uParam0;
	uParam1->f_1 = {uParam0->f_1};
	uParam1->f_5 = uParam0->f_5;
	uParam1->f_6 = uParam0->f_6;
	uParam1->f_7 = uParam0->f_7;
	uParam1->f_8 = uParam0->f_8;
	uParam1->f_9 = {uParam0->f_9};
	uParam1->f_59 = {uParam0->f_59};
	uParam1->f_62 = uParam0->f_62;
	uParam1->f_63 = uParam0->f_63;
	uParam1->f_64 = uParam0->f_64;
	uParam1->f_65 = uParam0->f_65;
	uParam1->f_77 = uParam0->f_77;
	uParam1->f_67 = uParam0->f_67;
	uParam1->f_69 = uParam0->f_69;
	uParam1->f_68 = uParam0->f_68;
	uParam1->f_71 = uParam0->f_71;
	uParam1->f_72 = uParam0->f_72;
	uParam1->f_73 = uParam0->f_73;
	uParam1->f_74 = uParam0->f_74;
	uParam1->f_75 = uParam0->f_75;
	uParam1->f_76 = uParam0->f_76;
}

// Position - 0x1A126
int func_452(int iParam0, int iParam1) {
	int iVar0;

	switch (iParam1) {
	case 0: iVar0 = 0; break;

	case 1: iVar0 = 1; break;

	case 2: iVar0 = 2; break;
	}
	if (iParam0 < 0 || iParam0 >= func_453(&Global_101700.f_31389.f_5038[iVar0 /*157*/])) {
		return 0;
	}
	return func_434(Global_101700.f_31389.f_5038[iVar0 /*157*/][iParam0 /*78*/].f_66, 0);
}

// Position - 0x1A198
int func_453(var *uParam0) { return *uParam0; }

// Position - 0x1A1A3
bool func_454(var *uParam0, int iParam1) {
	int iVar0;
	int iVar1;

	*uParam0 = {0f, 0f, 0f};
	uParam0->f_3 = 0f;
	uParam0->f_4 = 0;
	StringCopy(&uParam0->f_5, "", 16);
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 145;
	uParam0->f_13 = -1;
	uParam0->f_14 = 0;
	uParam0->f_15 = {0f, 0f, 0f};
	uParam0->f_18 = {0f, 0f, 0f};
	switch (iParam1) {
	case 0:
		*uParam0 = {-831.8538f, 172.1154f, 69.9058f};
		uParam0->f_3 = 157.5705f;
		uParam0->f_4 = func_278(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 1:
		*uParam0 = {1970.943f, 3801.684f, 31.1396f};
		uParam0->f_3 = 301.3964f;
		uParam0->f_4 = func_278(0, 1);
		uParam0->f_12 = 0;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 2:
		*uParam0 = {-22.6297f, -1439.137f, 29.6549f};
		uParam0->f_3 = 180.0808f;
		uParam0->f_4 = func_278(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 3:
		*uParam0 = {-22.5229f, -1434.699f, 29.6552f};
		uParam0->f_3 = 141.6114f;
		uParam0->f_4 = func_278(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 4:
		*uParam0 = {10.9281f, 545.669f, 174.7951f};
		uParam0->f_3 = 61.392f;
		uParam0->f_4 = func_278(1, 1);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 5:
		*uParam0 = {6.1093f, 544.9742f, 174.2835f};
		uParam0->f_3 = 92.1548f;
		uParam0->f_4 = func_278(1, 2);
		uParam0->f_12 = 1;
		gameplay::set_bit(&uParam0->f_9, 19);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 6:
		*uParam0 = {1981.416f, 3808.131f, 31.1384f};
		uParam0->f_3 = 117.2557f;
		uParam0->f_4 = func_278(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 7:
		*uParam0 = {-1158.488f, -1529.367f, 3.8995f};
		uParam0->f_3 = 35.7505f;
		uParam0->f_4 = func_278(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 8:
		*uParam0 = {148.2868f, -1270.569f, 28.2252f};
		uParam0->f_3 = 208.4685f;
		uParam0->f_4 = func_278(2, 1);
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 20);
		gameplay::set_bit(&uParam0->f_9, 7);
		iVar0 = 1;
		break;

	case 9:
		*uParam0 = {1459.509f, -1380.45f, 78.3259f};
		uParam0->f_3 = 99.6211f;
		uParam0->f_4 = joaat("scorcher");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 10:
		*uParam0 = {-1518.947f, -1387.865f, -0.5134f};
		uParam0->f_3 = 98.3867f;
		uParam0->f_4 = joaat("seashark");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 11:
		*uParam0 = {353.0926f, 3577.593f, 32.351f};
		uParam0->f_3 = 16.6205f;
		uParam0->f_4 = joaat("duster");
		iVar0 = 1;
		gameplay::set_bit(&uParam0->f_9, 6);
		break;

	case 12:
		uParam0->f_14 = 0;
		*uParam0 = {-1652.004f, -3142.348f, 12.9921f};
		uParam0->f_3 = 329.1082f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 13:
		uParam0->f_14 = 1;
		*uParam0 = {-1271.649f, -3380.685f, 12.9451f};
		uParam0->f_3 = 329.5137f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 14:
		uParam0->f_14 = 2;
		*uParam0 = {1735.586f, 3294.531f, 40.1651f};
		uParam0->f_3 = 194.9525f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 359;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 15:
		uParam0->f_14 = 3;
		*uParam0 = {-846.27f, -1363.19f, 0.22f};
		uParam0->f_3 = 108.78f;
		uParam0->f_12 = 0;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 16:
		uParam0->f_14 = 4;
		*uParam0 = {-849.47f, -1354.99f, 0.24f};
		uParam0->f_3 = 109.84f;
		uParam0->f_12 = 1;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 17:
		uParam0->f_14 = 5;
		*uParam0 = {-852.47f, -1346.2f, 0.21f};
		uParam0->f_3 = 108.76f;
		uParam0->f_12 = 2;
		uParam0->f_13 = 356;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 18:
		uParam0->f_14 = 6;
		*uParam0 = {-745.857f, -1433.904f, 4.0005f};
		uParam0->f_12 = 0;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-756.2952f, -1441.609f, 2.9184f};
		uParam0->f_18 = {-738.0606f, -1423.068f, 8.2835f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 19:
		uParam0->f_14 = 7;
		*uParam0 = {-761.8486f, -1453.829f, 4.0005f};
		uParam0->f_12 = 1;
		uParam0->f_13 = 360;
		uParam0->f_15 = {-772.8158f, -1459.957f, 3.2894f};
		uParam0->f_18 = {-754.3353f, -1440.836f, 8.3334f};
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 20:
		uParam0->f_14 = 8;
		*uParam0 = {1769.3f, 3244f, 41.1f};
		uParam0->f_12 = 2;
		uParam0->f_13 = 360;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 28);
		iVar0 = 1;
		break;

	case 21:
		uParam0->f_14 = 9;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 22:
		uParam0->f_14 = 10;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 1;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 23:
		uParam0->f_14 = 11;
		*uParam0 = {192.7897f, -1020.539f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 2;
		uParam0->f_13 = 357;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 14);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 28);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 26:
	case 27:
	case 28:
		iVar1 = iParam1 - 26;
		uParam0->f_14 = 12 + iVar1;
		*uParam0 = {196.2794f, -1020.479f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 29:
	case 30:
	case 31:
		iVar1 = iParam1 - 29;
		uParam0->f_14 = 15 + iVar1;
		*uParam0 = {199.8872f, -1020.048f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 32:
	case 33:
	case 34:
		iVar1 = iParam1 - 32;
		uParam0->f_14 = 18 + iVar1;
		*uParam0 = {203.6006f, -1019.776f, -99.98f};
		uParam0->f_3 = 180f;
		uParam0->f_4 = 0;
		uParam0->f_12 = 0 + iVar1;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 12);
		gameplay::set_bit(&uParam0->f_9, 7);
		gameplay::set_bit(&uParam0->f_9, 27);
		gameplay::set_bit(&uParam0->f_9, 24);
		gameplay::set_bit(&uParam0->f_9, 29);
		iVar0 = 1;
		break;

	case 24:
		uParam0->f_14 = 21;
		*uParam0 = {0f, 0f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = 0;
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 25:
		uParam0->f_14 = 22;
		*uParam0 = {723.2515f, -632.0496f, 27.1484f};
		uParam0->f_3 = 12.9316f;
		uParam0->f_4 = joaat("tailgater");
		gameplay::set_bit(&uParam0->f_9, 10);
		gameplay::set_bit(&uParam0->f_9, 11);
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 12);
		iVar0 = 1;
		break;

	case 35:
		*uParam0 = {-51.23f, 3111.9f, 24.95f};
		uParam0->f_3 = 46.78f;
		uParam0->f_4 = joaat("proptrailer");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 36:
		*uParam0 = {-55.7984f, -1096.586f, 25.4223f};
		uParam0->f_3 = 308.0596f;
		uParam0->f_4 = joaat("bjxl");
		uParam0->f_10 = 126;
		uParam0->f_11 = 126;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 37:
		*uParam0 = {-2892.93f, 3192.37f, 11.66f};
		uParam0->f_3 = -132.35f;
		uParam0->f_4 = joaat("velum");
		uParam0->f_10 = 157;
		uParam0->f_11 = 157;
		gameplay::set_bit(&uParam0->f_9, 9);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 13);
		iVar0 = 1;
		break;

	case 38:
		*uParam0 = {1744.308f, 3270.673f, 40.2076f};
		uParam0->f_3 = 125f;
		uParam0->f_4 = joaat("cargobob3");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 39:
		*uParam0 = {1751.44f, 3322.643f, 42.1855f};
		uParam0->f_3 = 268.134f;
		uParam0->f_4 = joaat("submersible");
		gameplay::set_bit(&uParam0->f_9, 23);
		iVar0 = 1;
		break;

	case 41:
		*uParam0 = {1377.104f, -2076.2f, 52f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("towtruck");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 40:
		*uParam0 = {1380.42f, -2072.77f, 51.7607f};
		uParam0->f_3 = 37.5f;
		uParam0->f_4 = joaat("trash");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 42:
		*uParam0 = {1359.389f, 3618.441f, 33.8907f};
		uParam0->f_3 = 108.2337f;
		uParam0->f_4 = joaat("barracks");
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 43:
		*uParam0 = {693.1154f, -1018.155f, 21.6387f};
		uParam0->f_3 = 177.6454f;
		uParam0->f_4 = joaat("firetruk");
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 8);
		iVar0 = 1;
		break;

	case 44:
		*uParam0 = {-73.6963f, 495.124f, 143.5226f};
		uParam0->f_3 = 155.5994f;
		uParam0->f_4 = joaat("vacca");
		iVar0 = 1;
		break;

	case 45:
		*uParam0 = {-67.6314f, 891.8266f, 234.5348f};
		uParam0->f_3 = 294.993f;
		uParam0->f_4 = joaat("surano");
		iVar0 = 1;
		break;

	case 46:
		*uParam0 = {533.9048f, -169.2469f, 53.7005f};
		uParam0->f_3 = 1.2998f;
		uParam0->f_4 = joaat("tornado2");
		iVar0 = 1;
		break;

	case 47:
		*uParam0 = {-726.8914f, -408.6952f, 34.0416f};
		uParam0->f_3 = 267.7392f;
		uParam0->f_4 = joaat("superd");
		iVar0 = 1;
		break;

	case 48:
		*uParam0 = {-1321.519f, 261.3993f, 61.5709f};
		uParam0->f_3 = 350.7697f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 49:
		*uParam0 = {-1267.999f, 451.6463f, 93.7071f};
		uParam0->f_3 = 48.9311f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 50:
		*uParam0 = {-1062.076f, -226.7637f, 37.157f};
		uParam0->f_3 = 234.2767f;
		uParam0->f_4 = joaat("double");
		iVar0 = 1;
		break;

	case 51:
		*uParam0 = {68.16914f, -1558.958f, 29.46904f};
		uParam0->f_3 = 49.90575f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 52:
		*uParam0 = {589.4399f, 2736.708f, 42.03316f};
		uParam0->f_3 = -175.7105f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 53:
		*uParam0 = {-488.774f, -344.5721f, 34.36356f};
		uParam0->f_3 = 82.4042f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 54:
		*uParam0 = {288.8808f, -585.4728f, 43.15428f};
		uParam0->f_3 = -20.80707f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 55:
		*uParam0 = {304.8294f, -1383.674f, 31.67744f};
		uParam0->f_3 = -41.11603f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 56:
		*uParam0 = {1126.194f, -1481.486f, 34.7016f};
		uParam0->f_3 = -91.43369f;
		uParam0->f_4 = joaat("rumpo2");
		uParam0->f_12 = 2;
		gameplay::set_bit(&uParam0->f_9, 26);
		iVar0 = 1;
		break;

	case 57:
		*uParam0 = {-1598.36f, 5252.84f, 0f};
		uParam0->f_3 = 28.14f;
		uParam0->f_4 = joaat("submersible");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 58:
		*uParam0 = {-1602.62f, 5260.37f, 0.86f};
		uParam0->f_3 = 25.32f;
		uParam0->f_4 = joaat("dinghy");
		uParam0->f_13 = 404;
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 22);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 59:
		*uParam0 = {2116.571f, 4763.279f, 40.1596f};
		uParam0->f_3 = 198.723f;
		uParam0->f_4 = joaat("bfinjection");
		iVar0 = 1;
		break;

	case 60:
		*uParam0 = {1133.21f, 120.2f, 80.9f};
		uParam0->f_3 = 134.4f;
		if (func_442()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 61:
		*uParam0 = {-806.31f, -2679.65f, 13.9f};
		uParam0->f_3 = 150.54f;
		if (func_442()) {
			uParam0->f_4 = joaat("blimp2");
		}
		else {
			uParam0->f_4 = joaat("blimp");
		}
		uParam0->f_13 = 401;
		gameplay::set_bit(&uParam0->f_9, 13);
		gameplay::set_bit(&uParam0->f_9, 2);
		gameplay::set_bit(&uParam0->f_9, 1);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 21);
		iVar0 = 1;
		break;

	case 62:
		*uParam0 = {1985.85f, 3828.96f, 31.98f};
		uParam0->f_3 = -16.58f;
		uParam0->f_4 = joaat("blazer3");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 63:
		*uParam0 = {3870.75f, 4464.67f, 0f};
		uParam0->f_3 = 0f;
		uParam0->f_4 = joaat("submersible2");
		uParam0->f_13 = 308;
		gameplay::set_bit(&uParam0->f_9, 0);
		gameplay::set_bit(&uParam0->f_9, 21);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		gameplay::set_bit(&uParam0->f_9, 30);
		iVar0 = 1;
		break;

	case 64:
		*uParam0 = {1257.729f, -2564.474f, 41.717f};
		uParam0->f_3 = 284.5561f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 65:
		*uParam0 = {643.2823f, 3014.152f, 42.2733f};
		uParam0->f_3 = 128.0554f;
		uParam0->f_4 = joaat("dukes2");
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 66:
		*uParam0 = {38.9368f, 850.8677f, 196.3f};
		uParam0->f_3 = 311.6813f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;

	case 67:
		*uParam0 = {1333.875f, 4262.226f, 30.78f};
		uParam0->f_3 = 262.5293f;
		uParam0->f_4 = joaat("dodo");
		gameplay::set_bit(&uParam0->f_9, 30);
		gameplay::set_bit(&uParam0->f_9, 23);
		gameplay::set_bit(&uParam0->f_9, 6);
		iVar0 = 1;
		break;
	}
	if (gameplay::is_bit_set(uParam0->f_9, 10)) {
		uParam0->f_4 = Global_101700.f_31389.f_69[uParam0->f_14 /*78*/].f_66;
		if (iParam1 == 14) {
			if (uParam0->f_4 == joaat("miljet") || uParam0->f_4 == joaat("besra") || uParam0->f_4 == joaat("luxor") ||
				uParam0->f_4 == joaat("shamal") || uParam0->f_4 == joaat("titan") || uParam0->f_4 == joaat("luxor2")) {
				*uParam0 = {1678.8f, 3229.6f, 41.8f};
				uParam0->f_3 = 106.0906f;
			}
		}
		if (!func_44(Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_31389.f_1864[uParam0->f_14 /*3*/]};
		}
		if (Global_101700.f_31389.f_1934[uParam0->f_14] != -1f) {
			uParam0->f_3 = Global_101700.f_31389.f_1934[uParam0->f_14];
		}
	}
	if (gameplay::is_bit_set(uParam0->f_9, 19)) {
		if (!func_44(Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[1 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[1 /*4*/][uParam0->f_12];
		}
	}
	else if (gameplay::is_bit_set(uParam0->f_9, 20)) {
		if (!func_44(Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/], 0f, 0f, 0f, 0)) {
			*uParam0 = {Global_101700.f_2095.f_539.f_2816[0 /*10*/][uParam0->f_12 /*3*/]};
			uParam0->f_3 = Global_101700.f_2095.f_539.f_2837[0 /*4*/][uParam0->f_12];
		}
	}
	return iVar0;
}

// Position - 0x1B89A
int func_455(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (entity::does_entity_exist(Global_68531.f_484[iVar0]) &&
			!entity::is_entity_dead(Global_68531.f_484[iVar0], 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[iVar0], 0)) {
			vehicle::get_vehicle_colours(iParam0, &iVar1, &iVar2);
			vehicle::get_vehicle_colours(Global_68531.f_484[iVar0], &iVar3, &iVar4);
			if (entity::get_entity_model(iParam0) == entity::get_entity_model(Global_68531.f_484[iVar0]) &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[iVar0]) &&
				iVar1 == iVar2 && iVar3 == iVar4) {
				return iVar0;
			}
		}
		iVar0++;
	}
	return -1;
}

// Position - 0x1B95D
int func_456(int iParam0, vector3 vParam1, bool bParam4) {
	int iVar0;
	var uVar1[3];
	int iVar5;
	int iVar6;

	iVar0 = entity::get_entity_model(iParam0);
	switch (iVar0) {
	case joaat("cargobob"):
		if (func_458(iParam0, Global_68531.f_139[38], 0)) {
			func_450(38);
			return 1;
		}
		break;

	case joaat("firetruk"):
		if (func_458(iParam0, Global_68531.f_139[43], 1)) {
			func_450(43);
			return 1;
		}
		break;

	case joaat("cuban800"):
		iVar5 = ped::get_ped_nearby_vehicles(player::player_ped_id(), &uVar1);
		iVar6 = 0;
		while (iVar6 <= iVar5 - 1) {
			if (func_458(iParam0, uVar1[iVar6], 1) &&
				func_457(entity::get_entity_coords(uVar1[iVar6], 1), 2136.133f, 4780.563f, 39.9702f, 5f, 0)) {
				if (!bParam4 || func_44(vParam1, 0f, 0f, 0f, 0) ||
					gameplay::get_distance_between_coords(entity::get_entity_coords(iParam0, 1),
														  entity::get_entity_coords(uVar1[iVar6], 1), 1) < 10f) {
					vehicle::delete_vehicle(&iParam0);
					return 1;
				}
				else {
					return 0;
				}
			}
			iVar6++;
		}
		break;

	case joaat("luxor2"):
		if (entity::does_entity_exist(Global_68531.f_484[14]) && vehicle::is_vehicle_driveable(iParam0, 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[14], 0)) {
			if (entity::get_entity_model(Global_68531.f_484[14]) == joaat("luxor2") &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[14])) {
				func_450(14);
				return 1;
			}
		}
		break;

	case joaat("swift2"):
		if (entity::does_entity_exist(Global_68531.f_484[20]) && vehicle::is_vehicle_driveable(iParam0, 0) &&
			vehicle::is_vehicle_driveable(Global_68531.f_484[20], 0)) {
			if (entity::get_entity_model(Global_68531.f_484[20]) == joaat("swift2") &&
				vehicle::get_vehicle_livery(iParam0) == vehicle::get_vehicle_livery(Global_68531.f_484[20])) {
				func_450(20);
				return 1;
			}
		}
		break;
	}
	return 0;
}

// Position - 0x1BB65
int func_457(vector3 vParam0, vector3 vParam3, float fParam6, int iParam7) {
	if (fParam6 < 0f) {
		fParam6 = 0f;
	}
	if (!iParam7) {
		if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
			if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
				if (gameplay::absf(vParam0.z - vParam3.z) <= fParam6) {
					return 1;
				}
			}
		}
	}
	else if (gameplay::absf(vParam0.x - vParam3.x) <= fParam6) {
		if (gameplay::absf(vParam0.y - vParam3.y) <= fParam6) {
			return 1;
		}
	}
	return 0;
}

// Position - 0x1BBE0
bool func_458(int iParam0, int iParam1, int iParam2) {
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (entity::does_entity_exist(iParam1) && !entity::is_entity_dead(iParam1, 0) &&
		vehicle::is_vehicle_driveable(iParam1, 0)) {
		if (iParam2) {
			vehicle::get_vehicle_colours(iParam0, &iVar0, &iVar1);
			vehicle::get_vehicle_colours(iParam1, &iVar2, &iVar3);
			if (iVar0 == iVar2 && iVar1 == iVar3) {
				return true;
			}
		}
		else {
			return true;
		}
	}
	return false;
}

// Position - 0x1BC41
void func_459(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (!entity::does_entity_exist(Global_89155[iVar0])) {
			Global_89155[iVar0] = iParam0;
			Global_89165[iVar0] = iParam1;
			Global_89175[iVar0] = entity::get_entity_model(iParam0);
			if (vehicle::is_this_model_a_car(Global_89175[iVar0])) {
				Global_89203[iParam1 /*3*/][0] = -1;
			}
			else {
				Global_89203[iParam1 /*3*/][1] = -1;
			}
			iVar0 = 9;
		}
		if (iVar0 == 8) {
		}
		iVar0++;
	}
}

// Position - 0x1BCC3
void func_460(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 9) {
		if (entity::does_entity_exist(Global_89155[iVar0])) {
			if (iParam0 == 145 || Global_89165[iVar0] == iParam0) {
				if (iParam1 == 0 || entity::get_entity_model(Global_89155[iVar0]) == func_278(iParam0, iParam1)) {
					if (!ped::is_ped_in_vehicle(player::player_ped_id(), Global_89155[iVar0], 0)) {
						entity::set_entity_as_mission_entity(Global_89155[iVar0], 0, 1);
						vehicle::delete_vehicle(&Global_89155[iVar0]);
						Global_89165[iVar0] = 145;
					}
				}
			}
		}
		iVar0++;
	}
}

// Position - 0x1BD61
void func_461(int iParam0, var *uParam1, int iParam2, int iParam3) {
	int iVar0;
	int iVar1;
	int iVar2;

	if (vehicle::is_vehicle_driveable(iParam0, 0)) {
		if (gameplay::get_hash_key(&uParam1->f_1) != 0) {
			vehicle::set_vehicle_number_plate_text(iParam0, &uParam1->f_1);
		}
		if (*uParam1 >= 0 && *uParam1 < vehicle::get_number_of_vehicle_number_plates()) {
			vehicle::set_vehicle_number_plate_text_index(iParam0, *uParam1);
		}
		if (uParam1->f_66 == joaat("sovereign")) {
			uParam1->f_5 = 111;
			uParam1->f_6 = 111;
			uParam1->f_7 = 111;
		}
		else if (uParam1->f_66 == joaat("casco")) {
			iVar0 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_281(iVar0 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_281(iVar0 + 1));
			}
		}
		else if (uParam1->f_66 == joaat("sandking") || uParam1->f_66 == joaat("sandking2")) {
			iVar1 = 1;
			if (gameplay::is_bit_set(uParam1->f_77, func_281(iVar1 + 1))) {
			}
			else {
				gameplay::set_bit(&uParam1->f_77, func_281(iVar1 + 1));
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 13)) {
			vehicle::set_vehicle_custom_primary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_primary_colour(iParam0);
		}
		if (gameplay::is_bit_set(uParam1->f_77, 12)) {
			vehicle::set_vehicle_custom_secondary_colour(iParam0, uParam1->f_71, uParam1->f_72, uParam1->f_73);
		}
		else {
			vehicle::clear_vehicle_custom_secondary_colour(iParam0);
		}
		vehicle::set_vehicle_colours(iParam0, uParam1->f_5, uParam1->f_6);
		if (uParam1->f_7 < 0) {
			uParam1->f_7 = 0;
		}
		if (uParam1->f_8 < 0) {
			uParam1->f_8 = 0;
		}
		vehicle::set_vehicle_extra_colours(iParam0, uParam1->f_7, uParam1->f_8);
		if (gameplay::is_bit_set(uParam1->f_77, 15) || func_468(iParam0) ||
			uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0 && uParam1->f_9[20] > 0)
			&&func_467() {
				uParam1->f_62 = 0;
				uParam1->f_63 = 0;
				uParam1->f_64 = 0;
			}
		else if (uParam1->f_62 == 0 && uParam1->f_63 == 0 && uParam1->f_64 == 0) {
			uParam1->f_62 = 255;
			uParam1->f_63 = 255;
			uParam1->f_64 = 255;
		}
		vehicle::set_vehicle_tyre_smoke_color(iParam0, uParam1->f_62, uParam1->f_63, uParam1->f_64);
		if (uParam1->f_65 == -1 && uParam1->f_66 != joaat("granger")) {
			vehicle::set_vehicle_window_tint(iParam0, 0);
		}
		else {
			vehicle::set_vehicle_window_tint(iParam0, 0);
			vehicle::set_vehicle_window_tint(iParam0, uParam1->f_65);
		}
		vehicle::set_vehicle_tyres_can_burst(iParam0, !gameplay::is_bit_set(uParam1->f_77, 9));
		if (iParam2) {
			vehicle::set_vehicle_doors_locked(iParam0, uParam1->f_70);
		}
		vehicle::_set_vehicle_neon_lights_colour(iParam0, uParam1->f_74, uParam1->f_75, uParam1->f_76);
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 2, gameplay::is_bit_set(uParam1->f_77, 28));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 3, gameplay::is_bit_set(uParam1->f_77, 29));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 0, gameplay::is_bit_set(uParam1->f_77, 30));
		vehicle::_set_vehicle_neon_light_enabled(iParam0, 1, gameplay::is_bit_set(uParam1->f_77, 31));
		vehicle::set_vehicle_is_stolen(iParam0, gameplay::is_bit_set(uParam1->f_77, 10));
		if (vehicle::get_vehicle_livery_count(iParam0) > 1 && uParam1->f_67 >= 0) {
			vehicle::set_vehicle_livery(iParam0, uParam1->f_67);
		}
		if (uParam1->f_69 > -1 && uParam1->f_69 < 255) {
			if (!vehicle::is_this_model_a_bicycle(entity::get_entity_model(iParam0))) {
				if (vehicle::is_this_model_a_bike(entity::get_entity_model(iParam0))) {
					if (uParam1->f_69 == 6) {
						func_466(iParam0, uParam1->f_69);
					}
				}
				else {
					func_466(iParam0, uParam1->f_69);
				}
			}
		}
		if (vehicle::is_vehicle_a_convertible(iParam0, 0)) {
			if (uParam1->f_68 == 0 || uParam1->f_68 == 3 || uParam1->f_68 == 5) {
				vehicle::raise_convertible_roof(iParam0, 1);
			}
			else {
				vehicle::lower_convertible_roof(iParam0, 1);
			}
		}
		if (iParam3) {
			func_462(&iParam0, &uParam1->f_9, &uParam1->f_59);
		}
		if (!vehicle::is_this_model_a_heli(uParam1->f_66) && !vehicle::is_this_model_a_boat(uParam1->f_66)) {
			iVar2 = 0;
			while (iVar2 <= 11) {
				if (gameplay::is_bit_set(uParam1->f_77, func_281(iVar2 + 1))) {
					if (!vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
						vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 0);
					}
				}
				else if (vehicle::is_vehicle_extra_turned_on(iParam0, iVar2 + 1)) {
					vehicle::set_vehicle_extra(iParam0, iVar2 + 1, 1);
				}
				iVar2++;
			}
		}
		if (entity::get_entity_model(iParam0) == joaat("sheava") ||
			entity::get_entity_model(iParam0) == joaat("omnis") || entity::get_entity_model(iParam0) == joaat("le7b")) {
			if (vehicle::get_vehicle_mod(iParam0, 0) == -1) {
				vehicle::set_vehicle_extra(iParam0, 1, 0);
			}
		}
		if (vehicle::is_this_model_a_plane(uParam1->f_66)) {
			if (!gameplay::is_bit_set(uParam1->f_77, 23)) {
				if (gameplay::is_bit_set(uParam1->f_77, 22)) {
					vehicle::control_landing_gear(iParam0, 2);
				}
				else {
					vehicle::control_landing_gear(iParam0, 3);
				}
			}
			else {
				vehicle::control_landing_gear(iParam0, 4);
			}
		}
		if (gameplay::is_bit_set(uParam1->f_77, 27)) {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 1);
		}
		else {
			decorator::decor_set_bool(iParam0, "IgnoredByQuickSave", 0);
		}
	}
}

// Position - 0x1C210
int func_462(int iParam0, var *uParam1, var *uParam2) {
	int iVar0;
	int iVar1;

	if (!vehicle::is_vehicle_driveable(*iParam0, 0)) {
		return 0;
	}
	if (vehicle::get_num_mod_kits(*iParam0) == 0) {
		return 0;
	}
	vehicle::set_vehicle_mod_kit(*iParam0, 0);
	iVar0 = 0;
	while (iVar0 < *uParam1) {
		iVar1 = iVar0;
		if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			vehicle::toggle_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] > 0);
		}
		else if (vehicle::get_vehicle_mod(*iParam0, iVar1) != (*uParam1)[iVar0] - 1) {
			vehicle::remove_vehicle_mod(*iParam0, iVar1);
			if ((*uParam1)[iVar0] > 0) {
				if (iVar0 == 23) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[0] > 0);
				}
				else if (iVar0 == 24) {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, (*uParam2)[1] > 0);
				}
				else {
					vehicle::set_vehicle_mod(*iParam0, iVar1, (*uParam1)[iVar0] - 1, 0);
				}
			}
		}
		iVar0++;
	}
	if (func_465(entity::get_entity_model(*iParam0), 1) &&
		vehicle::get_vehicle_mod(*iParam0, 24) != func_464(*iParam0, (*uParam1)[38] - 1)) {
		vehicle::set_vehicle_mod(*iParam0, 24, func_464(*iParam0, (*uParam1)[38] - 1), 0);
	}
	if (func_463(*iParam0)) {
		vehicle::set_vehicle_strong(*iParam0, 1);
		vehicle::set_vehicle_has_strong_axles(*iParam0, 1);
	}
	return 1;
}

// Position - 0x1C388
bool func_463(int iParam0) {
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[16];

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0) &&
		vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = 0;
		while (iVar0 < 49) {
			iVar1 = iVar0;
			if (iVar1 == 17 || iVar1 == 18 || iVar1 == 19 || iVar1 == 20 || iVar1 == 21 || iVar1 == 22) {
			}
			else if (vehicle::get_vehicle_mod(iParam0, iVar1) != -1) {
				StringCopy(&cVar3,
						   vehicle::get_mod_text_label(iParam0, iVar1, vehicle::get_vehicle_mod(iParam0, iVar1)), 16);
				iVar2 = gameplay::get_hash_key(&cVar3);
				if (iVar2 != 0) {
					if (iVar2 == gameplay::get_hash_key("MNU_CAGE") || iVar2 == gameplay::get_hash_key("SABRE_CAG")) {
						return true;
					}
				}
			}
			iVar0++;
		}
	}
	return false;
}

// Position - 0x1C464
int func_464(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	if (entity::does_entity_exist(iParam0) && vehicle::is_vehicle_driveable(iParam0, 0)) {
		switch (entity::get_entity_model(iParam0)) {
		case joaat("tornado5"):
			switch (iParam1) {
			case 0: return 0;

			case 1: return 1;

			case 2: return 2;

			case 3: return 3;

			case 4: return 4;

			case 5: return 4;
			}
			break;

		case joaat("faction3"): return 3;
		}
		iVar0 = vehicle::get_num_vehicle_mods(iParam0, 38);
		iVar1 = vehicle::get_num_vehicle_mods(iParam0, 24);
		fVar2 = system::to_float(iParam1 + 1) / system::to_float(iVar0);
		iVar3 = system::floor(system::to_float(iVar1) * fVar2) - 1;
		if (iVar3 < 0) {
			iVar3 = 0;
		}
		if (iVar3 >= iVar0) {
			iVar3 = iVar0 - 1;
		}
		return iVar3;
	}
	return 0;
}

// Position - 0x1C549
int func_465(int iParam0, int iParam1) {
	switch (iParam0) {
	case joaat("faction2"):
	case joaat("buccaneer2"):
	case joaat("chino2"):
	case joaat("moonbeam2"):
	case joaat("primo2"):
	case joaat("voodoo"): return 1;

	case joaat("sabregt2"):
		if (!Global_262145.f_12339) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("tornado5"):
		if (!Global_262145.f_12340) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("virgo2"):
		if (!Global_262145.f_12338) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("minivan2"):
		if (!Global_262145.f_12341) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("slamvan3"):
		if (!Global_262145.f_12343) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("faction3"):
		if (!Global_262145.f_12342) {
			return 0;
		}
		else {
			return 1;
		}
		break;

	case joaat("sultanrs"):
	case joaat("banshee2"):
		if ((iParam1 & 1) != 0) {
			return 0;
		}
		return 1;

	case joaat("comet3"):
		if (Global_262145.f_16780) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("diablous2"):
		if (Global_262145.f_16782) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("fcr2"):
		if (Global_262145.f_16786) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("elegy"):
		if (Global_262145.f_16783) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("nero2"):
		if (Global_262145.f_16790) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("italigtb2"):
		if (Global_262145.f_16788) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;

	case joaat("specter2"):
		if (Global_262145.f_16793) {
			if ((iParam1 & 1) != 0) {
				return 0;
			}
			return 1;
		}
		return 0;
	}
	return 0;
}

// Position - 0x1C76E
void func_466(int iParam0, int iParam1) {
	int iVar0;
	int iVar1;

	if (vehicle::get_num_mod_kits(iParam0) > 0) {
		vehicle::set_vehicle_mod_kit(iParam0, 0);
		iVar0 = vehicle::get_vehicle_mod(iParam0, 24);
		iVar1 = vehicle::get_vehicle_mod_variation(iParam0, 24);
		vehicle::set_vehicle_wheel_type(iParam0, iParam1);
		if (entity::get_entity_model(iParam0) == joaat("tornado6")) {
			return;
		}
		if (iVar0 == -1) {
			vehicle::remove_vehicle_mod(iParam0, 24);
		}
		else {
			vehicle::set_vehicle_mod(iParam0, 24, iVar0, iVar1 == 1);
		}
	}
}

// Position - 0x1C7D3
var func_467() { return dlc2::is_dlc_present(-1691188696); }

// Position - 0x1C7E4
int func_468(int iParam0) {
	int iVar0;

	if (entity::does_entity_exist(iParam0)) {
		if (vehicle::is_vehicle_driveable(iParam0, 0)) {
			if (decorator::decor_is_registered_as_type("MPBitset", 3)) {
				if (decorator::decor_exist_on(iParam0, "MPBitset")) {
					iVar0 = decorator::decor_get_int(iParam0, "MPBitset");
				}
				return gameplay::is_bit_set(iVar0, 4);
			}
		}
	}
	return 0;
}

// Position - 0x1C82F
void func_469(vector3 vParam0, float fParam3, int iParam4) {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 68) {
		if (func_454(&Global_68531.f_555[0 /*21*/], iVar0)) {
			if (gameplay::get_distance_between_coords(vParam0, Global_68531.f_555[0 /*21*/], iParam4) <= fParam3) {
				func_450(iVar0);
			}
		}
		iVar0++;
	}
}

// Position - 0x1C87F
bool func_470(var *uParam0) {
	if (func_471(uParam0)) {
		if (streaming::has_model_loaded(uParam0->f_12.f_66)) {
			return true;
		}
		else {
			return false;
		}
		return true;
	}
	else {
		return false;
	}
	return true;
}

// Position - 0x1C8B4
bool func_471(var *uParam0) {
	if (uParam0->f_12.f_66 == 0) {
		return false;
	}
	if (!func_434(uParam0->f_12.f_66, 0)) {
		return false;
	}
	if (uParam0->f_12.f_66 == joaat("stunt") && func_457(*uParam0, 1694.62f, 3276.27f, 41.31f, 1056964608, 0)) {
		return false;
	}
	return true;
}

// Position - 0x1C913
int func_472() { return func_470(&Global_96040.f_2311); }

// Position - 0x1C926
void func_473() { func_474(&Global_96040.f_2311); }

// Position - 0x1C939
void func_474(var *uParam0) {
	if (func_471(uParam0)) {
		streaming::request_model(uParam0->f_12.f_66);
	}
}

// Position - 0x1C957
void func_475() {
	if (streaming::_0x07C313F94746702C(iLocal_1129)) {
		streaming::_0x1EE7D8DF4425F053(iLocal_1129);
	}
}

// Position - 0x1C970
int func_476() {
	if (Global_91491 != 10 && Global_91491 != 9) {
		return 0;
	}
	return Global_91491.f_2;
}

// Position - 0x1C99A
struct<39> func_477(int iParam0) {
	struct<39> Var0;

	if (iParam0 == 0) {
		Var0 = 1;
		Var0.f_1 = {0f, 0f, 0f};
		Var0.f_4 = {0f, 0f, 0f};
		Var0.f_7 = {func_478(0)};
		Var0.f_22 = "Assassin_Valet";
		Var0.f_23 = 7000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = {-1700.015f, -1066.335f, 12.144f};
		Var0.f_28 = {-1691.564f, -1066.514f, 12.076f};
		Var0.f_31 = 35.4714f;
		Var0.f_10 = {-1700.467f, -1066.672f, 13.8795f};
		Var0.f_13 = {-4.8332f, 0f, -177.1283f};
		Var0.f_16 = {-1700.467f, -1066.672f, 13.8795f};
		Var0.f_19 = {-4.8332f, 0f, -177.1283f};
		Var0.f_33 = {-1700.098f, -1067.939f, 12.1547f};
		Var0.f_36 = 162.4559f;
		Var0.f_37 = 1;
	}
	else if (iParam0 == 1) {
		Var0 = 0;
		Var0.f_1 = {-699.3992f, -917.5043f, 18.2143f};
		Var0.f_4 = {0f, 0f, 0f};
		Var0.f_7 = {func_478(1)};
		Var0.f_22 = "Assassin_Multi";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = {-700.1855f, -917.9558f, 18.2143f};
		Var0.f_28 = {-699.9455f, -921.7786f, 18.0144f};
		Var0.f_31 = 78.0874f;
		Var0.f_10 = {-697.8064f, -921.4629f, 20.5104f};
		Var0.f_13 = {-13.5249f, 0f, 30.6033f};
		Var0.f_16 = {-702.4851f, -921.2747f, 21.1235f};
		Var0.f_19 = {-22.5196f, 0f, -43.0435f};
		Var0.f_33 = {0f, 0f, 0f};
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 2) {
		Var0 = 0;
		Var0.f_1 = {215.1206f, -853.3143f, 29.3684f};
		Var0.f_4 = {0f, 0f, 87.1787f};
		Var0.f_7 = {func_478(2)};
		Var0.f_22 = "Assassin_Hooker";
		Var0.f_23 = 3000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = {213.7994f, -853.9389f, 29.3929f};
		Var0.f_28 = {205.2641f, -847.2667f, 29.4903f};
		Var0.f_31 = 140.1039f;
		Var0.f_10 = {216.7391f, -856.0031f, 32.7127f};
		Var0.f_13 = {-25.1365f, 0f, 41.3912f};
		Var0.f_16 = {210.4668f, -851.3092f, 32.1099f};
		Var0.f_19 = {-16.3326f, 0f, -127.0114f};
		Var0.f_33 = {213.8733f, -853.8161f, 29.3922f};
		Var0.f_36 = 344.0112f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 3) {
		Var0 = 0;
		Var0.f_1 = {-22.5499f, -107.3546f, 56.0161f};
		Var0.f_4 = {0f, 0f, 269.7924f};
		Var0.f_7 = {func_478(3)};
		Var0.f_22 = "Assassin_Bus";
		Var0.f_23 = 5000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = -1;
		Var0.f_25 = {-22.3125f, -108.9183f, 56.0068f};
		Var0.f_28 = {-17.2677f, -118.5915f, 55.8734f};
		Var0.f_31 = 1.4374f;
		Var0.f_10 = {-26.1094f, -108.0298f, 59.052f};
		Var0.f_13 = {-21.2059f, 0f, -109.0176f};
		Var0.f_16 = {-20.1189f, -111.9639f, 59.4377f};
		Var0.f_19 = {-27.0037f, 0f, 29.464f};
		Var0.f_33 = {0f, 0f, 0f};
		Var0.f_36 = 0f;
		Var0.f_37 = 0;
	}
	else if (iParam0 == 4) {
		Var0 = 0;
		Var0.f_1 = {806.1469f, -1070.21f, 27.3361f};
		Var0.f_4 = {0f, 0f, 90f};
		Var0.f_7 = {func_478(4)};
		Var0.f_22 = "Assassin_Construction";
		Var0.f_23 = 8000f;
		Var0.f_24 = 2000f;
		Var0.f_32 = 1;
		Var0.f_25 = {804.9559f, -1070.46f, 27.3361f};
		Var0.f_28 = {799.8408f, -1079.142f, 27.321f};
		Var0.f_31 = 69.6524f;
		Var0.f_10 = {801.8048f, -1068.068f, 30.3496f};
		Var0.f_13 = {-20.8953f, 0f, -132.9451f};
		Var0.f_16 = {805.8168f, -1074.496f, 28.9803f};
		Var0.f_19 = {-1.5585f, 0f, 6.9143f};
		Var0.f_33 = {804.8776f, -1070.523f, 27.3416f};
		Var0.f_36 = 287.8741f;
		Var0.f_37 = 0;
	}
	return Var0;
}

// Position - 0x1CE52
Vector3
func_478(int iParam0) {
	switch (iParam0) {
	case 0: return -1704.427f, -1077.316f, 12.1111f;

	case 1: return -700.429f, -916.7467f, 18.2143f;

	case 2: return 214.1641f, -852.8006f, 29.3929f;

	case 3: return -21.9871f, -107.4823f, 55.997f;

	case 4: return 806.1469f, -1070.21f, 27.3361f;

	default:
	}
	return 0f, 0f, 0f;
}

// Position - 0x1CEDC
void func_479() {
	bool bVar0;

	bVar0 = func_111(Global_101700.f_18922.f_1, 4096);
	Global_101700.f_18922.f_1 = 0;
	if (bVar0) {
		func_490(&Global_101700.f_18922.f_1, 4096);
	}
}

// Position - 0x1CF15
void func_480() {}

// Position - 0x1CF1D
bool func_481() { return func_471(&Global_96040.f_2311); }

// Position - 0x1CF30
bool func_482() {
	if (Global_91491 == 10 || Global_91491 == 9) {
		return true;
	}
	return false;
}

// Position - 0x1CF54
void func_483() {
	if (func_52(&uLocal_1335)) {
		Global_101700.f_18922.f_5 = func_46(&uLocal_1335);
	}
	if (!iLocal_1175) {
		audio::trigger_music_event("ASS1_LOST");
	}
	audio::release_named_script_audio_bank("SCRIPT\ASSASSINATION_MULTI");
	func_247();
	func_230();
	func_235();
	func_236(1);
	func_384();
	func_487();
	func_410(0);
	func_3();
	if (entity::does_entity_exist(Global_88321.f_28[0])) {
		entity::set_entity_as_mission_entity(Global_88321.f_28[0], 1, 1);
		entity::set_object_as_no_longer_needed(&Global_88321.f_28[0]);
	}
	ped::remove_scenario_blocking_area(iLocal_1127, 0);
	ped::remove_scenario_blocking_area(iLocal_1128, 0);
	func_475();
	func_79(&iLocal_1528, 0, 0);
	if (!entity::is_entity_dead(player::player_ped_id(), 0)) {
		func_485(player::player_ped_id(), 1);
		ped::set_ped_using_action_mode(player::player_ped_id(), 0, -1, 0);
	}
	player::set_wanted_level_multiplier(1f);
	ped::clear_ped_non_creation_area();
	ped::set_ped_model_is_suppressed(iLocal_1326, 0);
	ped::set_ped_model_is_suppressed(iLocal_1327, 0);
	func_484();
	script::terminate_this_thread();
}

// Position - 0x1D03E
void func_484() {
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3) {
		if (!entity::is_entity_dead(player::player_ped_id(), 0) && !ped::is_ped_injured(player::player_ped_id())) {
			if (func_256(vLocal_1247[iVar0 /*3*/], 1) < 5f) {
				entity::set_entity_coords(player::player_ped_id(), -1223.185f, -185.4723f, 38.1753f, 1, 0, 0, 1);
				entity::set_entity_heading(player::player_ped_id(), 119.5633f);
			}
		}
		iVar0++;
	}
}

// Position - 0x1D0AE
void func_485(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	if (entity::does_entity_exist(iParam0)) {
		if (weapon::get_current_ped_weapon(iParam0, &iVar0, 0)) {
			if (iVar0 != 0 && iVar0 != joaat("weapon_unarmed")) {
				if (!func_486(iParam1, iVar0)) {
					iVar0 = 0;
				}
			}
		}
	}
	if (Global_91528 > 0) {
		Global_96040.f_21[iParam1] = iVar0;
	}
	else {
		Global_93635.f_21[iParam1] = iVar0;
	}
}

// Position - 0x1D114
int func_486(int iParam0, int iParam1) {
	int iVar0;

	iVar0 = 0;
	if (Global_91528 > 0) {
		iVar0 = 0;
		while (iVar0 < 44) {
			if (Global_96040.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1) {
				if (Global_96040.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0) {
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			if (Global_96040.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1) {
				if (Global_96040.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0) {
					return 1;
				}
			}
			iVar0++;
		}
	}
	else {
		iVar0 = 0;
		while (iVar0 < 44) {
			if (Global_93635.f_812[iParam0 /*284*/][iVar0 /*3*/] == iParam1) {
				if (Global_93635.f_812[iParam0 /*284*/][iVar0 /*3*/].f_1 > 0) {
					return 1;
				}
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 50) {
			if (Global_93635.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/] == iParam1) {
				if (Global_93635.f_812[iParam0 /*284*/].f_133[iVar0 /*3*/].f_1 > 0) {
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

// Position - 0x1D247
void func_487() {
	vehicle::remove_vehicle_recording(102, "ASSOJva");
	vehicle::remove_vehicle_recording(107, "ASSOJva");
	ai::remove_waypoint_recording("OJASva_101");
	ai::remove_waypoint_recording("OJASva_101a");
	ai::remove_waypoint_recording("OJASva_104");
}

// Position - 0x1D27B
void func_488() {
	int iVar0;

	if (script::has_script_loaded("buddyDeathResponse")) {
		system::start_new_script("buddyDeathResponse", 1424);
	}
	if (Global_101700.f_8044 || func_40(0)) {
		if (!func_489()) {
			iVar0 = func_39();
			if (iVar0 != -1) {
				if (!func_33(iVar0)) {
					return;
				}
				gameplay::set_bit(&Global_82576[iVar0 /*5*/].f_1, 5);
				return;
			}
		}
		else {
			func_38();
		}
	}
}

// Position - 0x1D2EC
int func_489() {
	if (Global_91491 == 13 || Global_91491 == 10 || Global_91491 == 11 || Global_91491 == 12) {
		return 0;
	}
	return 1;
}

// Position - 0x1D32A
void func_490(var *uParam0, int iParam1) { func_491(uParam0, iParam1); }

// Position - 0x1D33A
void func_491(var *uParam0, var uParam1) { *uParam0 |= uParam1; }
