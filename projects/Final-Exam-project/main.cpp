#include <iostream>
#include <vector>
#include "Mountain.h"

using namespace std;

int main() {
    
    Mountain chimborazo("Chimborazo", "Ecuador", 20549);
    Mountain matterhorn("Matterhorn", "Switzerland", 14692);
    Mountain olympus("Olympus", "Greece (Macedonia)", 9573);
    Mountain everest("Everest", "Nepal", 29029);
    Mountain mountMarcy("Mount Marcy - Adirondacks", "United States", 5344);
    Mountain mountMitchell("Mount Mitchell - Blue Ridge", "United States", 6684);
    Mountain zugspitze("Zugspitze", "Switzerland", 9719);

   
    vector<Mountain> mountains;
    mountains.push_back(chimborazo);
    mountains.push_back(matterhorn);
    mountains.push_back(olympus);
    mountains.push_back(everest);
    mountains.push_back(mountMarcy);
    mountains.push_back(mountMitchell);
    mountains.push_back(zugspitze);

    
    Mountain shortestMountain = mountains[0]; 

    for (const auto& mountain : mountains) {
        if (mountain.getElevation() < shortestMountain.getElevation()) {
            shortestMountain = mountain;
        }
    }
    
    cout << "Elevation in feet: " << shortestMountain.getElevation() << endl;
    cout << "Shortest Mountain: " << shortestMountain.getName() << endl;
    
    return 0;
}
