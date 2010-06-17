/*
  Song data from
  http://www.instructables.com/id/Jar-of-Fireflies/
*/


#include "stdint.h"
#include "Songs.h"

/* Songlength : 1.17x
 * Maxbright : 192
*/
const uint8_t      song1anotes[] = {2, 14, 44, 95, 141, 175, 192, 
                     186, 149, 94, 60, 35, 38, 50, 76, 83, 73, 58,
                     43, 30, 20, 14, 16, 25, 30, 27, 20, 11, 4,
                     10, 17, 19, 14, 8, 4, 4, 6, 9, 9, 4, 2, 4,
                     14, 37, 79, 133, 173, 185, 172, 143, 106, 70,
                     45, 36, 44, 60, 75, 75, 59, 37, 20, 12, 16,
                     22, 26, 25, 22, 18, 14, 10, 7, 5, 7, 10, 10,
                     9, 7, 6, 5, 4, 5, 6, 6, 6, 5, 4, 3, 2, 2, 1, 0};
int song1size = sizeof(song1anotes);
Song song1a = { sizeof(song1anotes), song1anotes };

/* Songlength : 1.35x
 * Maxbright : 192
*/
const uint8_t      song1bnotes[] = {5, 17, 45, 89, 131, 163, 185, 
                    192, 180, 143, 95, 64, 41, 31, 44, 55, 79,
                    82, 73, 61, 48, 36, 26, 18, 14, 15, 23, 30,
                    29, 24, 17, 9, 4, 9, 15, 19, 17, 12, 6, 3, 3,
                    6, 8, 9, 7, 3, 2, 4, 12, 30, 61, 105, 149,
                    178, 184, 172, 148, 116, 84, 57, 41, 36, 44,
                    58, 72, 76, 68, 51, 32, 18, 12, 14, 20, 24,
                    26, 24, 21, 18, 15, 11, 8, 5, 5, 8, 10, 10,
                    9, 8, 6, 5, 4, 4, 5, 6, 6, 6, 5, 5, 4, 3, 2,
                    2, 1, 0};
Song song1b = { sizeof(song1bnotes), song1bnotes };

/* Songlength : 1.12
 * Maxbright : 192
*/
const uint8_t      song1cnotes[] = {2, 16, 52, 106, 151, 182, 192, 
                   174, 122, 74, 44, 31, 46, 64, 83, 75, 60, 45,
                   31, 20, 14, 16, 25, 30, 26, 18, 8, 5, 13, 18,
                   17, 11, 5, 3, 5, 8, 9, 6, 2, 3, 12, 35, 77,
                   133, 174, 184, 168, 135, 96, 61, 40, 37, 50,
                   68, 77, 67, 45, 24, 13, 14, 21, 25, 25, 22,
                   18, 14, 10, 6, 4, 8, 10, 9, 8, 7, 5, 4, 4, 5,
                   6, 6, 5, 4, 3, 2, 2, 1, 0};
Song song1c = { sizeof(song1cnotes), song1cnotes };

/* Songlength : 1.00x
 * Maxbright : 202
*/
// Deemed too fast by Kayobi
const uint8_t      song1dnotes[] = {8, 28, 78, 133, 176, 195, 171, 
                   105, 62, 37, 41, 54, 81, 74, 59, 43, 29, 19,
                   16, 24, 32, 29, 20, 8, 8, 18, 22, 18, 11, 5,
                   5, 8, 11, 6, 4, 6, 23, 63, 132, 192, 202,
                   166, 115, 71, 45, 38, 51, 72, 73, 50, 28, 17,
                   14, 20, 25, 26, 23, 19, 14, 10, 6, 7, 12, 10,
                   7, 4, 0};
Song song1d = { sizeof(song1dnotes), song1dnotes };

/* Songlength : 1.50x
 * Maxbright : 192
*/
const uint8_t      song1enotes[] = {5, 15, 32, 64, 99, 132, 160, 
                   179, 183, 167, 131, 89, 62, 44, 32, 36, 44,
                   54, 74, 74, 67, 57, 47, 38, 29, 21, 16, 14,
                   17, 24, 29, 29, 26, 20, 14, 6, 6, 13, 18, 20,
                   19, 16, 11, 6, 4, 4, 6, 9, 10, 8, 5, 3, 4, 7,
                   18, 37, 68, 112, 156, 186, 192, 176, 148,
                   115, 85, 61, 45, 36, 36, 45, 58, 69, 70, 59,
                   43, 29, 20, 15, 13, 15, 20, 23, 24, 24, 22,
                   20, 17, 14, 11, 8, 6, 5, 7, 11, 11, 9, 7, 5,
                   3, 0};
Song song1e = { sizeof(song1enotes), song1enotes };


/* Songlength : 1.05x
 * Maxbright : 192
 * flatduration : 787
*/
const uint8_t      song2anotes[] = {2, 29, 81, 123, 130, 104, 63, 24, 2, 
                             1, 1, 1, 1, 1, 1, 4, 15, 26, 36, 46, 55, 66,
                             79, 91, 102, 109, 115, 121, 131, 142, 152,
                             155, 151, 141, 133, 131, 135, 144, 153, 158,
                             158, 154, 151, 150, 149, 148, 144, 139, 136,
                             138, 145, 155, 161, 160, 153, 144, 138, 139,
                             145, 152, 156, 154, 148, 141, 138, 140, 145,
                             150, 153, 153, 152, 152, 154, 154, 150, 142,
                             134, 129, 132, 142, 156, 168, 170, 161, 146,
                             131, 121, 117, 116, 116, 115, 113, 110, 109,
                             106, 101, 92, 80, 67, 58, 52, 49, 46, 43, 39,
                             33, 27, 22, 18, 14, 11, 7, 5, 3, 1, 1, 0, 1,
							 0};
Song song2a = { sizeof(song2anotes), song2anotes };

/* Songlength : 0.95x
 * Maxbright : 192
 * flatduration : 787
*/
const uint8_t      song2bnotes[] = {1, 31, 89, 126, 119, 85, 42, 6, 1, 1,
                              1, 1, 1, 1, 8, 22, 37, 51, 64, 72, 80, 92,
                              108, 122, 127, 122, 117, 124, 143, 163, 167,
                              155, 139, 135, 142, 150, 150, 141, 131, 129,
                              133, 139, 143, 146, 149, 152, 150, 144, 138,
                              138, 145, 150, 147, 137, 132, 137, 153, 166,
                              167, 156, 148, 149, 156, 161, 156, 147, 141,
                              145, 152, 157, 156, 154, 156, 161, 161, 152,
                              140, 133, 131, 130, 124, 114, 105, 102, 103,
                              101, 93, 82, 74, 68, 63, 55, 46, 38, 32, 29,
                              25, 20, 15, 11, 8, 6, 4, 2, 1, 1, 0, 0};
Song song2b = { sizeof(song2bnotes), song2bnotes };

/* Songlength : 1.15x
 * Maxbright : 192
 * flatduration : 787
*/
const uint8_t      song2cnotes[] = {2, 25, 70, 117, 146, 144, 111, 61, 18, 
                              1, 1, 1, 1, 1, 1, 1, 1, 8, 18, 28, 39, 50,
                              60, 69, 78, 85, 92, 99, 105, 111, 118, 126,
                              134, 142, 149, 155, 159, 161, 160, 156, 152,
                              146, 139, 134, 129, 126, 125, 126, 129, 134,
                              140, 148, 155, 162, 168, 171, 172, 171, 168,
                              163, 158, 153, 149, 146, 144, 144, 146, 148,
                              151, 154, 157, 158, 158, 157, 154, 150, 145,
                              141, 137, 134, 133, 132, 134, 136, 139, 143,
                              147, 149, 150, 150, 147, 143, 138, 133, 128,
                              123, 118, 115, 113, 111, 109, 108, 105, 102,
                              98, 92, 86, 78, 70, 63, 55, 48, 42, 37, 33,
                              29, 25, 22, 19, 16, 13, 10, 7, 5, 3, 2, 1,
                              1, 0, 0};
Song song2c = { sizeof(song2cnotes), song2cnotes };


/* Songlength : 1x
 * Maxbright : 192
 * flatduration : 787 * 0.65
*/
const uint8_t      song2dnotes[] = {1, 27, 72, 109, 121, 104, 61, 17, 1, 1, 
                              1, 1, 1, 1, 1, 11, 21, 34, 48, 60, 70, 77,
                              86, 99, 115, 128, 135, 135, 134, 136, 141,
                              144, 143, 139, 138, 141, 147, 148, 142, 131,
                              123, 126, 138, 153, 164, 166, 161, 156, 154,
                              154, 153, 151, 150, 155, 163, 169, 166, 152,
                              136, 126, 128, 139, 151, 156, 153, 146, 140,
                              136, 131, 123, 115, 110, 110, 112, 110, 100,
                              86, 73, 65, 62, 60, 58, 52, 46, 40, 35, 31,
                              25, 20, 15, 11, 8, 6, 4, 2, 1, 1, 0, 0};
Song song2d = { sizeof(song2dnotes), song2dnotes };

/* Songlength : 1.1x
 * Maxbright : 192
 * flatduration : 787 * 1.25
*/
const uint8_t      song2enotes[] = {1, 26, 73, 116, 131, 115, 80, 39, 8, 
                              1, 1, 1, 1, 1, 1, 1, 6, 15, 26, 36, 47, 58,
                              70, 82, 91, 98, 102, 106, 111, 119, 131, 144,
                              154, 157, 153, 144, 137, 134, 137, 146, 154,
                              158, 156, 149, 141, 137, 138, 143, 151, 157,
                              158, 155, 151, 148, 150, 154, 158, 160, 158,
                              153, 148, 144, 145, 147, 150, 150, 146, 140,
                              133, 130, 131, 135, 140, 143, 144, 142, 141,
                              141, 144, 149, 153, 156, 157, 157, 157, 160,
                              164, 167, 167, 161, 153, 145, 142, 143, 149,
                              154, 155, 149, 137, 124, 115, 112, 116, 123,
                              128, 128, 121, 110, 99, 91, 88, 88, 89, 87,
                              83, 75, 66, 57, 50, 44, 38, 34, 29, 25, 20,
                              17, 13, 9, 7, 4, 3, 1, 1, 0, 1, 0};
Song song2e = { sizeof(song2enotes), song2enotes };

/* Songlength : 0.90x
 * Maxbright : 192
 * flatduration : 787 * 0.75
*/
const  uint8_t      song2fnotes[] = {2, 36, 94, 130, 121, 79, 27, 1, 1, 1, 
                              1, 1, 1, 5, 16, 30, 45, 59, 71, 82, 94, 107,
                              119, 130, 137, 142, 147, 151, 154, 153, 149,
                              144, 141, 141, 143, 143, 140, 134, 131, 135,
                              145, 160, 171, 172, 163, 150, 141, 140, 145,
                              151, 152, 147, 138, 134, 136, 147, 159, 165,
                              162, 152, 140, 132, 129, 131, 132, 131, 127,
                              123, 119, 116, 112, 105, 96, 86, 77, 69, 62,
                              54, 45, 38, 31, 27, 23, 19, 14, 10, 6, 4, 2,
                              1, 1, 0, 0};
Song song2f = { sizeof(song2fnotes), song2fnotes };

/* Songlength : 0.80x
 * Maxbright : 192
 * flatduration : 787 * 0.30
*/
const uint8_t      song2gnotes[] = {2, 42, 99, 121, 96, 42, 3, 1, 1, 1, 1, 
                              1, 12, 25, 41, 60, 77, 86, 91, 100, 118, 136,
                              144, 143, 141, 146, 153, 155, 153, 152, 155,
                              154, 148, 141, 142, 152, 159, 154, 142, 136,
                              141, 152, 153, 143, 132, 126, 124, 120, 111,
                              101, 92, 83, 72, 59, 49, 43, 38, 30, 21, 15,
                              11, 8, 5, 3, 1, 1, 0, 0};
Song song2g = { sizeof(song2gnotes), song2gnotes };


Song* Song1[] = {&song1a, &song1b, &song1c, &song1d, &song1e};
int song1Len  = sizeof(Song1)/sizeof(&song1a);

Song* Song2[] = {&song2a, &song2b, &song2c, &song2d, &song2e, &song2f, &song2g};
int song2Len  = sizeof(Song2)/sizeof(&song2a);




