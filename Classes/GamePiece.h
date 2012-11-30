#import <UIKit/UIKit.h>

#import "ObjectiveChipmunk.h"

#define FRICTION_AMOUNT 0.4

typedef enum GamePieceSize {
	GamePieceSmall,
	GamePieceMed,
	GamePieceLarge,
} GamePieceSize;

@interface GamePiece : UIImageView <ChipmunkObject> {
	int points;
	
	ChipmunkBody *body;
	NSArray *chipmunkObjects;
}

@property (readonly) NSArray *chipmunkObjects;
@property (readonly) ChipmunkBody *body;
@property (readonly) int points;

+ (id)pieceWithSize:(GamePieceSize)size staticBody:(ChipmunkBody *)staticBody;

@end
