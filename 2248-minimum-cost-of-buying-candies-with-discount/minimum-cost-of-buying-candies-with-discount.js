/**
 * @param {number[]} cost
 * @return {number}
 */
var minimumCost = function(cost) {
    cost.sort((a, b) => b - a);

    return cost.reduce((total, c, i) => 
        (i + 1) % 3 === 0 ? total : total + c, 0);
};